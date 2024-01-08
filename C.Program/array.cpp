#include<iostream>
using namespace std;

int main(){
    int mark[]={34,56,66,474,57};
    for(int i=0; i<5; i++){
        cout<<"The mark "<<i<<" is "<<mark[i]<<endl;
        // int *p=mark;
        // cout<<"The valur of index 0 is : "<<*p<<endl;
    }
     int *p=mark;
     cout<<"The valur of index 0 is : "<<*p<<endl;
     cout<<"The valur of index 1 is : "<<*(p+1)<<endl;
    return 0;
}