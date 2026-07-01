#pragma once
#include <list>
#include "node.hpp"

class Solver
{
private:
	std::list<Node> visitedNodes;
	std::list<Node> unvisitedNodes;
public:
	void markNodeVisited();
	void visitNode();
	void updatenodes();
};

