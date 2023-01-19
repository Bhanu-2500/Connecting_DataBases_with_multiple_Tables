#pragma once
#include<list>
#include<map>
#include<iostream>
#include<fstream>

using namespace std;
class Graph {
public:
	map<int, list<int>> adj;
	map<int, bool> visited;

	void readGraph(string path);
	void addEdge(int v1, int v2);
	void DFS(int v);
	void DFS_traversal();


};
void Graph::readGraph(string path) {
	ifstream fin(path);
	int nV, nE;
	int v1, v2;

	fin >> nV >> nE;
	cout << "Number of vertices: " << nV << endl;
	cout << "Number of Edges: " << nE << endl;

	for (int i = 0; i < nE; i++) {
		fin >> v1 >> v2;
		cout << "(" << v1 << ", " << v2 << ")" << endl;
	}
}
void Graph::addEdge(int v1, int v2) {
	adj[v1].push_back(v2);
}
void Graph::DFS(int v) {
	visited[v] = true;
	cout << v << ", ";

	for (auto i = adj[v].begin(); i!= adj[v].end();i++) {
		if (!visited[*i]) {
			DFS(*i);
		}
	}
}
void Graph::DFS_traversal() {
	for (auto v : adj) {
		if (!visited[v.first])
			DFS(v.first);
	}
}