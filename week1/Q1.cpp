#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int key){
    int count=0,flag;
    for(int i=0;i<n;i++){
        if(arr[i]!=key){
        count++;
        }
        if(arr[i]==key){
            count++;
        flag=1;
        break;
        }
    }
    if(flag==1){
        cout<<"Pesent "<<count<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
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
        linearsearch(arr,n,key);
    }
    return 0;
}


#include <iostream>
using namespace std;
int countoccurance(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(key==arr[i])
        count++;
    }
    return count;
}
int binarysearch(int arr[], int n, int key)
{
    int count = 0,mid;
    int s = 0, r = n;
    while (s <= r)
    {
        mid = (s + (r - 1)) / 2;
        if (arr[mid] == key){\
            return mid;
        }
        else if (mid < key)
        {
            s = mid + 1;
        }
        else
            r = mid - 1;
    }
    return -1;
}
int main()
{
    int t,res,count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        res=binarysearch(arr,n,key);
        if(res!=-1)
        cout<<"Present"<<countoccurance(arr,n,key) <<endl;
        else
        cout<<"not present"<<endl;
    }
    return 0;
}

