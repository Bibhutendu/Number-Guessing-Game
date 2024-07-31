#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random(int n){
    srand(time(0));
    
    return (rand() % (n+1));
}

int main()
{
    int number = random(100);
    int x;
    cout<<"enter number between 0 - 100: ";
    cin>>x;
    while(x!=number)
    { 
    if(x>number){
            cout<<"guess a low number"<<endl;
            cout<<"enter number between 0 - 100: ";
            cin>>x;
        }
    else{
        cout<<"guess a high number"<<endl;
        
        cout<<"enter number between 0 - 100: ";
        cin>>x;
    }
    }
    if(x==number){
        cout<<"you win";
    }
}