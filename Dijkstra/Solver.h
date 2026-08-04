#pragma once
#include <list>
#include "node.hpp"

class Solver
{
private:
	std::list<Node> visitedNodes;
	std::list<Node> unvisitedNodes;
// map with node ,cost to go to node, previous node,
public:
	void markNodeVisited();
	void visitNode();
	void updatenodes();
};
