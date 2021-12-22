#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value1,value2;
    string postfix,s;
    cout<< "Enter postfix expression : ";
    getline(cin,postfix);
    stack<int> number;

    for(int i=0 ; i < postfix.size() ; i++)
    {
        if(postfix[i]!=' ')
        {
            switch(postfix[i])
            {
            case '+' :
            {
                value2=number.top();
                number.pop();
                value1=number.top();
                number.pop();
                number.push(value1+value2);
                break;
            }
            case '-' :
            {
                value2=number.top();
                number.pop();
                value1=number.top();
                number.pop();
                number.push(value1-value2);
                break;
            }
            case '*' :
            {
                value2=number.top();
                number.pop();
                value1=number.top();
                number.pop();
                number.push(value1*value2);
                break;
            }
            case '/' :
            {
                value2=number.top();
                number.pop();
                value1=number.top();
                number.pop();
                number.push(value1/value2);
                break;
            }
            case '^' :
            {
                value2=number.top();
                number.pop();
                value1=number.top();
                number.pop();
                number.push(pow(value1,value2));
                break;
            }
            default :
                s.push_back(postfix[i]);
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
