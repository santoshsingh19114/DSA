#include <iostream>
using namespace std;


void sort_zeroOne(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
    }
    else{
        onecount++;
    }


}


int i=0;
for(i;i<zerocount;i++){
    arr[i] = 0;
}
for( ;i<n;i++){
    arr[i] = 1;
}

}
int main(){
    int arr[] ={0,1,1,1,0,0,1};
    int size =7;

    sort_zeroOne(arr,size);


    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }


return 0;
}