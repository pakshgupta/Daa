#include<iostream>
using namespace std;
void countsort(int arr1[],int n1,int arr2[],int n2){
    int mx1=0,mx2=0;
    for(int i=0;i<n1;i++){
        if(mx1<arr1[i]){
            mx1=arr1[i];
        }
    }
    for(int i=0;i<n2;i++){
        if(mx2<arr2[i]){
            mx2=arr2[i];
        }
    }
    int count1[mx1+1]={0};
    int count2[mx2+1]={0};
    for(int i=0;i<n1;i++){
        count1[arr1[i]]++;
    }
    for(int i=0;i<n2;i++){
        count2[arr2[i]]++;
    }
    for(int i=0;i<n1;i++){
        if(count1[arr1[i]]!=0 && count2[arr1[i]]!=0){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
 int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n1;
        cin>>n1;
        int arr1[n1];
        for(int i=0;i<n1;i++){
            cin>>arr1[i];
        }
        int n2;
        cin>>n2;
        int arr2[n2];
        for(int i=0;i<n2;i++){
            cin>>arr2[i];
        }
        
        countsort(arr1,n1,arr2,n2);
    }
    return 0;
}

 
