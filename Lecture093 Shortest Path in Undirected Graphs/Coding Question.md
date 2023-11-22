# Coding Quesion

1. Shortest path in an unweighted graph: [https://www.codingninjas.com/studio/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1.  vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

        //create an adjacency list
        vector<vector<int>> adj(n+1);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        //do bfs
        vector <int> visited(n+1, 0);
        vector <int> parent(n+1, 0);
        
        queue <int> q;
        q.push(s);
        visited[s] = true;
        parent[s] = -1;

        while(!q.empty()) {
            int front = q.front();
            q.pop();

            for(auto i:adj[front]) {
                if(!visited[i]) {
                    visited[i] = true;
                    parent[i] = front;
                    q.push(i);
                }
            }
        }

        //finding the shortest path
        vector <int> ans;
        int currentNode = t;
        ans.push_back(currentNode);

        while(currentNode != s) {
            currentNode = parent[currentNode];
            ans.push_back(currentNode);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
```
