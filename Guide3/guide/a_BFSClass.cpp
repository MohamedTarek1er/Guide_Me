#include "a_BFSClass.h"
#include "a_Edge.h"
#include "a_Graph.h"

vector<pair<pair<string,string>,vector<Edge>>>BFSClass::BFSVector;

BFSClass::BFSClass() {}

void BFSClass::traverse(string startNode) {

    vector<Edge>edges;

    set<string> visited;
    queue<string> q;

    BFSVector.clear();

    visited.insert(startNode);
    q.push(startNode);

    while (!q.empty())
    {
        string current = q.front();
        q.pop();

        for (auto& entry : Graph::adjList)
        {
            if (entry.first.first == current)
            {
                if (visited.find(entry.first.second) == visited.end())
                {
                    visited.insert(entry.first.second);
                    q.push(entry.first.second);

                    if (!entry.second.empty())
                    {
                        for (auto x : entry.second)
                        {
                            edges.push_back({x.transportationMethod,x.cost});
                        }
                        BFSVector.emplace_back(make_pair(make_pair(entry.first.first,entry.first.second),edges));
                        edges.clear();
                    }
                }
            }
        }
    }
}

