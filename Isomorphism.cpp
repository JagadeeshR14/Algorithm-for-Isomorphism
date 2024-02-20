#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
bool isomorphic(const unordered_map<int, vector<int>>& graph1, const unordered_map<int, vector<int>>& graph2) {
    // Check if the number of vertices is the same
    if (graph1.size() != graph2.size()) {
        return false;
    }

    // Check if the degree sequence is the same
    unordered_set<int> degrees1, degrees2;

    for (const auto& entry : graph1) {
        degrees1.insert(entry.second.size());


    }

    for (const auto& entry : graph2) {
        degrees2.insert(entry.second.size());

    }

    if (degrees1 != degrees2) {
        return false;

    }

    return true;
}

unordered_map<int, vector<int>> inputGraph() {
    unordered_map<int, vector<int>> graph;

    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;

    cout << "Enter the number of edges: ";
    cin >> numEdges;

    cout << "Enter the edges (vertex1 vertex2):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;

        // Add edges to the graph
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1);
    }

    return graph;
}

int main() {
    cout << "Enter details for the first graph:" << endl;
    unordered_map<int, vector<int>> graph1 = inputGraph();

    cout << "Enter details for the second graph:" << endl;
    unordered_map<int, vector<int>> graph2 = inputGraph();

    if (isomorphic(graph1, graph2)) {
        cout << "The graphs are isomorphic." << endl;
    } else {
        cout << "The graphs are not isomorphic." << endl;
    }

    return 0;
}
