#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value1,value2;
    string prefix,s;
    cout<< "Enter prefix expression : ";
    getline(cin,prefix);
    stack<int> number;

    for(int i= prefix.size()-1 ; i >= 0 ; i--)
    {
        if(prefix[i]!=' ')
        {
            switch(prefix[i])
            {
            case '+' :
            {
                value1=number.top();
                number.pop();
                value2=number.top();
                number.pop();
                number.push(value1+value2);
                break;
            }
            case '-' :
            {
                value1=number.top();
                number.pop();
                value2=number.top();
                number.pop();
                number.push(value1-value2);
                break;
            }
            case '*' :
            {
                value1=number.top();
                number.pop();
                value2=number.top();
                number.pop();
                number.push(value1*value2);
                break;
            }
            case '/' :
            {
                value1=number.top();
                number.pop();
                value2=number.top();
                number.pop();
                number.push(value1/value2);
                break;
            }
            case '^' :
            {
                value1=number.top();
                number.pop();
                value2=number.top();
                number.pop();
                number.push(pow(value1,value2));
                break;
            }
            default :
                s.insert(0,1,prefix[i]);
            }
        }
        else
        {
            if(s.size()!=0) number.push(stol(s));
            s.clear();
        }
    }

    cout<< "Ans is : " << number.top()<<endl;
    return 0;
}

