#include<bits/stdc++.h>
using namespace std;

void quick_sort(int arr[] , int low, int high)
{
    if(low>=high) return;
    int privot=low;
    int i=low;
    int j=low+1;
    for(;;)
    {
        if(arr[privot]>arr[j])
        {
            i++;
            swap(arr[i],arr[j]);
        }
        if(j==high)
        {
            swap(arr[privot],arr[i]);
            break;
        }
        j++;
    }
    quick_sort(arr,privot,i-1);
    quick_sort(arr,i+1,j);
}

int main()
{
    int array_size,i,j,p;
    cout<< "Enter how many element in this array :";
    cin>>array_size;
    int arr[array_size];
    cout<< "Enter all element with space :";
    for(i=0; i<array_size; i++) cin>>arr[i];
    quick_sort(arr,0,array_size-1);
    for(auto i : arr) cout<<i<< " ";
    cout<<endl;
    return 0;
}
