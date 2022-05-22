//
// Created by Iluha on 22.05.2022.
//

#include "translate.h"

bool** translate(list* graph, const int &n, int &v) {
    bool** newGraph = new bool*[n];
    v = 0;

    for (int i = 0; i < n; i++)
        newGraph[i] = new bool[n * n]{};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < graph[i].length(); j++) {
            newGraph[i][v] = true;
            newGraph[graph[i][j]->getData() - 1][v] = true;
            v++;
        }
    }

    return newGraph;
}