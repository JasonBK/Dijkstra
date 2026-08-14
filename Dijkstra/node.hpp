#ifndef NODE_HPP
#define NODE_HPP
#include <list>
#include <unordered_map>
// node class declaration

class Node
{
	public:
		char vert;
		std::unordered_map<char, int> costMap;
		std::list<char> edge;
		bool explored{false};
		char previousNode;
		int cheapestCostToNode;
		void setVert(char);
		void addEdge(char,int);
		void displayNode();

};

#endif
