// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
    // int a;
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"The factoral of "<<a<<" is : "<<factorial(a)<<endl;
//     return 0;
// }

// Fibonaccai Series

#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int a;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"The fibonaccai index at  "<<a<<" is : "<<fib(a)<<endl;
    return 0;
}