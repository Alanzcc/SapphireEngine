#include <vector>
#include <algorithm>

// Selection sort function
void selection_sort(std::vector<float>& vec)
{
    int length = vec.size();
    // Traverse the entire array (excluding the last element)
    for (int i = 0; i < length - 1; ++i)
    {
        int jMin = i; // Assume the current position as the minimum

        // Search for the smallest element in the unsorted portion
        for (int j = i + 1; j < length; ++j)
        {
            if (vec[j] < vec[jMin])
            {
                // Found a smaller element
                jMin = j; // Update index of the minimum element
            }
        }

        // Swap only if a smaller element was found
        if (jMin != i)
        {
            std::swap(vec[i], vec[jMin]);
        }
    }
}
