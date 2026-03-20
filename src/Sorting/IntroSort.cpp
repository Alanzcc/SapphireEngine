#include <cmath>
#include <vector>
using namespace std;
#include "InsertionSort.cpp"
#include "HeapSort.cpp"
#include "QuickSort.cpp"

void introspection(vector<float> &vec, int low, int high, int depthLimit)
{
    if (vec.size() < 16)
    {
        insertion_sort(vec);
    }
    else if (depthLimit == 0)
    {
        heap_sort(vec);
    }
    else
    {
        int pivot = partition(vec, low, high);
        introspection(vec, low, pivot - 1, depthLimit - 1);
        introspection(vec, pivot + 1, high, depthLimit - 1);
    }
}

void intro_sort(vector<float> &vec)
{
    int maxDepth = static_cast<int>(2 * log2(vec.size()));
    introspection(vec, 0, vec.size() - 1, maxDepth);
}