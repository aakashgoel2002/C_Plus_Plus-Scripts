#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    cout<<"The Sum of first 10 Natural Numbers: "<<sum;
    return 0;
}