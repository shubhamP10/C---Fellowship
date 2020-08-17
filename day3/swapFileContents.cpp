#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> fileData1; 
vector<string> fileData2;

vector<string> readFromFile(string fileName);
void swapAndWrite(vector<string> data1, vector<string> data2);
void writeToFile(string fileName, vector<string> data);

int main(){
    fileData1 = readFromFile("file1.txt");
    fileData2 = readFromFile("file2.txt");
    cout << "Before\n";
    cout << "File1 Data " << fileData1[0] << endl;
    cout << "File2 Data " << fileData2[0] << endl << endl; 

    swapAndWrite(fileData1, fileData2);

    cout << "File1 Data " << fileData1[0] << endl;
    cout << "File2 Data " << fileData2[0] << endl; 

    return 0;
}



vector<string> readFromFile(string fileName){
    vector<string> fileData;
    int i = 0;
    ifstream readFile;
    readFile.open(fileName);
    string line;
    if (readFile.is_open())
    {
        while(readFile)
        {
            getline(readFile , line);
            fileData.push_back(line);
            i++;
        } 
    }
    readFile.close();
    return fileData;
}

void swapAndWrite(vector<string> data1, vector<string> data2){
    writeToFile("file1.txt", fileData2);
    writeToFile("file2.txt", fileData1);
}

void writeToFile(string fileName, vector<string> data){
    ofstream writer;
    writer.open(fileName);
    vector<string>::iterator itr;

    for (itr = data.begin(); itr < data.end(); itr++)
    {
        writer << *itr;
    }
}