#include <iostream>
using namespace std;



void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){

// int arr[10];

// int brr[]={10,20,30,70};
// int crr[4]={0};

// cout<<crr[2]<<endl;
// cout<<brr[3]<<endl;

// int arr[4];
// fill(arr,arr+4,23);
// cout<<arr[0]<<arr[1]<<arr[2]<<endl;



// int a[5];
// for(int i=0;i<5;i++){
//     cin>>a[i];
//     cout<<endl;
// }


// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }



//function with array 

int arr[]={10,20,30,40,50};
int size=5;

print(arr,size);

return 0;
}