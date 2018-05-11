#include <stdio.h>
#include <stdlib.h>

void swap(int *num, int *num2);
int *getNumber();
void multiplyNumber(int *number, int multiplier);

int main(void)
{
  int someNumber = 5;
  int *intPointer = &someNumber;
  multiplyNumber(intPointer, 10);
  printf("value at intPointr address: %i\n", *intPointer); // should be 50
  return 0;
}

void swap(int *num, int *num2)
{
  int temp = *num;

  *num = *num2;
  *num2 = temp;

  return;
}

void multiplyNumber(int *number, int multiplier)
{
  *number *= multiplier;
}

int *getNumber()
{
  int num = 5; //wiped from memory as soon as function executes
  int *pointer = &num;

  printf("address of pointer: %p\n", pointer);
  printf("value at pointer address: %d\n", *pointer);
  return pointer;
}
