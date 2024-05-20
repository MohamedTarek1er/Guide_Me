#include <string>
#include <map>
#include <vector>
#include "a_Edge.h"
#include <iostream>
#include <queue>
#include <set>

#include "a_Edge.h"
#include "a_Graph.h"

class Edge;
using namespace std;
class Updater
{
public:
    Updater();
    static bool update(string source, string destination, string transMethod, int newCost, int input);
    static bool update( string source, string destination, string transMethod);
    static bool update( string source, string destination, string transMethod, string newName);
};


