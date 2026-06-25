#include "node.hpp"
#include <iostream>

void Node::setVert(char v)
{
	Node::vert = v;
}

void Node::addEdge(char e)
{
	Node::edge.push_back(e);
}

void Node::displayNode()
{
	std::cout << "Vertice: " << Node::vert<<std::endl;
	std::cout << "Edge: ";
	for (char edgeitem : Node::edge)
	{
		std::cout << edgeitem << " ";
	}
}
