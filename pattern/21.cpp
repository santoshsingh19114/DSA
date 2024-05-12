#include <iostream>
using namespace std;


void ABCBA(int n){
    for(int i=0;i<n;i++){
        char ch='A'-1;
        for(int j=0;j<i+1;j++){
            ch=ch+1;
            cout<<ch<<" ";
        }
        ch--;
    while(ch>='A'){
        
        cout<<ch<<" ";
        ch--;
    }
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    ABCBA(n);
    
    return 0;
}