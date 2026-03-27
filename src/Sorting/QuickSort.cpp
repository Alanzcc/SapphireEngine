#include <algorithm>
using namespace std;

size_t median_of_three(const vector<float>& vec, int low, int high)
{
    int mid = low + (high - low) / 2;
    if ((vec[low] < vec[mid]) != (vec[low] < vec[high]))
    {
        return low;
    }
    else if ((vec[mid] < vec[low]) != (vec[mid] < vec[high]))
    {
        return mid;
    }
    else
    {
        return high;
    }
}

int partition(vector<float>& vec, int low, int high)
{
    // Use median-of-three to choose the pivot
    swap(vec[median_of_three(vec, low, high)], vec[high]);
    float pivot = vec[high];

    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (vec[j] <= pivot)
        {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return i + 1;
}

void quick_sort(vector<float>& vec, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(vec, low, high);
        quick_sort(vec, low, pivot - 1);
        quick_sort(vec, pivot + 1, high);
    }
}