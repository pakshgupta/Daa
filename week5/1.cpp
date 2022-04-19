#include<iostream>
using namespace std;
void countsort(char arr[],int n){
    int count[26]={0};
    for(int i=0;i<n;i++)
        count[arr[i]-97]++;
    int mx=0;
    char res='$';
    for(int i=0;i<26;i++)
    {
        if(count[i]>mx)
        {
            mx=count[i];
            res=i+97;
        }
    }
    if(mx==1)
        cout<<"No Duplicate elements"<<endl;
    else
        cout<<res<<"-"<<mx<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        countsort(arr,n);
    }
    return 0;
}


