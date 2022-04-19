#include<iostream>
using namespace std;

int binarySearch(int arr[], int key,int l,int r){
    int mid = 0;
    int result;
    
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==key){
        result = mid;
        break;
        }
        
        else if(arr[mid]<key){
            l = mid + 1;

        }

        else{
            r = mid - 1;
        }
    } 

    int left = result-1;
    int right = result+1;
    int count = 1;
    for(int i = left ; i>=0 ; i--){
        if(arr[i]==key){
            count++;
        }
    }
    for(int i = right ; i<r;i++){
        if(arr[i]==key){
            count++;
        }
    }

    return count;
} 

int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int key;
       cin>>key;
        int answer = binarySearch(arr,key,0,n-1);
        cout<<answer<<" ";
   }



}