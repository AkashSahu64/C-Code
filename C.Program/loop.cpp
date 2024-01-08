#include<iostream>

using namespace std;

int main(){

    // int age;
    // cout<<"Plrease tell me your age"<<endl;
    // cin>>age;
    // if(age<18){
    //     cout<<"You can not enter in the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"Show me your pass and then enter"<<endl;
    // }
    // else{
    //     cout<<"You enter in the party";
    // }
    int num;
    int i=5;

    cout<<"Enter number :"<<endl;
    cin>>num;
    do{
        cout<<num*i<<endl;
        num++;
    }while(num<=10);
    return 0;
}