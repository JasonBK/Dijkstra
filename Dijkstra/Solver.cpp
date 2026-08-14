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

    
    Solver::startNodeChar = start;
    Solver::endNodeChar = end;
    Solver::startNode = *startN;
    Solver::endNode = *endN;
    Solver::currentNode = *startN;
    currentNode.cheapestCostToNode = 0;
    currentNode.previousNode = NULL;
    std::cout << "Cost to Start Node" << startN->vert<<" :"<<startN->cheapestCostToNode;

    //Solver::exploreMap.emplace( startN, false, INFINITY, startNode);
    //Solver::exploreMap.insert({startN, false, INFINITY, startN});
    //Solver::exploreMap[startN] = {false, INFINITY, startN };

}
int Solver::calcDistance(Graph G,char N)
{ 
    int totalCost, cost, currentNodeCost;
    currentNodeCost = currentNode.cheapestCostToNode;
    cost = currentNode.costMap[N];
    totalCost = currentNodeCost + cost;
    std::cout << "Cost from current node " << currentNode.vert << " to neighbouring node " << N << " :" << cost<<std::endl;
    std::cout << "Cost of to get to current node:" << currentNodeCost<<std::endl;
    std::cout << "Total Cost to get to " << N << " :" << totalCost<<std::endl;
    
    return totalCost;
}
void Solver::markNodeVisited(Graph G,Node N)
{
}
void Solver::visitNode(Graph G, Node N)
{
    for (const auto& edgeNode : N.edge)
    {
        int costToNeighbr;
        std::cout << "Edge Nodes:" << edgeNode << std::endl;
        if (!N.explored) 
        {
            costToNeighbr = calcDistance(G, edgeNode);
            std::cout << "Cheapest code to node is " << G.nodeList[edgeNode]->cheapestCostToNode <<std::endl;
            if (G.nodeList[edgeNode]->cheapestCostToNode > costToNeighbr)
            {

                // CHECK stored DISTANCE to node
            // compare stored vs current distance
                //if stored >current min, save current distance as node and current node as previous node

                std::cout << "New cheapest code to node" << edgeNode << "is" << costToNeighbr<<std::endl;
                G.nodeList[edgeNode]->previousNode = currentNodeChar;
                G.nodeList[edgeNode]->cheapestCostToNode = costToNeighbr;
            }
            //get node object 
            //if cheapest cost >cost
                //save cost as current min    
        }

        // if unexplore
            //calc disrtance
        //

                    // CHECK stored DISTANCE to node
                // compare stored vs current distance
                    //if stored >current min, save current distance as node and current node as previous node
        //mark current node as explored
    }
    //mark current node as explored
}
void Solver::updatenodes(Graph G, Node N)
{ 
}