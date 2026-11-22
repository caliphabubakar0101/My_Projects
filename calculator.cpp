#include <iostream>
#include <cmath>
using namespace std;
double fNum, sNum, tNum, res;
char operand;
char choice = ' ';
int main(){
    do{
    cout<<"\nInput the first number: \n";
    cin>>fNum;
    cout<<"input the operator: \n";
    cin>>operand;
    cout<<"Input the second number: \n";
    cin>>sNum;
    cin.clear();
    fflush(stdin);
    switch (operand)
    {
        case  '+':{res = fNum + sNum;
            cout<<res<<endl;
            break;}
            
        case '-':{int x = max(fNum,sNum);
            int y = min(fNum, sNum);
            res = x - y;
            cout<<res<<endl;
            break;}
        case '*':{
            res = fNum * sNum;
            cout<<res<<endl;
            break;
        }
        case '^':{
            res = pow(fNum, sNum);
            cout<<res<<endl;
            break;
        }
        case '/':{
            if(sNum == 0){
                cout<<"Math Error";
                break;
            }
            else{
                res = fNum/sNum;
                cout<<res<<endl;
                break;
            }
        }
        case '#':{
            if(fNum >= 0){
                res = sqrt(fNum);
            cout<<res<<endl;
            }
            else{
                cout<<"Math Error"<<endl;
            }
        }        
        default:{
             cout<<" ";
        }           
    }
    cout<<"Do you wanna exit press y for yes and n for no: ";
    cin>>choice;
    }while(choice != 'y' && choice != 'Y' );
        return 0;
}
