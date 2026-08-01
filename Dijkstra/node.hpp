#ifndef NODE_HPP
#define NODE_HPP
#include <list>
#include <unordered_map>
// node class declaration

class Node
{
	private:
		char vert;
		std::list<char> edge;
		std::unordered_map<char, int> costMap;
		 
	public:
		void setVert(char);
		void addEdge(char,int);
		void displayNode();
};

#endif
