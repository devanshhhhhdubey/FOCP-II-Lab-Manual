#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("final.txt");
    string word;
    string line;

    if(!fin.is_open()){
        cout<<"\n issue with the file, cant read";
        return 0;
    }

    //while(fin>>line)         // reads word by word 
    cout<<"\n cursor position before we start reading "<<fin.tellg()<<endl;
    while(getline(fin,line)) // reads line by line
    {
        cout<<line<<endl;
        cout<<"\n read curson position "<<fin.tellg()<<endl;
    }

    fin.close();
}