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
    currentNodeChar = startN->vert;
    currentNode.cheapestCostToNode = 0;
    currentNode.previousNode = NULL;
    //std::cout << "Cost to Start Node" << startN->vert<<" :"<<startN->cheapestCostToNode;
    unexploredNodes[0] = startN;

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
    //std::cout << "Cost from current node " << currentNode.vert << " to neighbouring node " << N << " :" << cost<<std::endl;
    //std::cout << "Cost of to get to current node:" << currentNodeCost<<std::endl;
    //std::cout << "Total Cost to get to " << N << " :" << totalCost<<std::endl;
    
    return totalCost;
}

void Solver::visitNode(Graph G, Node N)
{
    std::cout << "Visiting node:" << currentNodeChar;
    std::cout << "Before visiting is node explored:" << currentNode.explored << std::endl;
    for (const auto& edgeNode : N.edge)
    {
        //std::cout << "Exploring Node:" << currentNode.vert << std::endl;
        //std::cout << "Explored:" << currentNode.explored << std::endl;
        int costToNeighbr;
        //std::cout << "Edge Nodes:" << edgeNode << std::endl;
        if (!N.explored) 
        {
            costToNeighbr = calcDistance(G, edgeNode);
            //std::cout << "Cheapest code to node is " << G.nodeList[edgeNode]->cheapestCostToNode <<std::endl;

            if (G.nodeList[edgeNode]->cheapestCostToNode > costToNeighbr)
            {

                // CHECK stored DISTANCE to node
            // compare stored vs current distance
                //if stored >current min, save current distance as node and current node as previous node
                            //if cheapest cost >cost
                //save cost as current min   
                
                //std::cout << "New cheapest code to node " << edgeNode << " is" << costToNeighbr<<std::endl;
                //std::cout << "Current Node Char: " << currentNodeChar;
                G.nodeList[edgeNode]->previousNode = currentNodeChar;
                G.nodeList[edgeNode]->cheapestCostToNode = costToNeighbr;
                //std::cout << "From node" << G.nodeList[edgeNode]->previousNode << std::endl;


            }
            
            //add node to unexplored list
            // dont add for 2 cases if already explored or if already in list
            if (!G.nodeList[edgeNode]->explored)
            {
                unexploredNodes[costToNeighbr] = G.nodeList[edgeNode];
            }
            //for (const auto& [cost, node] : unexploredNodes) {
            //    std::cout << cost << ": " << node << "\n";
            //}

        }

        // if unexplore
            //calc disrtance
        //

                    // CHECK stored DISTANCE to node
                // compare stored vs current distance

    }
    //mark current node as explored
    currentNode.explored = true;
    G.nodeList[currentNodeChar]->explored = true;
    std::cout << "Explored:" << currentNode.explored << std::endl;
    for (const auto& [cost, node] : unexploredNodes) {
        std::cout << cost << ": " << node->vert << "\n";
    }
    unexploredNodes.erase(unexploredNodes.begin());
    std::cout << "Explored Node List after Erasure:" << currentNode.explored << std::endl;
    //std::cout << "Explored Second:" << unexploredNodes.begin()->second << std::endl;
    for (const auto& [cost, node] : unexploredNodes) {
        std::cout << cost << ": " << node->vert << "\n";
    }

}
void Solver::nextNode()
{ 
    //get first item from unexplored list
    currentNode = *unexploredNodes.begin()->second;
    currentNodeChar = currentNode.vert;
    std::cout << "Next current node is:" << currentNode.vert << std::endl;
    //set as current node
}

void Solver::retrievePath(Graph G, Node starN, Node endN)
{
    std::string nodes;
    std::cout << "RETRACING PATH" << std::endl;
    //create list of nodes

    // from graph go to end node
    nodes.push_back(endN.vert);
    nodes.push_back(G.nodeList[endN.vert]->previousNode);
    std::cout << "Node path: " << nodes << std::endl;
    while (starN.vert != nodes.back())
    {
        nodes.push_back(G.nodeList[nodes.back()]->previousNode);
        std::cout << "Node path: " << nodes << std::endl;
    }
 //prints out the nodes but it is backwards
        

}