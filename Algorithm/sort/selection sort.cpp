#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,t;
    int array_size;
    cout<< "Enter array size :";
    cin>>array_size;
    int arr[array_size];
    cout<< "Enter "<< array_size<< " element with space :";
    for(int i=0; i<array_size; i++)
        cin>>arr[i];
    for(int i = 0; i<array_size; i++)
    {
        temp=arr[i];
        t=i;
        for(int j=i+1; j<array_size; j++)
        {
            if(temp>arr[j])
            {
                temp=arr[j];
                t=j;
            }
        }
        if(arr[i]!=temp)
            swap(arr[i],arr[t]);
    }
    cout<< "After sort element is here : ";
    for(int i=0; i<array_size; i++)
        cout<< arr[i]<< " ";
    cout<<endl;
    return 0;
}


