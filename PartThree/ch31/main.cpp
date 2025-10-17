#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int deletion = 2;
const int insertion = 2;
const int substitution = 3;

int eDistance (const string &firstSequance, const string &secondSequance, int i, int j, vector<vector<int>> &dpTaple) {
    if (dpTaple[i][j] != -1) return dpTaple[i][j];

    if (i == 0) return dpTaple[i][j] = j * insertion;
    if (j == 0) return dpTaple[i][j] = i * deletion;

    int subsCost;
    if (firstSequance[i-1] == secondSequance[j-1])
        subsCost = 0;
    else
        subsCost = substitution;

    int deletionChoice     = eDistance(firstSequance, secondSequance, i-1, j, dpTaple) + deletion;
    int insertionChoice    = eDistance(firstSequance, secondSequance, i, j-1, dpTaple) + insertion;
    int substitutionChoice = eDistance(firstSequance, secondSequance, i-1, j-1, dpTaple) + subsCost;

    return dpTaple[i][j] = min({deletionChoice, insertionChoice, substitutionChoice});
}

int main() {
    string firstSequance, secondSequance;
    cout << "Please enter the first DNA sequence: ";
    cin >> firstSequance;
    cout << "Please enter the second DNA sequence: ";
    cin >> secondSequance;

    int i = firstSequance.length();
    int j = secondSequance.length();

    vector<vector<int>> dpTaple(i + 1, vector<int>(j + 1, -1));

    int result = eDistance(firstSequance, secondSequance, i, j, dpTaple);
    cout << "Your distance = " << result << endl;
}
