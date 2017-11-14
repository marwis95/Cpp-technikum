#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string zdanie;
    int i;
    cout << "podaj zdanie" << endl;
    cin >> zdanie;
    
    for (i=0; i<zdanie.length(); i++)
    if (zdanie[i]>96 && zdanie[i]<123)
    zdanie[i]=zdanie[i]-32;
    cout << zdanie << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
