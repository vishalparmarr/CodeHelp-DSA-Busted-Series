#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

template < typename T >

class graph {
    public:

    unordered_map <T, list <int> > adj;

    void addEdge (T u, T v, bool direction) {
        //direction = 0 -> undirected graph
        //direction = 1 -> directed graph

        //create an edge from u to v
        adj[u].push_back(v);

        //for undirected graph
        if(direction == 0)
            adj[v].push_back(u);
    }

    void printAdjList() {

        for (auto i:adj) {
            cout << i.first << "-> ";
            
            for(auto j: i.second)
                cout << j << ", ";
        
        cout << endl;
        }
    }
};

int main() {

    graph <int> g;
    int n;
    cout << "Enter the no. of nodes = ";
    cin >> n;
    int m;
    cout << "Enter the no. of edges = ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printAdjList();
}