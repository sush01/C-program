#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

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

  // int a = 9, b = 5;
  // printf("\nmodule:%d", a%b);

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


  //Switch
  int variable = 9;
  switch (variable){
    case 1: printf("Eka");
    break;
    case 2: printf("Toka ");
    break;
    case 3: printf(" kolmas");
    break;
    case 4: printf(" 4...10");
    break;
    default:
    printf("joku muu");
    break;

  }

// Task 06:
  // Vaatteiden valinta
  // Anna lämpötila fahrenheitteina (int)
  // muuta se Celsiusasteiksi (float)
  // määritä (boolean) sataa/ei sada
  // jos lämpöä on:
  // yli 25-30 astetta
  //  kesähattu ja aurinkolasit
  // paitsi jos sataa, niin ei aurinkolaseja
  // 20-25 astetta:
  //  kesävaatteet
  // 10-20 astetta:
  // joko sadevaatteet tai kesävaatteet
  // 0- 10 astetta:
  // lämpimät vaatteet
  // muuten ei osata neuvoa.

  int fahrenheit = 0;
  float Celsius = 0;
  int asteet = 0;
  bool sade = true;

  char asia;
  scanf("");

  Celsius = fahrenheit;
  printf(" lampotilaCelsius %d");

  printf("Anna Lämpötila fahrenheitteina:\n");
  scanf("%d", &fahrenheit);
  Celsius = (fahrenheit - 32) / 1.8;
  prinf(" ")
      // printf(" Celsius is %f:\n", Celsiusasteiksi);

  printf("Sataako ");
  printf("Sataako (1=kyllä, 0=ei): ");
  scanf("%d", &sade);

  printf(" Saatako vettä:");
  scanf("%c", &saatako);
  if (sataako == true)
    switch (lampotilaCelsius)
    {
    case 25....30:
      printf(" ");
    }

  printf(" Asteet Ceslcius asteina:%d astetta\n", lampotilaCelsius);
  printf(" Satako:%d\n", saatako);

  switch (lampotilaCelsius)
  {
  case 25...30:
    printf(" kes") if (saatako == true)
        printf("");
  }
  else printf("kesähattu ja aurinkolasit");


  int fahrenheit = 0;
  float celsius = 0;
  int asteet = 0;
  bool sataa = false;

  char asia;
  scanf("%c", &asia);
  printf("%c", asia);
  if (asia == 'k')
  {
    sataa = true;
  }
  else
  {
    sataa = false;
  }

  celsius = (fahrenheit - 32) / 1.8;
  asteet = celsius;
  printf("\nasteet: %d celsius: %f fahrenheit: %d\n", asteet, celsius, fahrenheit);

  switch (asteet)
  {
  case 25 ... 30:
    printf("Kesähattu %s", sataa ? "" : " ja aurinkolasit");
    break;
  case 20 ... 24:
    printf("Kesävaatteet");
    break;
  case 10 ... 19:
    printf("%s", sataa ? "Sadevaatteet" : "Kesävaatteet");
    break;
  case 0 ... 9:
    printf("Lämpimät vaatteet");
    break;
  default:
    printf("Hae apua viisaammalta");
    break;
  }



int iter= 1;
while (iter < 5){
printf(" %d\n", ++iter);
//iter++;
}

// Task 07:
// Iterate rocket launch as
//      5
//      4
//      3
//      2
//      1
//      BOOM!
// use do - while
// then use while

int launch = 5;
while (launch > 0){
  printf("\n%d",launch);
  launch--;
};
printf("\nBOOM\n");

int launc= 5;
do {
  printf("\n%d", launc);
  launc--;
} while (launc >0);{
  printf("\nBOOM!\n");

}


  for (int a = 5; a > 0; a--)
  {
    printf("\n%d", a);
  }
  printf("\nBOOM!\n");

  for (int a = 1; a < 6; a++)
  {
    printf("\n%d", a);
  }
  printf("\nBOOM!\n");

  int countDown = 5;
  //do-while loop
  printf("Do while:\n");
  do
  {
    printf("%d\n", countDown);
    //sleep(1);
    countDown--;
  } while (0 < countDown);
  printf("BOOM!\n");

  //resetting the coutdown
   countDown = 5;

   //while loop
  printf("While:\n");
  while (0 < countDown)
  {
    printf("%d\n", countDown);
    //sleep(1);
    countDown--;
  }
  printf("BOOM!\n");


int aa= 123;
float bb= 444.900;
printf("%d %f\n",aa,aa);
printf("%d %f\n",bb,bb);
aa = bb;

//bb = aa;

printf("%d %f\n", aa, aa);
printf("%d %f\n",bb,bb);

// kotitehtävä
// ===========
// char nimi[10] = 'robin hood';
// tee char array ja tulosta se väärinpäin eli 
// robin hood on dooh nidor

char nimi[10]= "Robin hood";


//string length
int len = strlen(nimi);

//for loop 
for (int i = 0, j = len-1; i <= j; i++, j--){
  // swapping characters 
  char c = nimi[i];
  nimi [i] = nimi[j];
  nimi[j] = c;
}
printf("Väärinpäin Robin Hood on:%s\n", nimi);
*/
// Lisätehtävä:
// tee for looppi, joka käy läpi char arrayn
// "clever brown fox jumped over lazy dog"
// laske kontako 'a', 'e' 'i' 'o' 'u' kirjainta siinä on

 char lause []= "clever brown fox jumped over lazy dog";
 int c = 0, count = 0;
 //int len = strnlen(lause);
 int kontako = 0;
 
 while (lause[count]!= '\0')
 {  
    c = lause[count];
    if (c == 'a'|| c == 'A' || c == 'e'|| c == 'E'||c == 'i'
    || c == 'I'|| c == 'o'|| c == 'O' || c == 'u'|| c == 'U'){
      kontako++;
    }
    count++;
 }
 printf("Kontako määrä on:%d\n", kontako);


char nimi [10] = "robin hood";
for (int i = 10; i >= 0; i --){
  printf("%c", nimi[i]);
}


int a = 0, e= 0, i = 0, o = 0, u = 0;
char text [37] = "";
for (int iter = 0; iter < 37; iter++){
  if (text[iter] == 'a') {a++;} 
  if (text[iter] == 'a') {a++;}
   if (text[iter] == 'a') {a++;}
    if (text[iter] == 'a') {a++;}
     if (text[iter] == 'a') {a++;}

}
/*
Piirrä joulukuusi, jonka korkeus on X ja varsi Y. 
Kun saat ohjelman toimimaan, tee versio, joka kysyy X ja Y arvot.
   *
  ***
 *****
*******
   *
   *
*/
int korkeus = 0;


printf("Anna Korkeus:\n");
scanf("%d", &korkeus);

for (int i = 1; i<=korkeus; i++){
  int tahtiMäärä = (i*2)-1;
  int tilaMärää = korkeus - i;
  
  for (int j = 0; j < tilaMärää; j++)
  printf(" ");

  for (int j = 0; j < tahtiMäärä; j++)
  printf("*");
  printf("\n");
}

for (int i = 0; i < 2; i++){
  for (int j = 0; j < korkeus; j++)
  printf(" ");
  printf("*\n");
}

/*
int height = 6;
int base = 4;
int count = 4;

printf("\n");
for (int iter = 0; iter < count; iter++){
  for
}
*/
 return 0;
}