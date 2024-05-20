#include <iostream>
#include <queue>
#include <set>
#include <map>
#include<stack>
#include "a_Graph.h"
#include<string>

class Edge;
using namespace std;

class DFSClass
{

public:
    DFSClass();

    static void performDFS(string startNode);

    static queue<string> DFSQueue;
};

