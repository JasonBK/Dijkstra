// Dijkstra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "node.hpp"
#include "Graph.h"

int main()
{
    // need to make the code able to get graph in more generic representation then put into ghraph. need graph builder.
    //for now manually build graph
    std::cout << "Hello World!\n";
    Node a;
    Node b;
    Node c;
    Node d;
    Node e;
    Node f;
    Graph starterGraph;

    a.setVert('A');
    a.addEdge('B',2);
    a.addEdge('D',8);


    b.setVert('B');
    b.addEdge('A', 2);
    b.addEdge('E', 6);
    b.addEdge('D', 5);

    c.setVert('C');
    c.addEdge('E', 9);
    c.addEdge('F', 3);

    d.setVert('D');
    d.addEdge('A', 8);
    d.addEdge('B', 5);
    d.addEdge('E', 3);
    d.addEdge('F', 2);


    e.setVert('E');
    e.addEdge('B', 6);
    e.addEdge('C', 9);
    e.addEdge('D', 3);
    e.addEdge('F', 1);

    f.setVert('F');
    f.addEdge('C', 3);
    f.addEdge('D', 2);
    f.addEdge('E', 1);

    starterGraph.addNode(a);
    starterGraph.addNode(b);
    starterGraph.addNode(c);
    starterGraph.addNode(d);
    starterGraph.addNode(e);
    starterGraph.addNode(f);

// identify start node and end node

//mark allnodes unvisited empty visited nodes

//tentavide minimum distance to node for all nodes
//https://www.google.com/search?q=dijkstra+algorithm&num=10&sca_esv=f807a6330220bb73&rlz=1C1CHBF_enCA1202CA1202&sxsrf=APpeQnv-fLo-7CFMsKuuJvof-D71mJ-LEQ%3A1785597962281&ei=ChBuatveEImCm9cP45WOyAY&biw=1920&bih=919&ved=0ahUKEwjbi4Pi3v-VAxUJweYEHeOKA2kQ4dUDCBA&uact=5&oq=dijkstra+algorithm&gs_lp=Egxnd3Mtd2l6LXNlcnAiEmRpamtzdHJhIGFsZ29yaXRobTIEECMYJzIEECMYJzILEAAYgAQYigUYkQIyBhAAGAcYHjILEAAYgAQYigUYkQIyCxAAGIAEGIoFGJECMgsQABiABBiKBRiRAjIKEAAYgAQYigUYQzIGEAAYBxgeMgoQABiABBiKBRhDSJMJUP8GWP8GcAJ4AZABAJgBaqABaqoBAzAuMbgBA8gBAPgBAZgCA6ACgAHCAgoQABhHGNYEGLADwgIXEC4Y3AYYuAYY2gYY2AIYyAMYsAPYAQGYAwCIBgGQBg66BgYIARABGBmSBwMyLjGgB9QHsgcDMC4xuAdywgcDMi0zyAcSgAgB&sclient=gws-wiz-serp#fpstate=ive&vld=cid:db8bad24,vid:bZkzH5x0SKU,st:0
//explore start node
    //distance to start node is 0
    //update estimates
        //update estimated min distance to connected vertices
            // for all neighbours of current node
            // if it is unexplored
                //calc distance
                    // add cost to current node node + cost to traverse the new node 
                //        
            // CHECK stored DISTANCE to node
                // compare stored vs current distance
                    //if stored >current min, save current distance as node and current node as previous node
        //mark current node as explored
    //choose next vertex
        //choose unexplored node with smallest estimate
            //pick smallest vallue from unexplored nodes list
            // current node = min node
     //repeat until unvisited nodes cleared?

    //start at end goal in add previous node topath
        // check previous node  , add to path
        //repeat until at start node/no more previouis nodes
}
// stop dijkstra when shortest node is popped of priority queue -- once you've ecxplored the goal node you're probably done

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
