#include "node.hpp"
#include <iostream>

void Node::setVert(char v)
{
	Node::vert = v;
}

void Node::addEdge(char e, int cost)
{
	Node::edge.push_back(e);
	//shouyld add code to filter illegal cost values and assign 0 as default
	Node::costMap[e] = cost;

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
