#include <windows.h>
#include <iostream>
using namespace std;

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
    if (MessageBox( NULL, "To jest wiadomoœæ.", "Wiadomoœæ", MB_ICONQUESTION | MB_YESNO )==IDYES) cout<<"yes"; else cout<<"no";

}
