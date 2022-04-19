#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int temp,count=0,swap=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
             count++;
        }
        swap++;
    }
    cout<<"Comparasion "<<count<<endl;
    cout<<"Swap "<<swap<<endl;
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
        selectionsort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}