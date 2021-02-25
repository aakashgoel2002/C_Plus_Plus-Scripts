#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a Number: ";
    cin>>no;
    switch(no>0)
    {
        case 1:
        cout<<"Number is Positive";
        break;
        case 0:
        switch(no==0)
        {
            case 1:
            cout<<"Number is Zero";
            break;
            case 0:
            cout<<"Number is Negative";
        }
    }
    return 0;
}