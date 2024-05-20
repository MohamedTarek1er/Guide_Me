#ifndef A_GRAPH_H
#define A_GRAPH_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include "a_Edge.h"
#include <QString>
#include<stack>
class Edge;

using namespace std;

class Graph
{

public:
    static map<pair<string,string>, vector<Edge>> adjList;
    static bool checkValid(string source,string destination);

    Graph();
    void addEdge(string source, string destination, string method, int cost);

    void deleteEdge(string source, string destination);

    bool isComplete();
    void printgraph();

    void writeToFile(const string& filename);
    void readFromFile(const string& filename);
};
#endif
