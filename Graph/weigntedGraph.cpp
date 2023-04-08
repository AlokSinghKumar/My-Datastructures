#include <bits/stdc++.h>
using namespace std;

class weightedGraph
{
    vector<pair<int, int>> *adj_list;
    int vertices;

public:
    weightedGraph(int n);
    void add_edge(int v1, int v2, int wt);

    int bfs(int src);
    void display_graph();
    void djikstra(int src);
    int minDistance(vector<int> dist, bool visited[]);
};

int main()
{
    weightedGraph wg1(5);

    wg1.add_edge(0, 1, 10);
    wg1.add_edge(1, 2, 20);
    wg1.add_edge(2, 3, 30);
    wg1.add_edge(1, 3, 40);
    wg1.add_edge(2, 4, 100);
    wg1.add_edge(4, 0, 10);

    return 0;
}

weightedGraph ::weightedGraph(int n)
{
    vertices = n;
    adj_list = new vector<pair<int, int>>[n];
}

void weightedGraph ::add_edge(int v1, int v2, int wt)
{
    adj_list[v1].push_back(make_pair(v2, wt));
    adj_list[v2].push_back(make_pair(v1, wt));
}

int weightedGraph ::bfs(int src)
{
    bool visited[vertices];
    int cost = 0;

    for (int i = 0; i < vertices; i++)
        visited[i] = false;

    cout << src << " ";
    visited[src] = true;

    queue<int> helper;
    helper.push(src);

    while (!helper.empty())
    {
        src = helper.front();
        for (auto it = adj_list[src].begin(); it != adj_list[src].end(); it++)
        {
            if (!visited[it->first])
            {

                visited[it->first] = true;
                cost += it->second;
                cout << it->first << " ";
                helper.push(it->first);
            }
        }
        helper.pop();
    }

    return cost;
}

int weightedGraph ::minDistance(vector<int> dist, bool visited[])
{
    int min = INT_MAX;
    int minIndex = INT_MAX;
    for (int i = 0; i < dist.size(); i++)
    {
        if (!visited[i] && dist[i] <= min)
        {
            min = dist[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void weightedGraph ::display_graph()
{
    int a, b;
    //first loop to traverse across vertices
    for (int i = 0; i < vertices; i++)
    {
        cout << "Adjacency list of vertex " << i << endl;
        //second loop to traverse across the adjacency list of some vertex i
        for (auto it = adj_list[i].begin(); it != adj_list[i].end(); it++)
        {
            //set a as the vertex number and b as the weight
            a = it->first;
            b = it->second;
            cout << "Vertex : " << a << " Weight : " << b << endl;
        }
        cout << endl;
    }
}

void weightedGraph ::djikstra(int src)
{
    vector<int> dist;
    bool visited[vertices];
    for (int i = 0; i < vertices; i++)
    {
        dist.push_back(INT_MAX);
        visited[i] = false;
    }
    visited[src] = true;
    dist[src] = 0;
    for (int i = 0; i < vertices - 1; i++)
    {
        int k = minDistance(dist, visited);
        visited[k] = true;
        for (int j = 0; j < vertices; j++)
        {
            if (!visited[i] && dist[i] != INT_MAX && adj_list[i][j].second + dist[i] < dist[j])
            {
                dist[j] = adj_list[i][j].second + dist[i];
            }
        }
    }
    for (int i = 0; i < dist.size(); i++)
        cout << dist[i] << " ";

    cout << endl;
}