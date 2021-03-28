#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the Number of Rows and Columns to be formed"<<endl;
    int m,n,sum=0;
    cout<<"Enter the Number of Rows: ";
    cin>>m;
    cout<<"Enter the Number of Columns: ";
    cin>>n;
    cout<<"Enter the Values in this 2D Array"<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j)
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of Diagonal: "<<sum;
    return 0;
}
