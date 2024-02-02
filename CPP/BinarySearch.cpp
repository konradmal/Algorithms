#include <iostream>

using namespace std;

int binarySearchIterative(double arr[], int size, double target) {
    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int binarySearchRecursive(double arr[], int size, double target, int left, int right) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (target == arr[mid]) {
        return mid;
    }
    if (arr[mid] > target) {
        return binarySearchRecursive(arr, size, target, left, mid - 1);
    }
    return binarySearchRecursive(arr, size, target, mid + 1, right);
}

int main() {
    double wsp1[] = {2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1};
    cout << binarySearchIterative(wsp1, 10, 5.55) << endl;
    cout << binarySearchIterative(wsp1, 10, 8.1) << endl;
    cout << binarySearchIterative(wsp1, 10, 2.5) << endl;

    cout << binarySearchRecursive(wsp1, 10, 5.55, 0, 9) << endl;
    cout << binarySearchRecursive(wsp1, 10, 8.1, 0, 9) << endl;
    cout << binarySearchRecursive(wsp1, 10, 2.5, 0, 9) << endl;
}