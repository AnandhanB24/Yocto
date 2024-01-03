#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    char choice;
    int a,b;
    cout<<"\t\t CALCULATOR \t\t";
    cout<<"\n Operations Possibe: ' + - * / ' " ;
    cout<<"\n Enter your choice:";
    cin>>choice;
    switch(choice){
        case '+':
            cout<<"Enter 'a': ";
            cin>>a;
            cout<<"Enter 'b': ";
            cin>>b;
            cout<<"a + b = "<< a+b<<"\n";
            break;
        case '-':
            cout<<"Enter 'a': ";
            cin>>a;
            cout<<"Enter 'b': ";
            cin>>b;
            cout<<"a - b = " << a-b <<"\n";
            break;
        case '*':
            cout<<"Enter 'a': ";
            cin>>a;
            cout<<"Enter 'b': ";
            cin>>b;
            cout<<"a * b = "<< a*b << "\n";
            break;
        default:
            cout<<"Invalid choice\n";
            break;
        
    }
    return 0;
}