#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size : ";
    cin >> n;

    int **matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumMain = 0, sumSecondary = 0;

    for (int i = 0; i < n; i++) {
        sumMain += matrix[i][i];           // Main diagonal
        sumSecondary += matrix[i][n - 1 - i]; // Secondary diagonal
    }
    cout << "\nMatrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
 
    cout << "\nSum of Main Diagonal = " << sumMain << endl;
    cout << "Sum of Secondary Diagonal = " << sumSecondary << endl;

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
