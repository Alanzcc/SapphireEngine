#include "../src/Sorting/MergeSort.cpp"
#include "../src/Sorting/IntroSort.cpp"
#include "../src/Sorting/SelectionSort.cpp"
#include <iostream>
#include <vector>
#include <random>
using namespace std;

// change the use of rand() to a more modern random number generator, since rand() is not very good for generating random numbers and is not thread safe.
default_random_engine generator;
uniform_real_distribution<float> distribution(0.0f, 100.0f);

// generate a random vector of floats to test the sorting algorithms
vector<float> generateRandomVector(int size)
{
    vector<float> vec(size);
    for (int i = 0; i < size; ++i)
    {
        vec[i] = distribution(generator); // Random float between 0 and 100
    }
    return vec;
}

int main()
{
    vector<float> vec = generateRandomVector(15); // Generate a vector of 15 random floats

    cout << "Original vector: ";
    for (float num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Selection Sort
    vector<float> selectionVec = vec; // Copy original vector 
    selection_sort(selectionVec);
    cout << "Sorted with Selection Sort: ";
    for (float num : selectionVec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Quick Sort
    vector<float> quickVec = vec; // Copy original vector
    quick_sort(quickVec, 0, quickVec.size() - 1);
    cout << "Sorted with Quick Sort: ";
    for (float num : quickVec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Merge Sort
    vector<float> mergeVec = vec; // Copy original vector
    merge_sort(mergeVec, 0, mergeVec.size() - 1);
    cout << "Sorted with Merge Sort: ";
    for (float num : mergeVec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Heap Sort
    vector<float> heapVec = vec; // Copy original vector
    heap_sort(heapVec);
    cout << "Sorted with Heap Sort: ";
    for (float num : heapVec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Intro Sort
    vector<float> introVec = vec; // Copy original vector
    intro_sort(introVec);
    cout << "Sorted with Intro Sort: ";
    for (float num : introVec)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Insertion Sort
    vector<float> insertionVec = vec; // Copy original vector
    insertion_sort(insertionVec);
    cout << "Sorted with Insertion Sort: ";
    for (float num : insertionVec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}