// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }

// int main(){
    // int n1,n2;
    // cout<<"Enter your first number :"<<endl;
    // cin>>n1;
    // cout<<"Enter your Second number :"<<endl;
    // cin>>n2;
    // cout<<"The sum is :"<<sum(n1,n2);
    // return 0;
// }

// Function Prototyping

#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int n1,n2;
    cout<<"Enter your first number :"<<endl;
    cin>>n1;
    cout<<"Enter your Second number :"<<endl;
    cin>>n2;
    cout<<"The sum is :"<<sum(n1,n2);
    return 0;
}

int sum(int a, int b){
    int c=a+b;
    return c;
}
