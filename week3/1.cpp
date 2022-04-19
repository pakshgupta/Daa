#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    int j, temp,count=0,shift=0;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >=0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            count++;
            j = j - 1;
            shift++;
        }
        arr[j + 1] = temp;
        shift++;
    }
    cout<<"Comparision "<<count<<endl;
    cout<<"Shift "<<shift<<endl;
}
int main()
{
    int t;
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
        insertionsort(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
    }
    return 0;
}