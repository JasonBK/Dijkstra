#pragma once
#include <list>
#include "node.hpp"
#include "Graph.h"

class Solver
{
private:
	std::list<Node> visitedNodes;
	std::list<Node> unvisitedNodes;
	char startNode;
	char endNode;
// map with node ,cost to go to node, previous node,
public:
	Solver(char, char);
	void calcDistance(Graph,Node);
	void markNodeVisited(Graph,Node);
	void visitNode(Graph,Node);
	void updatenodes(Graph, Node);
};
