#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array_size;
    cout<< "Enter array size :";
    cin>>array_size;
    int arr[array_size];
    cout<< "Enter "<< array_size<< " element with space :";
    for(int i=0; i<array_size; i++) cin>>arr[i];
    for(int i = 0; i<array_size; i++) for(int j=1; j<array_size-i; j++) if(arr[j-1]>arr[j]) swap(arr[j-1],arr[j]);
    cout<< "After sort element is here : ";
    for(auto i : arr) cout<<i<< " ";
    cout<<endl;
    return 0;
}
