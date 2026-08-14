#pragma once
#include <list>
#include "node.hpp"
#include "Graph.h"

class Solver
{
public:
	
	Node currentNode;
	char currentNodeChar;

	char startNodeChar;
	char endNodeChar;
	Node startNode;
	Node endNode;
// map with node ,cost to go to node, previous node,

	Solver(char, char, Node*, Node*);
	//std::unordered_map<Node, bool, int, Node> exploreMap;
	int calcDistance(Graph,char);
	void markNodeVisited(Graph,Node);
	void visitNode(Graph,Node);
	void updatenodes(Graph, Node);
};
