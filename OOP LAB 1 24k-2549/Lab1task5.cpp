#include <iostream>
using namespace std;

int main() {
    int r = 2, c = 2; // for example
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = 0; // initialize
            for (int k = 0; k < c; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // print result
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
