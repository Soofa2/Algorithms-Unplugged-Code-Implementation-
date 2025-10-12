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


int binarySearch (int A [], int Key, int left, int right){


    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == Key) {
            return mid;
        } else if (A[mid] < Key) {
            left = mid + 1;
        } else if (A[mid] > Key) {
            right = mid - 1;
        }
    }


    return -1;
};


int main () {

    int A[] = {1,2,3,4,5,6,7,8,9};
    int Key;
    cout << "Enter a key betweem 1 and 10: ";
    cin >> Key;

    int result =  binarySearch(A, Key, 0, 9);

    if ( result == -1) {
        cout << "Key not found" << endl;
    } else {
        cout << "Your Key is " << Key << endl;
    }
}

