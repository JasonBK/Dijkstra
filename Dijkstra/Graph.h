#pragma once
#include "node.hpp"
#include <list>
class Graph
{
private:
	std::list<Node> nodeList;
public:
	void addNode(Node);
	void displayList();


};

