#include<iostream>
using namespace std;
int main(){
    int A[5];
    cout<<"Enter the 5 Number"<<endl;
    for(int i=0;i<5;i++){
        cin>>A[i];
    }
    cout<<"The Number Given By You"<<endl;
    for(int i=0;i<10;i++){
        cout<<A[i];
        cout<<endl;
    }
    return 0;
}