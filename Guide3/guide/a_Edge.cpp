#include "a_Edge.h"
#include <string>
#include <unordered_map>
#include <list>
#include <utility>
#include <iostream>
#include <QString>

using namespace std;

Edge::Edge(string method, int cst)
{
    transportationMethod = method;
    cost = cst;
}

