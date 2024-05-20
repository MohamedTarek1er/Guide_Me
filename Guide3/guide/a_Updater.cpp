#include "a_Updater.h"
#include "a_Edge.h"
#include "a_Graph.h"

using namespace std;

Updater::Updater() {}

//change cost & add trans
bool Updater::update (string source, string destination, string transMethod, int newCost, int input) {

    switch (input) {
    case 1: {
        bool found = false;
        for (auto& search : Graph::adjList) {
            if (search.first.first == source && search.first.second == destination) {
                for (auto& trans : search.second) {
                    if (trans.transportationMethod == transMethod) {
                        trans.cost = newCost;
                        found = true;
                    }
                }
            }
        }
        return found;
    }
    case 2: {
        bool found = false;
        for (auto& search : Graph::adjList) {
            if (search.first.first == source && search.first.second == destination) {
                for (auto& trans : search.second) {
                    if (trans.transportationMethod == transMethod) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    Graph::adjList[{source, destination}].push_back(Edge(transMethod, newCost));
                }
            }
        }
        return found;
    }
    default:
        return false;
    }
}

//delete trans
bool Updater::update(string source, string destination, string transMethod) {

    for (auto& search : Graph::adjList)
    {
        if (search.first.first == source && search.first.second == destination) {
            for (int i = 0; i < search.second.size(); i++) {
                if (transMethod == (*(search.second.begin() + i)).transportationMethod) {
                    search.second.erase(search.second.begin() + i);
                    return true;
                }
            }
            return false;
        }
    }
}

//rename trans
bool Updater::update(string source, string destination, string transMethod, string newName) {
    bool found = false;
    for (auto& search : Graph::adjList) {
        if (search.first.first == source && search.first.second == destination) {
            for (auto& trans : search.second) {
                if (trans.transportationMethod == transMethod) {
                    trans.transportationMethod = newName;
                    found = true;
                }
            }
        }
    }
    return found;
}

