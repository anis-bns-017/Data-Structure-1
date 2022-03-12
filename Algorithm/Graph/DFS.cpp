#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    graph()
    {
        int vertex,edges;
        cout<< "Enter vertex and edges number :";
        cin>>vertex>>edges;
        vector<int> v[vertex];
        stack<int> st;
        cout<< "Enter all edges (x)----(y) formate :"<<endl;
        int x,y;
        for(int i=0;i<edges;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);//it bidirectional graph
            v[y].push_back(x);
        }
        bool bisited[vertex] = {false},c;
        cout<< "Enter 1st node :";
        int s;
        cin>>s;
        st.push(s);
        cout<< "DFS is : ";
        cout<<s<< " ";
        bisited[s]=true;
        while (!st.empty())
        {
            c = false;
            for(auto a : v[s])
            {
                if(bisited[a]==false)
                {
                    c=true;
                    s=a;
                    cout<<s<< " ";
                    st.push(s);
                    bisited[s] = true;
                }
            }
            if(c==false) st.pop();
            s= st.top();
        }
        
    }
};
int main()
{
    graph g;
    return 0;
}
