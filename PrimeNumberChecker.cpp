#include<iostream>
using namespace std;
int main(){
    int no,count=0;
    cout<<"Enter a Number: ";
    cin>>no;
    for(int i=1;i<=no;i++){
        if(no%i==0)
        count++;
    }
    if(count>2)
    cout<<no<<" is not a Prime Number";
    else
    cout<<no<<" is a Prime Number";
    return 0;
}