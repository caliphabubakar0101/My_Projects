#include<iostream>
using namespace std;
int main(){
    char choice;
    cout<<"**************** Atomic Chemistry ****************"<<endl;
    cout<<" what year did the atomic bomb dropped on Japan\n";
    cout<<" a) 1945\n";
    cout<<" b) 1946\n";
    cin>>choice;
    switch (choice)
    {
    case 'a':
        cout<<"you're right";
        break;
    case 'b':
        cout<<"you're wrong";
        break;
    default:
        break;
    }
    return 0;
}