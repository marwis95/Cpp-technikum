#include <iostream>
using namespace std;

int a=7, b=3, w=1;

int main(){
w+=(a++)+(b++);
cout << w << " " << a;

return 0;
}
