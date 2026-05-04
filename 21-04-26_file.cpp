#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // by default ios::out
    ofstream fout("C:/Users/kamiz/Documents/Tyson.txt"); // ofstream truncates the content in the file and creates a new file if doesn't exist
    // fstream fout("Tyson.txt", ios::out);

    fout << "\n 1234567 \n sdf dsg dgdfg fhgfhgfhhghj";
    fout << "dfd fghj ghjghguh ghjghjjhgj";

    fout.close();

    cout << "Data written successfully";


    //also try for ios::app;
    
}