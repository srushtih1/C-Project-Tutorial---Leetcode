#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){

    //declaring the file (creating)
    ofstream myFile("input.txt");
    myFile<< "This is a test file! I am Srushti..."<<endl;
    myFile.close();

    //writing data in the existing file, bydefault ios::out for ofstram
    //this will override the existing data in the file
    myFile.open("input.txt", ios::out);
    myFile << "Writing again in the input file..."<<endl;
    myFile.close();

    //append data to exisitng file
    myFile.open("input.txt",ios::app);
    myFile << "Appending again in the input file..."<<endl;
    myFile.close();

    string line;
    ifstream myReadFile("input.txt",ios::in);
    while(getline(myReadFile, line)) {
        cout<< line;
    }
    myReadFile.close();

    string line1;
    fstream myBothFile("srushti.txt", ios::in | ios::out);

    if(!myBothFile.is_open()){
        cout<<"Issue opening the file"<<endl;
    }

    myBothFile<< "I am Software Test engineer. I completed my masters degree in March"<<endl;
    myBothFile.close();


    myBothFile.open("srushti.txt", ios::in | ios::out |ios::app);
    while(getline(myBothFile, line1)){
        cout<< line1;
    }

    myBothFile<<"Currently residing in California USA!"<<endl;
    myBothFile.close();
    
    myBothFile.open("srushti.txt",ios::in);
    while(getline(myBothFile, line1)){
        cout<< line1;
    }
    myBothFile.close();

    return 0;
}