# Coding Quesion

1. Topological Sort: [https://www.codingninjas.com/studio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM]

``` cpp
1. vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    //create adjacency list
    unordered_map <int, list <int> > adj;
    for (int i = 0; i < e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //Find all indegree
    vector <int> indegree(v);
    for(auto i: adj) {
        for(auto j: i.second) {
            indegree[j]++;
        }
    }

    // 0 indegree push in queue
    queue <int> q;
    for(int i = 0; i < v; i++) {
        if(indegree[i] == 0)
            q.push(i);
    }

    //BFS algorithm
    vector <int> ans;
    while (!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for(auto neighbour:adj[front]) {
            indegree[neighbour]--;
            if(indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    return ans;
}
```
