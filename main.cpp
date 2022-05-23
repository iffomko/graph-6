#include <iostream>
#include <fstream>

#include "list/list.h"
#include "readGraph/readGraph.h"
#include "mInc/mInc.h"

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-6\\input.txt");
    int n;

    list* graph = readGraph(fin, n);

    if (graph != nullptr) {
        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << ": ";
            graph[i].print();
            std::cout << std::endl;
        }

        mInc newGraph(n);
        newGraph.fill(graph);
        newGraph.print();
    }

    return 0;
}