#ifndef A_EDGE_H
#define A_EDGE_H
#include <string>
#include <QString>

using namespace std;

class Edge
{
public:
    string transportationMethod;
    int cost;

    Edge(string method, int cst);
};

#endif // A_EDGE_H
