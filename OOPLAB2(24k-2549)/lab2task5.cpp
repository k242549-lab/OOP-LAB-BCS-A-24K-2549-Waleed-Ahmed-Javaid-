#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buffer1[100], buffer2[100];

    cout << "Enter first string: ";
    cin >> buffer1;
    cout << "Enter second string: ";
    cin >> buffer2;

    int len1 = strlen(buffer1);
    int len2 = strlen(buffer2);

    char *str1 = new char[len1 + 1];
    char *str2 = new char[len2 + 1];

    strcpy(str1, buffer1);
    strcpy(str2, buffer2);

    char *concatStr = new char[len1 + len2 + 1];

    strcpy(concatStr, str1);
    strcat(concatStr, str2);

    cout << "\nFirst String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;
    cout << "Concatenated String: " << concatStr << endl;

    delete[] str1;
    delete[] str2;
    delete[] concatStr;

    return 0;
}
