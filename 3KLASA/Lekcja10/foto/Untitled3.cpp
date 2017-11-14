#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string x,y,z,v,m;
int main(){
	
fstream input_an("anagram.txt", ios_base::in);
fstream output_an("zad1.txt", ios_base::out);

while(!input_an.eof()){
input_an >> x;
input_an >> y;
input_an >> z;
input_an >> v;
input_an >> m;	


if ((x.size()==y.size()) && (x.size()==z.size()) && (x.size()==y.size()) && (x.size()==v.size()) && (x.size()==m.size())){



cout << x << " ";
cout << y << " ";
cout << z << " ";
cout << v << " ";
cout << m << endl;
}

}

return 0;
}
