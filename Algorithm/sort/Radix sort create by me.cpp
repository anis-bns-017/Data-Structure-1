#include<bits/stdc++.h>

using namespace std;
string string_to_int(string s)
{
    int i=0;
    while(s[i]=='0') i++;
    string number;
    while(i<s.size())
    {
        number.push_back(s[i]);
        i++;
    }
    return number;
}

int main()
{
    int total_element,element_size=0,j;
    cout<< "Enter how many element :";
    cin>>total_element;
    string number[total_element];
    cout<< "Enter total element with space :";

    for(int i=0; i<total_element; i++)
    {
        cin>>number[i];
        if(number[i].size()>element_size) element_size=number[i].size();
    }

    for(int i=0; i<total_element; i++)
    {
        while(number[i].size()!=element_size) number[i].insert(0,1,'0');
    }

    queue<string> baket[10];

    while(element_size--)
    {
        j=0;
        for(auto element : number)
        {
            baket[(int)(element[element_size]-'0')].push(element);
        }
        for(int i=0; i<total_element;)
        {
            number[i].clear();
            while(!baket[j].empty())
            {
                number[i]=baket[j].front();
                baket[j].pop();
                i++;
            }
            j++;
        }
    }

    for(auto element : number) cout<< string_to_int(element) << " ";
    cout<<endl;
    
    return 0;
}
