#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int totalcol=i+1;
    for(int j=0;j<i+1;j++){
        if(i==0||i==1||i==n-1){
            cout<<"* ";
        }
        else{
            if(j==0||j==totalcol-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        
    }
    cout<<endl;
}

    return 0;

}