#include <stdio.h>
#include <stdlib.h>
#include <_ctype.h>

int laskepintaala(int, int);
int laskejotainmuuta(int, int);

int laskejotainmuuta(int pituus, int kerroin)
{
  return pituus * kerroin;
}

int laskepintaala(int pituus, int leveys)
{
  return pituus * leveys;
}

int main()
{

  // Osoitinmuuttujatehtävä 1
  // luo float tyyppinen muuttuja ja osoitinmuuttuja,
  // jolle annat muuttujan arvoksi
  // ilmoita muuttujien sijainti muistissa
  // ilmoita muuttujien arvot
  // hae osoitinmuuttujan sisältämän muuttujan arvo

  /*
   float myVaraible = 4.56;
   printf("%x\n",&myVaraible);    // varaibale address

   float *mypointerVaraible;
   mypointerVaraible = &myVaraible;
   printf("%x\n",mypointerVaraible);  //pointer address

   printf("%f\n",myVaraible);
   printf("%f\n",*mypointerVaraible);

    // Pointer variable assignment 1
    // create a float type variable and a pointer variable,
    // to which you give the variable value
    // declare the location of the variables in memory
    // declare variable values
    // get the value of the variable contained in the pointer variable

  int myArray[5] = { 11,22,33,44,55};
  printf("\n%x", &myArray);
  printf("\n%p", &myArray[0]);
  printf("\n%p", &myArray[1]);
  printf("\n%p", &myArray[2]);
  printf("\n%p", &myArray[3]);
  printf("\n%p", &myArray[4]);


  int* myPointerToArray = myArray;
  for (int i = 0; i < 5; i++){
    printf("\n %d", *myPointerToArray);
    myPointerToArray++;

  }
  myPointerToArray--;
  for (int i = 5; i > 0 ; i--){
    printf("\n %d", *myPointerToArray);
    myPointerToArray--;

  }

  int* myPointerToArrayElement = &myArray[4];
   printf("\n%d",*myPointerToArrayElement);  //55
  myPointerToArrayElement--;
   printf("\n%d",*myPointerToArrayElement);   //44

  int(*mypointerArray)[5];
  mypointerArray = &myArray;
  printf("\n%p %d", mypointerArray[0], (*mypointerArray)[0]);
  printf("\n%p %d", mypointerArray[1], (*mypointerArray)[1]);
  printf("\n%p %d", mypointerArray[2], (*mypointerArray)[2]);
  printf("\n%p %d", mypointerArray[3], (*mypointerArray)[3]);
  printf("\n%p %d", mypointerArray[4], (*mypointerArray)[4]);

  int (*functionpointer)(int, int) = &laskepintaala;

  printf("\n %d", functionpointer(4, 5));

  functionpointer = &laskejotainmuuta;
  printf("\n %d", functionpointer(4, 5));

  // null pointer
  int muttuja = 1234;
  int *mypointer = NULL;

  printf("\n %x", &mypointer);

  if (mypointer == NULL)
  {
    printf("\n Olet NULL");
  }

  mypointer = &muttuja;
  if (mypointer == NULL)
  {
    printf("\n Olet NULL");
  } else printf("\n %x", mypointer);


  int a = 1025;
  int *p;
  p = &a;
  printf("Size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  // pointer airthmetic
  printf("Address = %d, value = %d\n", p + 1, *(p + 1));

  char *p0;
  p0 = (char *)p; // typecasting
  printf("Size of char is %d bytes\n", sizeof(char));
  printf("Address = %d, value = %d\n", p0, *p0);
  printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));

  // void pointer
  void *p1;
  p1 = p;
  printf("Address = %d", p1);
  printf("Address = %d", p1 + 1);
*/
  // Pointer to Pointer
  int x = 5;
  int *p = &x;
  *p = 6;
  int **q = &p;
  int ***r = &q;

  printf("%d\n", *p);
  printf("%d\n", *q);
  printf("%d\n", **q);
  printf("%d\n", **r);
  printf("%d\n", ***r);
  ***r = 10;
  printf("x = %d\n", x);
  **q = *p + 2;
  printf("x = %d\n", x);

  int muuttuja = 123;
  // 1.osoitinmuuttuja
  int *osoitinmuuttuja1 = NULL;

  osoitinmuuttuja1 = &muuttuja;
  printf("\n %x %d", osoitinmuuttuja1, *osoitinmuuttuja1);
  printf("\n %x %x %d" ,&osoitinmuuttuja1, osoitinmuuttuja1,*osoitinmuuttuja1); // deference

  // 2.osoitinmuuttuja
  int **osoitinmuuttuja2 = NULL;

  osoitinmuuttuja2 = &osoitinmuuttuja1;
  printf("\n%x %x %d ", osoitinmuuttuja2,*osoitinmuuttuja2, **osoitinmuuttuja2);

// 3.osoitinmuuttuja
  int ***osoitinmuuttuja3 = NULL;

  osoitinmuuttuja3 = &osoitinmuuttuja2;
  printf("\n%x %x %d ", osoitinmuuttuja3,**osoitinmuuttuja3, ***osoitinmuuttuja3);


  return 0;
}