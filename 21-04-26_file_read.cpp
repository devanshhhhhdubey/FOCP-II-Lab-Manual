#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("final.txt");
    string word;
    int wordCount=0;
    string line;

    int lineCount=0;

    if(!fin.is_open()){
        cout<<"\n issue with the file, cant read";
        return 0;
    }

    while (fin>>line) {
        wordCount++;
    }

    cout<<"No of words: "<<wordCount<<endl;

    // while(fin>>line)         // reads word by word 
    // //while(getline(fin,line)) // reads line by line
    // {
    //     cout<<line<<endl;
    // }

    fin.close();

    // use this seekg(5,ios::beg); get pointer (reading) instead of opening the file again
    // seekp put pointer(writing). 
    
    fin.open("final.txt");

    while(getline(fin,line)){
        lineCount++;
    }

    
    cout<<"No of lines: "<<lineCount;

}