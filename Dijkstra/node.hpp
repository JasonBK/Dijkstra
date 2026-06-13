#ifndef NODE_HPP
#define NODE_HPP
#include <list>
// node class declaration

class Node
{
	private:
		char vert;
		std::list<char> edge;
	public:
		void setVert(char);
		void addEdge(char);
};

#endif
