#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("num.txt");
    fout << 11 << " " << 23 << " " << 46;
    fout.close();
    
    ifstream fin("num.txt");
    char a , b, c;  //use int a , b , c; to read the full numbers also try char and string
    fin >> a >> b >> c;
    cout<<a<<"  "<<b<<"  "<<c<<endl;
    cout<< a + b + c;
    fin.close();


}