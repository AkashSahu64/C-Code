#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the valu of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    if(a<b){
        cout<<"a is less than b"<<endl;
    }
    else if(a==b){
        cout<<"Both number is equal"<<endl;
    }
    else{
        cout<<"a is greater than b"<<endl;
    }
    return 0;
}