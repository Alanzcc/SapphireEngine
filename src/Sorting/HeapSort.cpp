#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<float> &vec, int len, int index)
{
    int largest = index;
    int left = 2 * largest + 1;
    int right = 2 * largest + 2;

    if (left < len && vec[left] > vec[largest])
    {
        largest = left;
    }
    if (right < len && vec[right] > vec[largest])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(vec[index], vec[largest]);
        heapify(vec, len, largest);
    }
}

void heap_sort(vector<float> &vec)
{
    for (int i =  vec.size() / 2 - 1; i >= 0; i--)
    {
        heapify(vec, vec.size(), i);
    }
    for (int i = vec.size() - 1; i > 0; i--)
    {
        swap(vec[0], vec[i]);
        heapify(vec, i, 0);
    }
}