#include <iostream>
#include <vector>

using namespace std;

//Using a simple example
//Find the shortest traveled path, using Hamiltonian circuit

#define V 4

//input: graph, that is expressed as a int x int matrix
//       s, is starting point
int TravelingSaleman(int graph[][V], int s)
{
    //min weight on Hamiltonian Cycle.
    int min_path = INT_MAX; 

    //store all vertex apart from source vertex
    /* 
    example: s = 0
    vertex: {1, 2, 3, 4}    
    */
    vector<int> vertex;
    for(int i = 0; i < V; i++)
    {
        if(i != s)
        {
            vertex.push_back(i);
        }
    }
    do{
        //store current Path Weight(cost)
        int current_pathweight = 0;

        //compute current path weight
        int k = s;

        /*
        THE VALUES ARE
        k = 0
        graph[0][vertex[0] -> 1] = 10
        current_pathweight = 10
        k = 1


        k = 1
        graph[1][vertex[1] -> 2] = 35
        current_pathweight = 25
        k = 2

        k = 2
        graph[2][vertex[2] -> 3] = 30
        current_pathweight = 45
        k = 3
        */
        for(int i = 0; i < vertex.size(); i++){
            // cout << "i " << i << endl;
            // cout << "vertex[i] " << vertex[i] << endl;
            // cout << "graph[k][vertex[i]] " << graph[k][vertex[i]] << endl;
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];

        //update minimum
        min_path = min(min_path, current_pathweight);
    } while ( next_permutation(vertex.begin(), vertex.end()));

    return min_path;
}

int main()
{
    // matrix representation of graph
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s = 0;
    cout << TravelingSaleman(graph, s) << endl;
    return 0;
}
