#include<bits/stdc++.h>
using namespace std;

class graph
{
    public:
    int vertex,edges;
    graph()
    {
        cout<< "Enter vertex and egges number with space :";
        cin>>vertex>>edges;
        list <int> l[vertex];
        bool bisited[vertex];
        //list <int> queue;
        queue<int> q;
        cout<< "Enter all edges with space :"<<endl;
        int x,y;
        for(int i=0;i<edges;i++)
        {
            cin>>x>>y;
            l[x].push_back(y);
            l[y].push_back(x);
        }
        for(int i=0;i<vertex;i++) bisited[i]= false;
        cout<< "Enter stating Node :";
        int s;
        cin>>s;
        cout<<s<< " ";
        bisited[s]=true;
        for(auto a : l[s])
        {
            q.push(a);
            bisited[a] = true;
        }
        while (!q.empty())
        {
            cout<< q.front() << " " ;
            s= q.front();
            q.pop();
            for(auto a : l[s])
            {
                if(bisited[a]==false)
                {
                    q.push(a);
                    bisited[a]=true;
                }
            }

        }
        
    }
};

int main()
{
    graph g;
    return 0;
}
