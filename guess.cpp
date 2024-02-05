#include <iostream>
#include <ctime>
using namespace std;
 
int main()
{
    srand(time(0));  //to use randomnly changing value

    int number = rand() % 100 + 1; // random value generation 

    int guess = 0;
     
     int moves = 0;

     do{

        moves ++;

        cout<<"\tGuess no from 1-100 ";
        cin>>guess;

        if(guess == number )
        cout<<"Correct Number ! in "<<moves<<" moves "<<endl;

        else if(guess < number )
        cout<<"Guess Higher !"<<endl;

        else
        cout<<"Guess Lower ! "<<endl;

     }while(guess != number);
return 0;
} 