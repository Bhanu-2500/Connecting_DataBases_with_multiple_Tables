// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Graph.h"
int main()
{
    Graph G;
    G.readGraph("Graph.txt");
    std::cout << "Hello World!\n";
}

