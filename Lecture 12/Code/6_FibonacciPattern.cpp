#include<iostream>
using namespace std;

/*
0
1 1
2 3 5
8 13 21 34
*/

int main () {
    int n;
    cin >> n;
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a << ' ';
            int c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}