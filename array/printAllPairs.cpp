#include<iostream>
using namespace std;


int main(){
    int arr[5]={10,20,30,40,50};
    int n =5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }     
return 0;
}
