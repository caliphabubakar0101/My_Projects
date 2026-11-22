#include<ctime>
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num = rand()%100 + 1, guess; 
    int attempt = 10;
    cout<<"************************** NUMBER GUESSING GAME **************************\n";
    for (int i = 1; i <= attempt; i++){
    cout<<"Guess the number (1-100): ";
    cin>> guess;
        if (guess > num){
            cout<<"Too high\n"<<"Try again\n";
        }
        else if (guess < num)
        {
            cout<<"Too low \n"<<"Try again\n";
        }
        else{
            cout<<"You're right\n"<<"Attempt "<<i<<"/"<<attempt<<endl;
            break;
        }
        if (i == attempt)
        {
            cout<<"You've exhausted your lifelines\n";
        }   
    }
    cout<<"********************************** END **********************************\n";
    return 0;
}