#include "Graph.h"

Graph::Graph(int numOfVertices) :
	mNumOfVertices(numOfVertices)
{
}

Graph::Graph(int numOfVertices, vector<vector<int>> adjacencyMatrix) :
	mNumOfVertices(numOfVertices), mAdjacencyMatrix(adjacencyMatrix)
{
}

int Graph::GetNumOfVertices() const {
	return mNumOfVertices;
}

bool Graph::BreadthFirstSearch(int root) {
	int currentVertex = root;
	vector<bool> visited(mNumOfVertices, false);
	queue<int> openList;
	
	openList.push(currentVertex);
	while (!openList.empty()) {
		currentVertex = openList.front();
		visited[currentVertex] = true;
		openList.pop();

		for (auto vertex : mAdjacencyMatrix[currentVertex])
			if (!visited[vertex])
				openList.push(vertex);
	}

	for (int i = 0; i < mNumOfVertices; ++i)
		if (!visited[i])
			return false;
	return true;
}

void Graph::AddEdge(int v1, int v2) {
	mAdjacencyMatrix[v1].push_back(v2);
}

bool Graph::CheckAdjacency(int v1, int v2) {
	for (auto vertex : mAdjacencyMatrix[v1])
		if (vertex == v2)
			return true;
	return false;
}