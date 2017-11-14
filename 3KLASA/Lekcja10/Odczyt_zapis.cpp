#include <fstream>
#include <iostream>
#include <string>
using namespace std;
	
string n;	
	
int main(){
fstream in("input.txt", ios_base::in);
fstream out("output.txt", ios_base::out);

while(!in.eof()){
in >> n;
cout << n << endl;
out << n << endl;
}
	
	
	
	
return 0;
}
