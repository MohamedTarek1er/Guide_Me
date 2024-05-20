#pragma once
#include <iostream>
#include <queue>
#include <set>
#include <map>

class Edge;
using namespace std;

class BFSClass
{
private:
    set<string> visited;
    queue<string> q;

public:
    BFSClass();

    static void traverse(string startNode);
    static vector<pair<pair<string,string>,vector<Edge>>>BFSVector;
};

