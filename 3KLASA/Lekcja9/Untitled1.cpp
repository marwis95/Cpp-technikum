#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
ifstream in ("Zadanie/slowa1.txt");

string temp;

while(!in.eof()){
in >> temp;
//cout << temp << endl;

if(temp.size()==3) cout << temp << endl;

}
	
	return 0;
}
