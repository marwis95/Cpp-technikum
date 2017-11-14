#include <iostream>

using namespace std;

int NWD(int a,int b)
{
    int x;

    while(b)
    {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int main()
{
    int a,b;

    cin >> a >> b;

    cout << NWD(a,b) << endl;

    return 0;
} 
