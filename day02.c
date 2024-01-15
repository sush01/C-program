#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
  // Ternary operations
  // (expression_compare)
  /*bool rainfall = false;

  (rainfall == true) ? (printf("It is raining!")) : (printf("No rain !"));

  int a = 11, b = 5;
  rainfall = (a > b) ? (true) : (false);
  printf("\n Rainfall is %d, rainfall");

  // Task 01:
  // Ask user's age
  // if age is 18+, print out "You are adult"
  // otherwise print out "You are minor"

  int age = 0;
  printf("Tell me your age:\n");
  scanf("%d", &age);
  printf("You are %s", (age >= 18) ? "adult" : "minor");

  // (age >= 18) ? (printf("Your are  Adult\n")) : (printf("Your are minor"));

  // bitwise operations



  int a = 10, b = 5;
  if (a >= b)
  {
    printf("\n a > b");
  }
  else
  {
    printf("\n a < b");
  }*/

// modulo

//int a = 9, b = 5;
//printf("\nmodule:%d", a%b);

  // Task 03:
  // Ask a number from user.
  // explain if it is an even or odd number.


/*
  int number = 0;
  printf("Give me a number:\n");
  scanf("%d", &number);

 if (number % 2)
  {
    (printf("\n It is odd number."));
  }
  else
  {
    (printf("\n It is even number"));
  }
  (number % 2) ? (printf("\nIt is odd number")):
  (printf("It is even number\n"));

// Task 04:
// input 3 numbers
// inform the largest number

int a, b, c ;
printf(" Give me three numbers:\n");
scanf("%d %d %d", &a,&b,&c);

if (a>=b){
  if(a>=c){
    printf("A is largest. \n");
} else {
  printf(" C is largest.\n");
}
} else if (b >= c){
  printf("B is largest");
} else {
  printf("C is largest");
}
*/
// Task 05:
// && AND , || OR , ! NOT  

int number;
printf(" Give me a number from 1 to 10:\n");
scanf("%d", &number);

if (number == 10 ){
  printf("\n Excellent");
} else if (number == 9 || number == 8 ){
  printf("\n Good");
} else if ( number == 7 || number == 6){
  printf("\n Passable");
} else {
  printf("\n Low");
}
  

  return 0;
}