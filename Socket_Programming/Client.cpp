// Client side C/C++ program to demonstrate Socket programming 
#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#include<iostream>
#include <thread>

#define PORT 8080 

//void sendMsgs(int);
//void recvMsgs(int);

void sendMsgs(int sock) {
	int valread = 0;
	char msg[1024]; 

	while(true){
		memset(msg, 0, sizeof msg);
		std::cin.getline(msg, 1024);
		send(sock ,msg ,strlen(msg) ,0); 
	}
}

void recvMsgs(int sock) {
	int valread = 0;
	char buffer[1024] = {0}; 

	while(true){
		memset(buffer, 0, sizeof buffer);
		valread = read(sock, buffer, 1024); 
		printf("Server: %s\n", buffer ); 
	}
}

int main(int argc, char const *argv[]) 
{ 
	int sock = 0; 
	struct sockaddr_in serv_addr; 
	
	
	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
	{ 
		printf("\n Socket creation error \n"); 
		return -1; 
	} 

	serv_addr.sin_family = AF_INET; 
	serv_addr.sin_port = htons(PORT); 
	
	// Convert IPv4 and IPv6 addresses from text to binary form 
	if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) 
	//if(inet_pton(AF_INET, "192.168.43.15", &serv_addr.sin_addr)<=0) 
	{ 
		printf("\nInvalid address/ Address not supported \n"); 
		return -1; 
	} 

	if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) { 
		printf("\nConnection Failed \n"); 
		return -1; 
	} else {
		printf("\nConnected with server. Sending data...\n");
	}

	std::thread send_thread (sendMsgs, sock);
	std::thread recv_thread (recvMsgs, sock);

	send_thread.join();
	recv_thread.join();
	

	close(sock);
	return 0; 
} 

//g++ -std=c++14 -pthread  Client.cpp -o client
