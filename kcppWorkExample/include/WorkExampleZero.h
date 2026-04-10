/* Author: Arkadiusz Bubak
mail: arkadiusz@buabk.pl
date: 2026.03.20, v0.01
*/

#ifndef WorlExampleZero_H
#define WorlExampleZero_H 1

class WorkExampleZero {
public:
  /** Default constructor **/
  WorkExampleZero();

  /** Default destructor **/
  ~WorkExampleZero();

  /** Modifiers **/
  void SetValue(int y) { x = y; };

  /** Accesors **/
  int GetValue() { return x; };
  
  void Print();

  void WorkExampleA();
  void WorkExampleB();

private:
  int x;
};

#endif
