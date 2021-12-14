#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=20;

    int array_size;
    cout<< "Enter array size :";
    cin>>array_size;
    int arr[array_size];
    for(int i=0; i<array_size; i++)
        cin>>arr[i];
    for(int i = 0; i<array_size; i++)
    {
        for(int j=0; j<array_size-i; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0; i<array_size; i++)
        cout<< arr[i]<< " ";
    cout<<endl;
    return 0;
}
