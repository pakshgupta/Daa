#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    int flag;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    cout<<i+1<<j+1<<k+1;
                }
            }
        }
    }
    return 0;
}