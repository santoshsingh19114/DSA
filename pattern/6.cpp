#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
//dono shi h 
for(int i=n;i>=0;i--){
    for(int j=0;j<=i-1;j++){
        cout<<"* ";
    }
    cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
}



return 0;
}