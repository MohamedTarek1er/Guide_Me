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
#include<unordered_map>
#include <iomanip>
#include<iterator>
#include<fstream>
#include<sstream>
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>
#include <QDebug>
#include "a_BFSClass.h"
#include "a_RoutesOptions.h"
#include "a_DFSClass.h"

using namespace std;

map<pair<string,string>, vector<Edge>> Graph::adjList;

Graph::Graph() {}

void Graph::addEdge(string source, string destination, string method, int cost)
{
    adjList[{source, destination}].push_back(Edge(method, cost));
}

void Graph::deleteEdge(string source, string destination)
{
    for (auto& search : adjList)
    {
        if (search.first.first == source && search.first.second == destination)
        {
            adjList.erase({ source,destination });
        }
    }
}

bool Graph::isComplete()
{
    set<string>Cities;

    for (auto x : adjList)
    {
        Cities.insert(x.first.first);
    }

    int counter = Cities.size();

    while (Cities.size())
    {
        int newCnt = 0;
        for (auto& entry : adjList)
        {
            if (entry.first.first == (*(Cities.begin())))
            {
                newCnt++;
            }
        }

        if (newCnt < counter - 1)
        {
            return false;
        }

        Cities.erase(Cities.begin());
    }
    return true;
}

void Graph::printgraph()
{
    for (auto x : adjList)
    {
        qDebug() << x.first.first << " -> " << x.first.second<<"\n";
        for (auto y : x.second)
        {
            qDebug() << y.transportationMethod << " = " << y.cost <<"\n";
        }
    }
}

void Graph::writeToFile(const string& filename)
{
    ofstream writeFile(filename);
    if (writeFile.is_open())
    {
        int numOfEdges = adjList.size() / 2;
        writeFile << numOfEdges << endl;

        set<pair<string, string>>tempSet;

        for (auto entry : adjList)
        {
            bool found = false;
            if (tempSet.size())
            {
                for (auto inSet : tempSet)
                {
                    if (entry.first.first == inSet.second && entry.first.second == inSet.first)
                    {
                        found = true;
                    }
                }
            }
            if (!found)
            {
                tempSet.insert({ entry.first.first,entry.first.second });

                string tempSource= entry.first.first;
                string tempDest= entry.first.second;

                tempSource[0]=toupper(tempSource[0]);
                tempDest[0]=toupper(tempDest[0]);

                writeFile << tempSource << " - " << tempDest << " ";

                for (auto edge : entry.second)
                {
                    string tempTrans=edge.transportationMethod;
                    tempTrans[0]=toupper(tempTrans[0]);

                    writeFile << tempTrans << " " << edge.cost << " ";
                }
                writeFile << endl;
            }
        }
    }
    writeFile.close();
}

void Graph::readFromFile(const string& filename)
{
    ifstream readFile(filename);
    if (readFile.is_open())
    {
        string num;
        getline(readFile, num);

        int numOfLines = stoi(num);

        while (numOfLines--)
        {
            string line;
            getline(readFile, line);

            istringstream stringName(line);
            string source, temp, destination, method;
            int cost;

            stringName >> source >> temp >> destination;

            while (stringName >> method >> cost)
            {
                for (auto& x : source) {
                    x = tolower(x);
                }

                for (auto& x : destination) {
                    x = tolower(x);
                }

                for (auto& x : method) {
                    x = tolower(x);
                }
                addEdge(source, destination, method, cost);
                addEdge(destination, source, method, cost);
            }
        }
    }
    readFile.close();
}

bool Graph::checkValid(string source,string destination)
{
    for(auto& entry:adjList)
    {
        if(entry.first.first==source && entry.first.second==destination||
            (entry.first.second==source && entry.first.first==destination))
        {
            return true;
        }
    }
    return false;
}
