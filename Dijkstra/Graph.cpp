#include "Graph.h"

#include "node.hpp"
#include <list>

void Graph::addNode(Node* node)
{
	Graph::nodeList.push_back(node);
}