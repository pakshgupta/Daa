#include<iostream>
using namespace std;
void binarysearch(int arr[],int key,int l,int r){
    int count=0,flag;
    while(l<=r){
        int mid=(l+r)/2;
        count++;
        if(arr[mid]==key){
        cout<<"Present"<<" "<<count<<endl;
        flag=1;
        break;
        }
        else if(arr[mid]<key){
        l=mid+1;
        }
        else{
        r=mid-1;
        }
    }
    if(flag==0){
        cout<<"Not Present"<<" "<<endl;
    }
}
int main(){
    int t,res;
    cin>>t;
    for(int i=0;i<=t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        binarysearch(arr,key,0,n-1);
    }
}
