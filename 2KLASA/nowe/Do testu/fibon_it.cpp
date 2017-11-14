#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int fibonacci(int n) {
    int a, b;
    if(n == 0) return 0;
 
    a = 0; b = 1;
    for(int i=0; i<(n-1); i++) {
        b += a;
        a = b-a;
    }
    return b;
}
int main () {
        int a;
        cout << "ktory wyraz ciagu wygenerowac: " << endl;
        cin >> a;
        cout << fibonacci(a);
}
