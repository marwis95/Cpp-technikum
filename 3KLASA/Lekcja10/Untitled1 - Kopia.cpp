#include <iostream>
#include <fstream>
#include <string>

using namespace std;




string n;
int rot;

using namespace std;

int main() {


fstream in("slowa1.txt", ios_base::in);
fstream outb("out_b.txt", ios_base::out);


//if (outb.good()) cout << "Zapisano";


while(!in.eof())
    {
         in >> n;
         cout << n << endl;
         outb << n<< endl;  //d³ugoœæ 3
    }


return 0;
}
