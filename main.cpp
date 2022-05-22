#include <iostream>
#include <fstream>

#include "list/list.h"
#include "readGraph/readGraph.h"
#include "translate/translate.h"

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-6\\input.txt");
    int n, v;

    list* graph = readGraph(fin, n);

    if (graph != nullptr) {
        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << ": ";
            graph[i].print();
            std::cout << std::endl;
        }

        bool** matrix = translate(graph, n, v);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < v; j++)
                std::cout << matrix[i][j] << " ";

            std::cout << std::endl;
        }
    }

    return 0;
}