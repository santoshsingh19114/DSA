#include <iostream>
using namespace std;

void mixpyrimid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        for (int j=0;j<2*i+1;j++){
            cout<<" ";
        }
         for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }


    //part 2
     for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }

        for (int j=0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
         for(int j=0;j<i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
mixpyrimid(n);

return 0;
}