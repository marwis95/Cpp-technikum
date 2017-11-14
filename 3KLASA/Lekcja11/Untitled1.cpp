#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool porownaj(int a[], int b[]){
int k;
bool ok=true;
for (k=0; k<=9; k++){
	if (a[k] != b[k]) ok=false;
	}
return ok;	
}

int main(){
string n,m;
int i,j;
int tab_a[10], tab_b[10];


fstream in("dane.txt", ios_base::in);
fstream out("out.txt", ios_base::out);
	
while(!in.eof()){	
in >> n;
in >> m;

for(i=0; i<=9; i++){
tab_a[i]=0;
tab_b[i]=0;	
}

if ((n.length()==m.length())) {
for(i=0; i<n.length(); i++){
tab_a[(int)n[i]-48]++	;
tab_b[(int)m[i]-48]++	;	
}


	
}


if ((n.length()==m.length()) && porownaj(tab_a,tab_b)==true) {
	out << n << "     ";
	out << m << endl;
	}
}


return 0;
}
