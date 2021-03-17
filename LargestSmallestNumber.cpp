#include<iostream>
using namespace std;
int main(){
    int large=0,i,small=2147483647;
    cout<<"Enter Number of Array Elements to be entered: ";
    cin>>i;
    int arr[i];
    cout<<"Enter Array Elements: "<<endl;
    for(int j=0;j<i;j++){
        cin>>arr[j];
        if(large<arr[j])
        large=arr[j];
        if(small>arr[j])
        small=arr[j];
    }
    cout<<"Largest Number: "<<large<<endl;
    cout<<"Smallest Number: "<<small<<endl;
    return 0;
}
