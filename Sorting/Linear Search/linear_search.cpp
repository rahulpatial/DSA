#include <iostream>
using namespace std;

// Function to linearly search the element X in the
// array arr[] of N elements
int search(int arr[], int N, int X)
{
    // Pointer to traverse the array
    int i;

    // Start traversing the array
    for (i = 0; i < N; i++)
    {
        // If a successful match is found,
        // return the index
        if (arr[i] == X)
            return i;
    }

    // If the element is not found,
    // and end of array is reached
    return -1;
}
 int int main(int argc, char const *argv[]) {

     return 0;
 }
