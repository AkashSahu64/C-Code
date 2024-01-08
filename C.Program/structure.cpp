#include<iostream>
using namespace std;
// struct employee
// {
//     int eid;
//     char name;
//     float salary;
// };
typedef struct employee
{
    /* data */
    int eid;
    char name;
    float salary;
}ep;



int main(){
   // struct employee akash;
    ep akash;
    akash.eid=1;
    akash.name='A';
    akash.salary=120000000;
    cout<<"The Employee ID is :"<<akash.eid<<endl;
    cout<<"The employe Name is :"<<akash.name<<endl;
    
    
    return 0;
}