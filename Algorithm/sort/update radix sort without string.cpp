#include<bits/stdc++.h>
using namespace std;
int max_element_array(int arr[],int array_size)
{
    int element=0;
    for(int i=0 ; i<array_size; i++) if(arr[i]>element) element=arr[i];
    return element;
}
void count_sort(int arr[] , int array_size , int pos)
{
    int count_array[10]= {0};
    for(int i=0; i<array_size; i++) count_array[(arr[i]/pos)%10]++;
    for(int i=1 ; i<10 ; i++) count_array[i]=count_array[i]+count_array[i-1];
    int duplicate_arr[array_size];
    for(int i= array_size-1 ; i>=0 ; i--) duplicate_arr[--count_array[(arr[i]/pos)%10]]=arr[i];
    for(int i=0; i<array_size; i++) arr[i]=duplicate_arr[i];
}
int main()
{
    int array_size;
    cout<< "How many element :";
    cin>>array_size;
    int arr[array_size];
    cout<< "Enter all element with space :";
    for(int i=0 ; i<array_size ; i++) cin>>arr[i];
    int big_element = max_element_array(arr,array_size);
    for(int pos=1 ; (big_element/pos)>0 ; pos*=10) count_sort(arr,array_size,pos);
    for(auto i : arr) cout<< i << " ";
    cout<<endl;
    return 0;
}
