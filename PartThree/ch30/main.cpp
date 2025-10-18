#include <iostream>
#include <cmath>
using namespace std;

void GaussSeidel1D(int n, double u[], double f[]) {
    int iterations = 10000;

    for (int iter = 0; iter < iterations; iter++) {
        for (int i = 1; i < n - 1; i++) {
            u[i] = 0.5 * (u[i - 1] + u[i + 1]) + f[i];
        }
    }
}

int main() {
    int n;
    cout << "Please enter the number of discretized points: ";
    cin >> n;

    double u[n], f[n];

    cout << "Enter left boundary temperature (u[0]): ";
    cin >> u[0];

    cout << "Enter right boundary temperature (u[" << n - 1 << "]): ";
    cin >> u[n - 1];

    for (int i = 1; i < n - 1; i++) u[i] = 0.0;

    cout << "Enter heat values (f):" << endl;
    for (int i = 0; i < n; i++) cin >> f[i];

    GaussSeidel1D(n, u, f);

    cout << "\nFinal temperature distribution:" << endl;
    for (int i = 0; i < n; i++)
        cout << "u[" << i << "] = " << u[i] << endl;

    return 0;
}
