//
// Created by Iluha on 22.05.2022.
//

#include "readGraph.h"

list* readGraph(std::ifstream &fin, int &n) {
    list* graph = nullptr;

    if (!fin) {
        std::cout << "Failed reading file with error\n";
    } else {
        fin >> n;

        graph = new list[n];

        for (int i = 0; i < n; i++) {
            int x = -1;

            while (true) {
                fin >> x;
                if (x != 0)
                    graph[i].push(x);
                else
                    break;
            }
        }
    }

    fin.close();

    return graph;
}