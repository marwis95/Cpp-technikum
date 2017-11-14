#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

int hmlines(ifstream &a){
int i=0;
string line;
while (getline(a,line)){
cout << line << endl;
i++;

}
return i;

}


int hmwords(ifstream &a){

int i=0;
char c;
while ((c=a.get()) && (c!=EOF)){
if(c==' '){
i++;
}

}

return i;


}








int main()
{
int l=0;
int w=0;
string filename;
ifstream matos;
start:
cout << "give me the name of the file i wish to count lines, words and chars: ";
cin >> filename;
matos.open(filename.c_str());
if (matos.fail()){
goto start;
}
l = hmlines(matos);
matos.seekg(0, ios::beg);
w = hmwords(matos);
/*c = hmchars(matos);*/
cout << "The # of lines are :" << l << ". The # of words are : " << w ;

matos.close();



}
