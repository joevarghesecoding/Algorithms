#include <iostream>

using namespace std;

#define V 5
/*
DEPTH FIRST SEARCH (DFS)
Goes into each node until all the children have been visited once.
In order to avoid nodes that are visited twice, we use a boolean visited array.

Uses for searching tree or graph data structure. Starts at root node, and
explores as far as possible along each branch before backtracking. 
Finally, print the nodes in the path.

Algorithm: 
Create a recursive function that takes the index of the node and a visited array.
Mark the current node as visited and print the node.
Traverse all the adjacent and unmarked nodes and call the recursive function with the index of the adjacent node.
*/

/*
Two ways to store data (in the form of a graph)
1. Weighted Adjacency Matrix
2. Weighted Linked list
*/

void dfs_matrix(int a[], int &count, int j);

void DFS_matrix(int a[][V], int &count);


int main()
{
    int count = 0;
    int matrix[][V] = { {0,1,1,1,0},
                        {1,0,0,0,1},
                        {1,0,0,1,0},
                        {1,0,1,0,1},
                        {0,1,0,1,0} };

    DFS_matrix(matrix, count);

    return 0;
}

// mark each vertex in V with 0 as a mark of being “unvisited”
void DFS_matrix(int a[][V], int &count)
{
    // count ←0
    count = 0;
    // for each vertex v in V do
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            //if there is an edge, pass the connecting vertex 
            //to run dfs further and return count
            if(a[i][j] == 1)
            {
                cout << "count before : " << count << endl;
                count++;
                dfs_matrix(a[j], count, j);
                cout << "count after : " << count << endl;
            }
        }
    }
}



// dfs(v)
// //visits recursively all the unvisited vertices connected to vertex v
void dfs_matrix(int a[][V], int &count, int j)
{
    for(int i = 0; i < V; i++)
    {
        for(int k = 0; k < V; k++)
        {
            if(i != j && a[i][k] == 1)
            {
                cout << "count before : " << count << endl;
                count++;
                dfs_matrix(a[k], count, i);
                cout << count << endl;
            }
        }
    }
}
