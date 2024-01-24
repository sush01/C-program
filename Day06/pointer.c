#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
/*
int SumOfElements(int *a, int size)
{
  int i, sum = 0;
  printf("SOE - Size of a = %d size of a[0]= %d \n", sizeof(a), sizeof((a[0])));
  for (int i = 0; i < size; i++)
  {
    sum += A[i];
  }
  return sum;
}*/

#define ARRAYSIZE 5
int main()
{

  int a[5] = {1, 2, 3, 4, 5};
  int *pointer[5];
  /*int size = sizeof(a)/sizeof(a[0]);
  int total = SumOfElements(a, size);  // a can be used for &a

  printf("Sum of elements = %d\n", total);
  printf("Main -size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
  */

  for (int i = 0; i < 5; i++)
  {
    pointer[i] = &a[i];
  }
  printf("\n%d", *pointer[3]);



   
    int myArray[ARRAYSIZE] = { 11,22,33,44,55 };
    int* pointervariableB = myArray;
    pointervariableB += 2;
    *pointervariableB = 99999;
    pointervariableB -= 2;
 
    for (int i=0; i < ARRAYSIZE; i++) {
        printf("\n%d",*pointervariableB);
        pointervariableB++;        
    }
    pointervariableB -= ARRAYSIZE;        
 
    printf("\n%p",pointervariableB);
    for (int i=0; i < ARRAYSIZE; i++) {
        printf("\n%d",*(pointervariableB+i));        
    }
    printf("\n%p",pointervariableB);
    printf("\n%d",*(pointervariableB+3));        


  int* mypointerE = (int*) malloc( 5* sizeof(int));
    *mypointerE = 111;
    *(mypointerE+1) = 222;
    *(mypointerE+2) = 333;
    *(mypointerE+3) = 444;
    // HUOM! Viimeinen muistipaikka on roskaa, koska luotu mallocilla.
 
    for (int i=0; i < 5; i++) {
        printf("\n%d", *(mypointerE+i));
    }

char* result = (char*)(malloc(sizeof(char) * 10));
    // täyttää varatun alueen \0 merkeillä
    // eli nyt jokainen annettu "merkkijono" on laillinen
    // kunhan loppuun jää ainakin yksi \0 merkki.
    memset(result, 0, 10);
   
    printf("Addr of result var : %p \n", result);
    printf("result : %s \n", result);
    strcpy(result,"kukka"); // käytä tätä asettaaksesi arvon
    *result = 'Q';
    *(result+5) = '!';
    printf("result : %s \n", result); // Qukka!
 
    free(result);
 

 

  return 0;




}