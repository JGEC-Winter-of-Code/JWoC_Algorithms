#include <bits/stdc++.h> 
using namespace std; 
  
class Graph { 

    int v;
    int e; 
    int matrix[10][10]; 
  
public: 
    Graph(int v, int e); 
    void addEdge(int start, int e);  
    void BFS(int start);
}; 

Graph::Graph(int vertices, int edges) 
{ 
    v = vertices; 
    e = edges; 
    for (int row = 0; row < v; row++) { 
        for (int column = 0; column < v; column++) { 
            matrix[row][column] = 0; 
        } 
    } 
} 
void Graph::addEdge(int start, int end) 
{ 
    matrix[start][end] = 1; 
    matrix[end][start] = 1; 
}  
void Graph::BFS(int start) 
{ 
    vector<bool> flags(v, false); 
    vector<int> q; 
    q.push_back(start);
    flags[start] = true; 
    int vis; 
    cout<<"BFS: ";
    while (!q.empty()) { 
        vis = q[0]; 
        cout << vis << " "; 
        q.erase(q.begin());
        for (int i = 0; i < v; i++) { 
            if (matrix[vis][i] == 1 && (!flags[i])) 
            { 
                q.push_back(i); 
                flags[i] = true; 
            } 
        } 
    } 
} 
int main() 
{ 
    int v = 5, e = 4; 
    Graph G(v, e); 
    G.addEdge(0, 1); 
    G.addEdge(1, 2); 
    G.addEdge(1, 3); 
    G.addEdge(2, 4); 
    cout<<endl;
    G.BFS(0);
} 
