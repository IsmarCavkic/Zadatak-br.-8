#include <iostream>
using namespace std;

// Pronaći najmanji broj od 3 unešena broja!

int main() {
  int a,b,c;

  cout<<"Unesite 3 cijela broja:"<<endl;
  cin>> a >> b >> c;

  if (a<b && a<c)
   cout<< "Najmanji broj je "<< a;
  else if (b<a && b<c)
   cout<<"Najmanji broj je "<< b;
  else if (c<a && c<b)
   cout<<"Najmanji broj je "<< c;
  else
   cout<<"Brojevi su jednaki!";

  return 0;

}