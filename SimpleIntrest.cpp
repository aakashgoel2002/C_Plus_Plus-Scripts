#include <iostream>
using namespace std;
int main(){
    double p,r,t;
    cout<<"Enter Principal: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time(in months): ";
    cin>>t;
    cout<<"Simple Intrest: "<<(p*r*t)/100;
    return 0;
}
