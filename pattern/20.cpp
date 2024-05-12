#include <iostream>
using namespace std;

void fancypattern(int n){
    for (int i = 0; i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void invertedfancy(int n){
    n--;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*(n-i)-1;j++){
            if(j%2==0){
                cout<<n-i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;

    fancypattern(n);
    invertedfancy(n);
    return 0;
}