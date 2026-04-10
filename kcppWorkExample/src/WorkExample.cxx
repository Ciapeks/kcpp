/* Author: Arkadiusz Bubak
   mail: arkadiusz@bubak.pl
   date: 2008.02.22
 */

#include "WorkExampleZero.h"
#include <iostream>
using namespace std;

int main() {

  cout << "\n-----------------  WorkExampleZero -------------------------------"
       << endl;

  WorkExampleZero *myValue = new WorkExampleZero();
  myValue->SetValue(15);
  myValue->Print();

  cout << "Value:     " << myValue->GetValue() << endl;

  cout << "\n------------------ WorkExampleZeroA -------------------------------"
       << endl;


  myValue->WorkExampleA();
  
  cout << "\n------------------ WorkExampleZeroB -------------------------------"
       << endl;

  myValue->WorkExampleB();

  cout << "\n------------------ ZadEnumExample -------------------------------"
       << endl;
}
