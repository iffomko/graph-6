//
// Created by Iluha on 23.05.2022.
//

#ifndef GRAPH_6_MINC_H
#define GRAPH_6_MINC_H

#include <iostream>
#include "../list/list.h"

class mInc {
    int n{};
    int v{};
    bool** graph = nullptr;
public:
    mInc();
    explicit mInc(int n);
    ~mInc();

    void fill(list* graph);
    void print();

    bool** getGraph();
};


#endif //GRAPH_6_MINC_H
