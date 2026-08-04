#include "Solver.h"

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