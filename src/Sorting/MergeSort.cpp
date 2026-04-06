#include <vector>

void merge(std::vector<float>& vec, int left,
    int mid, int right)
{

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    std::vector<float> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back
    // into vec[left..right]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            vec[k] = L[i];
            i++;
        }
        else
        {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1)
    {
        vec[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2)
    {
        vec[k] = R[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of vec to be sorted
void merge_sort(std::vector<float>& vec, int left, int right)
{

    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    merge_sort(vec, left, mid);
    merge_sort(vec, mid + 1, right);
    merge(vec, left, mid, right);
}