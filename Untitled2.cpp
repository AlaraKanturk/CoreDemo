#include <iostream>
#include <iomanip>

using namespace std;

class Rational {
private:
   int numer;
   int denom;
public:
   //Rational( ) { numer=0; denom=1; }
   // Rational(int num) {numer=num; denom=1;}
   Rational(int num=0, int den= 1) {
      if(den==0) throw(0);
      numer=num; 
      denom= den;
   }
   void Print( ) { cout<<"("<<numer<<"/"<<denom<<")";}
};

int main() {
    try {
      Rational R1, R2(2), R3(1,0);

      cout<<"R1:"; R1.Print( ); cout<<endl;
      cout<<"R2:"; R2.Print( ); cout<<endl;
      cout<<"R3:"; R3.Print( ); cout<<endl;

    } catch(...) { cout <<"got you :) "<<endl;}

    return 0;
}
