#pragma once
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <iostream>
#include <queue>
#include <set>
#include <map>

class Edge;

using namespace std;
class RoutesOptions
{

public:
    static vector<pair<int, string>>options;
    RoutesOptions();
    static void findOptions(string source, string destination, int budget);
};

