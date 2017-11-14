#include <fstream>
using namespace std;

int main() 
{
  ofstream zapis("wyjscie.txt"); 
  zapis << 3 << " " << -20;
  zapis.close();
  
  ofstream zapis2;
  zapis2.open("wyjscie2.txt");
  zapis2 << 3 << " " << -20;
  zapis2.close();
 
  return 0;
} 
