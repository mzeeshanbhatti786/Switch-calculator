#include <iostream>
using namespace std;

int main() 
{int num1,num2;
int choice;
    cout << "enter your number 1"<<endl;
    cin>>num1;
    cout<<"enter your number 2 "<<endl;
    cin>>num2;
    cout<<"Here is your calculator"<<endl;
    cout<<"enter your choice"<<endl;
    cout<<"1 for addition\n"<<"2 for subtraction\n"<<"3 for Multiplication\n"<<"4 for division\n"<<endl;
    cin>>choice;
    switch(choice)
    {case 1 :
    cout<<num1+num2<<endl;
    break;
    case 2 :
    cout<<num1-num2<<endl;
    break;
    case 3 :
    cout<<num1*num2<<endl;
    break;
    case 4:
    cout<<num1/num2<<endl;
    break;
    default:
    cout<<"invalid input"<<endl;




    }

    return 0;
}