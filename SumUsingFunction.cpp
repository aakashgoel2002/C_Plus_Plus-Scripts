#include<iostream>
using namespace std;
int sum(int a,int b){
    return (a+b);
}
int main(){
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    cout<<"The Sum of "<<a<<" and "<<b<<": "<<sum(a,b);
    return 0;
}
