//
// Created by Iluha on 23.05.2022.
//

#include "mInc.h"

mInc::mInc() {
    this->graph = nullptr;
}

mInc::mInc(int n) {
    this->n = n;
    this->graph = nullptr;
}

mInc::~mInc() {
    delete[] this->graph;
}

void mInc::fill(list *graph) {
    this->graph = new bool*[this->n];
    this->v = 0;

    for (int i = 0; i < this->n; i++)
        this->graph[i] = new bool[this->n * this->n]{};

    for (int i = 0; i < this->n; i++) {
        for (int j = 0; j < graph[i].length(); j++) {
            this->graph[i][this->v] = true;
            this->graph[graph[i][j]->getData() - 1][this->v] = true;
            this->v++;
        }
    }
}

void mInc::print() {
    if (this->graph == nullptr) {
        std::cout << "Graph don't initialize\n";
    } else {
        for (int i = 0; i < this->n; i++) {
            for (int j = 0; j < this->v; j++)
                std::cout << this->graph[i][j] << " ";

            std::cout << std::endl;
        }
    }
}

bool **mInc::getGraph() {
    return this->graph;
}