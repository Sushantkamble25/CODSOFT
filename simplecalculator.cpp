#include <iostream>
using namespace std;
 
int main()
{
   char op;

   float num1,num2;

   cout<<"enter first number "<<endl;
   cin>>num1;

   cout<<"\a enter second number "<<endl;
   cin>>num2;

   cout<<"\tEnter one of these operator (+,-,*,/) to perform task"<<endl;
   cin>>op;

   switch(op){

    case '+':
    cout<<"The Addition is-"<<num1+num2<<endl;
    break;

    case '-':
    cout<<"The Subtraction is-"<<num1-num2<<endl;
    break;

    case '*':
    cout<<"The Multiplication is-"<<num1*num2<<endl;
    break;

    case '/':
    cout<<"The Division is-"<<num1/num2<<endl;
    break;

    default :
    cout<<"Wrong operator selected!!";
   }
return 0;
}