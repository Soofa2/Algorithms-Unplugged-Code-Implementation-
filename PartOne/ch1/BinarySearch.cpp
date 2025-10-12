/*1 Binary Search
7
The function BinarySearch returns the position of “key” in array “A”
between “left” and “right”
function BinarySearch (A, key, left, right)
while left ≤ right do
    middle := (left + right)/2
    // ﬁnd the middle, round the result
    if A[middle] = key then return middle
    if A[middle] > key then right := middle − 1
    if A[middle] < key then left := middle + 1
    endwhile
    return not found*/



#include <algorithm>
#include <iostream>
using namespace std;


int binarySearch(int A[], int Key, int left, int right) {
    int mid;
    while (left <= right) {
        mid = (right + left) / 2;

        if (Key == A[mid])
            return mid;

        else if (Key > A[mid])
            left = mid + 1;

        else if (Key < A[mid])
            right = mid + 1;

    }

    return -1;
}
int main () {

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Key;
    cout << "PLease Enter a number between 1 and 10" << endl;
    cin >> Key;
    int result = binarySearch(A, Key, 0, 9);

    if (result == -1)
        cout << "Number not found" << endl;
    else
        cout << "Number found and it's " << Key <<endl;

};





