#pragma once
#include "stdafx.h"

class Graph {
public:
	Graph(int);
	Graph(int, vector<vector<int>>);

	int GetNumOfVertices() const;

	bool BreadthFirstSearch(int);
	void AddEdge(int, int);
	bool CheckAdjacency(int, int);

private:
	int mNumOfVertices;
	vector<vector<int>> mAdjacencyMatrix;
};