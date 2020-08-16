#include <iostream>
#include <fstream>

using namespace std;

void read();

int main(){

    fstream fileStream;
    // fileStream.open("./demo.txt",ios::in);
    fileStream.open("demo.txt", ios::out | ios::app);
    if (fileStream.is_open())
    {
        cout << "File Is Opened" << endl;
        fileStream << "line1" << endl;
        fileStream << "line2" << endl;
    }else
    {
        cout << "Not Opened" << endl;
    }
    fileStream.close();
    read();
    return 0;
}

void read(){
    fstream fileStream;
    fileStream.open("demo.txt", ios::in);
    string line;
    if (fileStream.is_open())   
    {
        cout << "File is Opened For Reading" << endl;
        while(fileStream)
        {
            getline(fileStream , line);
            cout << line << endl;
        } 
    }
    fileStream.close();
}