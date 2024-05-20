#include "a_RoutesOptions.h"
#include "a_Edge.h"
#include "a_Graph.h"

vector<pair<int, string>>RoutesOptions::options;

RoutesOptions::RoutesOptions() {}

void RoutesOptions::findOptions(string source, string destination, int budget)
{
    options.clear();

    set<string> visited;
    stack<pair<pair<string, int>, string>> dfsStack;

    dfsStack.push({ {source, 0}, "" });

    while (!dfsStack.empty())
    {
        auto current = dfsStack.top();
        dfsStack.pop();

        string currentCity = current.first.first;
        int currentCost = current.first.second;
        string currentRoute = current.second;

        if (currentCity == destination)
        {
            if (currentCost <= budget)
            {
                currentRoute += destination;
                options.push_back({ currentCost, currentRoute });
            }
            continue;
        }

        for (auto& entry : Graph::adjList)
        {
            if (entry.first.first == currentCity && visited.find(entry.first.second) == visited.end())
            {
                for (auto& edge : entry.second)
                {
                    int newCost = currentCost + edge.cost;
                    string newRoute = currentRoute;

                    newRoute += currentCity + " -> (" + edge.transportationMethod + " $" + to_string(edge.cost) + ")-> ";
                    dfsStack.push({ {entry.first.second, newCost}, newRoute });
                }
            }
        }

        visited.insert(currentCity);
    }

    sort(options.begin(), options.end());
}
