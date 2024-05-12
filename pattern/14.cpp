#include <iostream>
using namespace std;

void fullpyramid(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int k=0;k<i+1;k++){
            cout<<"* ";
        }

       

        cout<<endl;
    }
}
void invertedpyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    fullpyramid(n);
    invertedpyramid(n);

    return 0;

}