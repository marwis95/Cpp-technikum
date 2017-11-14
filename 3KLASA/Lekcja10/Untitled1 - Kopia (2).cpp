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
fstream outc("out_c.txt", ios_base::out);
fstream outd("out_d.txt", ios_base::out);
fstream outf("out_f.txt", ios_base::out);
fstream outg("out_g.txt", ios_base::out);
fstream outh("out_h.txt", ios_base::out);

//if (outb.good()) cout << "Zapisano";


while(!in.eof())
    {
         in >> n;
         cout << n << endl;
         if (n.size()==3) outb << n<< endl;  //d³ugoœæ 3

    }


return 0;
}
