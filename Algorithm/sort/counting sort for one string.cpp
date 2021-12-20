#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string LargestEven(string s){
       string result;
       int copy_array[s.size()];
       int cout_array[10]={0};
       for(int i=0;i<s.size();i++) cout_array[(int)(s[i]-'0')]++;
       for(int i=1;i<10;i++) cout_array[i]=cout_array[i-1]+cout_array[i];///modifi
       for(int i=s.size()-1;i>=0;i--) copy_array[--cout_array[(int)(s[i]-'0')]]=(int)(s[i]-'0');
       //for(auto i : copy_array) result.insert(0,1,(i+'0')); // it for disinding order
       for(auto i : copy_array) result.push_back((i+'0'));
       return result;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.LargestEven(s)<<endl;
    }
    return 0;
}
