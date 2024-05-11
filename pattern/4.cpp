#include <iostream>
using namespace std;
//hollow rectangle/square

int main(){
    int n, m; //rows and columns
    cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        // if(i==0 || i==n-1){
        //     //i==4 mtlb length-1 hoga 
        //     cout<<"* ";
        // }

        // else{
        //     if(j==0||j==m-1){
        //         cout<<"* ";
        //     }
        //     else{
        //         cout<<"  ";
        //     }
        // }



        if(i==0||i==n-1||j==0||j==m-1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
        
    }
    cout<<endl;
}



    return 0;
}