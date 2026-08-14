#include "Graph.h"

#include "node.hpp"
#include <list>

void Graph::addNode(char nodeChar, Node* node)
{
	Graph::nodeList[nodeChar] = node;
}