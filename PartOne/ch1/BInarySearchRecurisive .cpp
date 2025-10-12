/*The function BinSearchRecursive returns the position of “key” in array
“A” between “left” and “right”
function BinSearchRecursive (A, key, left, right)
if left > right return not found
middle := (left + right)/2
// ﬁnd the middle, round the result
if A[middle] = key then return middle
if A[middle] > key then
return BinSearchRecursive (A, key, left, middle − 1)
if A[middle] < key then
return BinSearchRecursive (A, key, middle + 1, right)*/

#include <algorithm>
#include <iostream>
using namespace std;


int binarySearch (int A[], int Key, int left, int right) {

    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (A[mid] == Key) {
        return mid;
    }  if (A[mid] > Key) {
        return binarySearch(A, Key, left, mid - 1);
    } if (A[mid] < Key) {
        return binarySearch(A, Key, mid + 1, right);
    }
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

}

