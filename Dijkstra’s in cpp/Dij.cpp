#include <unordered_map>
#include <vector>
#include <limits>
#include <algorithm>
#include <iostream>

using namespace std;

class Graph
{
    unordered_map<char, const unordered_map<char, int>> vertices;
    
public:
    void add_vertex(char name, const unordered_map<char, int>& edges)
    {
        // Insert the connected nodes in unordered map
        vertices.insert(unordered_map<char, const unordered_map<char, int>>::value_type(name, edges));
    }
    
    vector<char> shortest_path(char start, char finish)
    {
        // Second arguments -> distances
        // Find the smallest distance in the already in closed list and push it in -> previous
        unordered_map<char, int> distances;
        unordered_map<char, char> previous;
        vector<char> nodes; // Open list
        vector<char> path; // Closed list
        
        auto comparator = [&] (char left, char right) { return distances[left] > distances[right]; };
        
        for (auto& vertex : vertices)
        {
            if (vertex.first == start)
            {
                distances[vertex.first] = 0;
            }
            else
            {
                distances[vertex.first] = numeric_limits<int>::max();
            }
            
            nodes.push_back(vertex.first);
            push_heap(begin(nodes), end(nodes), comparator);
        }
        
        while (!nodes.empty())
        {
            pop_heap(begin(nodes), end(nodes), comparator);
            char smallest = nodes.back();
            nodes.pop_back();
            
            std::cout << "Open list: ";
            for( std::vector<char>::const_iterator i = nodes.begin(); i != nodes.end(); ++i)
                std::cout << *i << ' ';
            std::cout << std::endl;
            
            if (smallest == finish)
            {
                while (previous.find(smallest) != end(previous))
                {
                    path.push_back(smallest);
                    smallest = previous[smallest];
                    std::cout << "Closed list: ";
                    for( std::vector<char>::const_iterator i = path.begin(); i != path.end(); ++i)
                        std::cout << *i << ' ';
                    std::cout << std::endl;
                }
                
                break;
            }
            
            if (distances[smallest] == numeric_limits<int>::max())
            {
                break;
            }
            
            for (auto& neighbor : vertices[smallest])
            {
                int alt = distances[smallest] + neighbor.second;
                if (alt < distances[neighbor.first])
                {
                    distances[neighbor.first] = alt;
                    previous[neighbor.first] = smallest;
                    make_heap(begin(nodes), end(nodes), comparator);
                }
            }
        }
        
        return path;
    }
};

int main()
{
    cout << "@author: Mahmut Bulut" << endl << endl;
    int seq = 0;
    char init_node = 'A';
    char dest_node = 'G';
    
    Graph g;
    g.add_vertex('A', {{'B', 1}, {'C', 4}, {'F', 2}});
    g.add_vertex('B', {{'E', 2}});
    g.add_vertex('C', {{'G', 2}, {'D', 4}});
    g.add_vertex('D', {});
    g.add_vertex('E', {{'D', 3}});
    g.add_vertex('F', {{'C', 1}, {'G', 4}});
    g.add_vertex('G', {{'E', 5}});
    
    cout << "As initial node: " << init_node << endl;
    cout << "As goal node: " << dest_node << endl;
    
    for (char vertex : g.shortest_path(init_node, dest_node))
    {
        cout << "Solution path from goal sequence : " << seq << " Node : " << vertex << endl;
        seq++;
    }
    
    cout << "Solution path from goal sequence : " << seq << " Node : " << init_node << endl;
    
    return 0;
}