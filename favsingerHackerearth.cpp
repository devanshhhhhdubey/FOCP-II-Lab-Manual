#include <iostream>
using namespace std;
int main(){
    int arr[1000]={0};
    int n;

    int sno;
    cout<<"enter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"enter sno:" ;
        cin>>sno;
        arr[sno]++;
    }
    cout<<endl<<"frequency";
    for(int j=0; j<=70; j++){
        if(arr[j]!=0){
            cout<<"\n arr["<<j<<"] is: "<<arr[j];
        }
    }

    int maxFreq = 0;
    for(int i = 0; i <= 70; i++){
        if(arr[i] > maxFreq){
            maxFreq = arr[i];
        }
    }

    int favSingerCount = 0;
    for(int i = 0; i <= 70; i++){
        if(arr[i] == maxFreq){
            favSingerCount++;
        }
    }

    cout << "\n\nNumber of favourite singers: " << favSingerCount;
    return 0;
}