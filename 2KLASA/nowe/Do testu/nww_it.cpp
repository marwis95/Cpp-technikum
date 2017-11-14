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
    int a,b,nww;

    cin >> a >> b;

    nww = a * b / NWD(a,b);

    cout << nww << endl;

    return 0;
} 
