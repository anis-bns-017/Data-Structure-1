#include<bits/stdc++.h>
using namespace std;
int mid(int l,int r)
{
    return ((l+r)/2);
}
int main()
{
    int n,l,r,m,d;
    cout<< "Enter size of array"<<endl;
    cin>>n;
    cout<< "Enter data that's you need :";
    cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<< "After sort array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    l=0;
    r=n-1;
    m=mid(l,r);
    for(;;)
    {
        if(l>r)
        {
            cout<< "Data is not found in this array !!"<<endl;
            break;
        }
        else if(d==a[m])
        {
            cout<<d<< " It's location is :"<<m<< " index"<<endl;
            break;
        }
        /*else if(l==r&&r==m)
        {
            cout<< "Data is NOT found in this array !!!"<<endl;
            break;
        }*/
        else if(d>a[m])
        {
            l=m+1;
            m=mid(l,r);
        }
        else if(d<a[m])
        {
            r=m-1;
            m=mid(l,r);
        }
    }
    return 0;
}
