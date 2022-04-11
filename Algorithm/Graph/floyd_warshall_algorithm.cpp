#include <bits/stdc++.h>
using namespace std;
int main()
{

    int vertex, edge;
    cout << "Enter vertex and edges number with space :";
    cin >> vertex >> edge;
    int matrix_0[vertex + 1][vertex + 1];
    for (int i = 0; i <= vertex; i++)
    {
        for (int j = 0; j <= vertex; j++)
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
        int x, y, z;
        cin >> x >> y >> z;
        matrix_0[x][y] = z;
    }
    /// if vertex start 1
    for (int k = 1; k <= vertex; k++)
    {
        for (int i = 1; i <= vertex; i++)
        {

            for (int j = 1; j <= vertex; j++)
            {
                matrix_0[i][j] = min(matrix_0[i][j], (matrix_0[i][k] + matrix_0[k][j]));
            }
        }
    }

    /// if vertex start is 0
    /*
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
    */

    int t = 50;
    while (t--)
    {
        int a, b;
        cout << "Enter start and end vertex : ";
        cin >> a >> b;
        cout << "Sortage distance is : " << matrix_0[a][b] << endl;
    }

    return 0;
}
