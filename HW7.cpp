#include <iostream>
using namespace std;

bool morePositivesThanNegatives(const int arr[], int size) {
    int positives = 0;
    int negatives = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            positives++;
        else if (arr[i] < 0)
            negatives++;
        // zeros are ignored
    }

    return positives > negatives;
}

int main() {
    int test1[] = {3, -2, 4, -1, 0, 6, 8, -9, 5, 2};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    cout << "Test 1: ";
    if (morePositivesThanNegatives(test1, size1))
        cout << "More positives than negatives.\n";
    else
        cout << "Not more positives than negatives.\n";

    int test2[] = {-3, -1, -7, 0, 2, -4, -6, -2, -9, -5};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    cout << "Test 2: ";
    if (morePositivesThanNegatives(test2, size2))
        cout << "More positives than negatives.\n";
    else
        cout << "Not more positives than negatives.\n";

    int test3[] = {0, 1, -1, 2, -2, 3, -3, 4, -4, 5};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    cout << "Test 3: ";
    if (morePositivesThanNegatives(test3, size3))
        cout << "More positives than negatives.\n";
    else
        cout << "Not more positives than negatives.\n";

    return 0;
}

