#include "a_DFSClass.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>
#include <QDebug>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <stack>
#include<deque>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>

queue<string>DFSClass::DFSQueue;

DFSClass::DFSClass() {}

void DFSClass::performDFS(string startNode)
{
    while(!DFSQueue.empty())
    {
        DFSQueue.pop();
    }

    stack<string>tempStack;
    set<string>visited;

    visited.insert(startNode);
    tempStack.push(startNode);

    while (!tempStack.empty())
    {
        string current = tempStack.top();
        DFSQueue.push(tempStack.top());
        tempStack.pop();

        for (auto& searchedItem : Graph::adjList)
        {
            if (searchedItem.first.first == current)
            {
                if (visited.find(searchedItem.first.second) == visited.end())
                {
                    visited.insert(searchedItem.first.second);
                    tempStack.push(searchedItem.first.second);
                }
            }
        }
    }


}
