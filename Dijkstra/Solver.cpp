#include "Solver.h"
#include <iostream>


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
        // current node = min nod

//functions find all neighbours ocurrent node
    // make sure all nodes unexplored
        //
Solver::Solver(char start,char end,Node* startN, Node* endN) 
{

    std::cout << "Solver Cost:" << startN->cheapestCostToNode;
    Solver::startNodeChar = start;
    Solver::endNodeChar = end;
    Solver::startNode = *startN;
    Solver::endNode = *endN;
    startN->cheapestCostToNode = 0;
    startN->previousNode = NULL;
    std::cout << "Solver Cost:" << startN->cheapestCostToNode;

    //Solver::exploreMap.emplace( startN, false, INFINITY, startNode);
    //Solver::exploreMap.insert({startN, false, INFINITY, startN});
    //Solver::exploreMap[startN] = {false, INFINITY, startN };

}
void Solver::calcDistance(Graph G,Node N)
{ 
    //int totalCost, cost, currentNodeCost;


    //totalCost = cost + currentNodeCost;
}
void Solver::markNodeVisited(Graph G,Node N)
{
}
void Solver::visitNode(Graph G, Node N)
{
    for (const auto& edgeNode : N.edge)
    {
        std::cout << "Edge Nodes:" << edgeNode << std::endl;
        // if unexplore
            //calc disrtance
        //

                    // CHECK stored DISTANCE to node
                // compare stored vs current distance
                    //if stored >current min, save current distance as node and current node as previous node
        //mark current node as explored
    }
}
void Solver::updatenodes(Graph G, Node N)
{ 
}