#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]==key || arr[j]-arr[i]==key){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}