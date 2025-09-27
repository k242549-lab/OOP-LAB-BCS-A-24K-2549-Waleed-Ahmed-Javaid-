#include<iostream>
using namespace std;
void Primenumbers(int a,int b){
    for (int n = a; n < b; n++) {
        int c = 0;
        
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                c++; 
                break;
            }
        }
        if (c == 0 && n > 1) {
            cout << n << " is prime" << endl;
        } else {
            cout << n << " is not prime" << endl;
        }
    }
    

}
int main() {
    int a, b;
    cout << "Enter starting of range = ";
    cin >> a;
    cout << endl;
    cout << "Enter ending of range = ";
    cin >> b;
    Primenumbers(a,b);
    return 0;
}
