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
  
    }

    return positives > negatives;
}

int main() {
    int numbers1[] = {3, -1, 5, 0, -2, 8};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);

    if (morePositivesThanNegatives(numbers1, size1))
        cout << "Array 1 has more positive numbers than negatives.\n";
    else
        cout << "Array 1 does NOT have more positive numbers than negatives.\n";

    int numbers2[] = {-5, -3, 0, -1, 2};
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);

    if (morePositivesThanNegatives(numbers2, size2))
        cout << "Array 2 has more positive numbers than negatives.\n";
    else
        cout << "Array 2 does NOT have more positive numbers than negatives.\n";

    return 0;
}
