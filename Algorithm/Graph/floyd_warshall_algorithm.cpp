#include <bits/stdc++.h>
using namespace std;
int main()
{

    int vertex, edge;
    cout << "Enter vertex and edges number with space :";
    cin >> vertex >> edge;
    int matrix_0[vertex + 1][vertex + 1];
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            if (i == j)
                matrix_0[i][j] = 0;
            else
                matrix_0[i][j] = 100000000;
        }
    }
    cout << "Enter all edges with space :" << endl;
    cout << "Formate is :(vertex vertex value ) : 2 4 7" << endl;
    for (int i = 0; i < edge; i++)
    {
        int vertex_1,vertex_2,value;
        cin>>vertex_1>>vertex_2>>value;
        vertex_1=vertex_1-1;
        vertex_2=vertex_2-1;
        matrix_0[vertex_1][vertex_2] = value;

        /// when vertex or node is define cher like a,b,c...
        /*
        char char_vertex_1,char_vertex_2;
        cin>>char_vertex_1>>char_vertex_2>>value;
        vertex_1=(char_vertex_1-'a'); /// it graph start with a
        vertex_2=(char_vertex_2-'a');
        matrix_0[vertex_1][vertex_2] = value;
        */
    }
    
    
    for(int k=0; k<vertex; k++)
    {
        for(int i=0; i<vertex; i++)
        {

            for(int j=0; j<vertex; j++)
            {
                matrix_0[i][j] = min(matrix_0[i][j],(matrix_0[i][k]+matrix_0[k][j]));
            }
        }
    }
    

    int t = 50;
    while (t--)
    {
        char start_char,end_char;
        int start_node,end_node;
        cout << "Enter start and end vertex : ";
        cin>>start_node>>end_node;
        start_node=start_node-1;
        end_node=end_node-1;

        ///if graph have char vertex
        /*
        cin>>start_char>>end_char;
        start_node=(start_char-'a');
        end_node=(end_char-'a');
        */

        cout << "Sortage distance is : " << matrix_0[start_node][end_node] << endl;
    }

    return 0;
}
