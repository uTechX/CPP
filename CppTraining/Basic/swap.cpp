//https://devowen.com/308?category=795410

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void SwapValue(int arg1, int arg2)
{
  int tmp = arg1;
  arg1 = arg2;
  arg2 = tmp;
}

void SwapReference(int* arg1, int* arg2)
{
  int tmp = *arg1;
  *arg1 = *arg2;
  *arg2 = tmp;
}

int main() 
{
  int num1 = 10;
  int num2 = 20;

  printf("%d, %d\n", num1, num2);   
  // Call by Value
  SwapValue(num1, num2);
  printf("%d, %d\n", num1, num2);   

  // Call by Reference
  SwapReference(&num1, &num2);
  printf("%d, %d\n", num1, num2);   

}