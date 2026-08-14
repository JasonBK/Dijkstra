#pragma once
#include "node.hpp"
#include <unordered_map>
class Graph
{
public:
	std::unordered_map<char, Node*> nodeList;
	void addNode(char,Node*);
	void displayList();


};

