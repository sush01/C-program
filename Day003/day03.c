#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// function exercise

int calculateSumwithreturn();
void calculateSum();
void printSum();
void calcVolume(int, int, int, int *, int *);

void calculateArea(int, int);
float cubeArea(float, float, float);
void fetchData(float, float, float);

void tulostaarray(int[], int);
void muuttaarray(int[], int, int);

// luo funktio lasketilavuus,
// joka ottaa 3 arvoa (pituus, leveys ja korkeus)
// ja palauttaa 2 arvoa (pohjanala ja tilavuus)
void calcVolume(int x, int y, int z, int *area, int *vol)
{

  *area = x * y;
  *vol = x * y * z;
}

void tulostaarray(int myarray[], int lkm)
{
  for (int iter = 0; iter < lkm; iter++)
  {
    printf("\n%d", myarray[iter]);
  }
}

void muuttaarray(int myarray[], int index, int value)
{
  myarray[index] = value;
  printf("\n%d", myarray[index]);
}

void printSum()
{
  int a, b;
  printf("Give me two integers\n");
  scanf("%d %d", &a, &b);
  printf("Sum is %d", a + b);
}

int calculateSumwithreturn()
{
  int a, b;
  printf("Give me two integers\n");
  scanf("%d %d", &a, &b);
  return a + b;
}

void calculateSum()
{
  int a, b;
  printf("Give me two integers\n");
  scanf("%d %d", &a, &b);
  printf("Sum is %d", a + b);
}

// luo funktio laskealueenkoko(), joka ottaa 2 argumenttia.
// Laske funktiossa alueenkoko ja tulosta se funktiossa.
void calculateArea(int a, int b)
{
  printf("%d", a * b);
}

// luo funktio laskekuutio(), joka ottaa 3 float argumenttia.
// funktio palauttaa kuution koon. Tulosta pääohjelmassa kuution koko.
float cubeArea(float aa, float bb, float cc)
{
  return aa * bb * cc;
}

// luo funktio haetieto(), jolla on 3 argumenttia.
// Funktio kutsuu laskekuutiota ja tulostaa kuution koon.
void fetchData(float aa, float bb, float cc)
{
  printf("\n%f", cubeArea(aa, bb, cc));
}
/* Kuusimetsätyö
  tick-tack-toe aka ristinolla
Helpompia:
  Lotto
  Number guessing game
Helppoja:
  Kivi sakset paperia
<tee opettajan esimerkit valmiiksi>*/

int main()
{
  /*
    // calculateSum();
    // calculateArea(5,6);
    // printf("\n%.2f", cubeArea(1.45, 5.55, 5.67));
    // fetchData(4.5,5.6,2.34);

    int a, b;
    printf("Give me two integers\n");
    scanf("%d %d", &a, &b);
    printSum(a, b);
    int x = 4, y = 6, z = 9;
    int area, vol;

    calcVolume(x, y, z, &area, &vol);
    printf("Area: %d\n", area);
    printf("Volume: %d\n", vol);

    int myarray[] = {1, 2, 3, 4, 5};
    // myarray[0] = 11;
    tulostaarray(myarray, 5);
    muuttaarray(myarray, 3, 88);
  */

  srand(time(NULL));

  int number = rand() % 99 + 1;
  int guessNumber;
  int chance = 0;
  int maxChances = 10;

  printf("Welcome to number guessing game\n");

  while (chance < maxChances)
  {
    printf("\nGuess a number between 1 to 100: \n");
    scanf("%d", &guessNumber);
    chance++;

    if (guessNumber == number)
    {
      printf("Congratulations! You guessed it right in %d chances\n", chance);
      break;
    }
    else if (guessNumber < number)
    {
      printf("Sorry! You guess it too low.");
    }
    else
    {
      printf("Sorry! You guess it too high.");
    }
  }
  if (chance == maxChances)
  {
    printf("Sorry, you have run out of chances. The correct number was %d", number);
  }

  /*
    // program that print the average of 3 numbers
    int a, b, c;
    a = 45, b = 40, c = 35;

    int average = (a + b + c) / 2;

    printf("Average of %d %d %d is: %d", a, b, c, average);

    // program that checks if the input is character or digit

    char ch;
    printf("Enter Character:");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
      printf("%c is a Digit.", ch);
    }
    else
    {
      printf("%c is a Character.", ch);
    }

    // program to print the smallest number

    int a, b, c;
    a = 45, b = 40, c = 35;

    if (a < b && a < c)
    {
      printf("Smallest number among %d %d %d is : %d", a, b, c, a);
    }
    else if (b < a && b < c)
    {
      printf("Smallest number among %d %d %d is: %d", a, b, c, b);
    }
    else
    {
      printf("Smallest number among %d %d %d is: %d", a, b, c, c);
    }

    // program that swaps value
    int a = 4;
    int b = 5;
    printf("Before swap value of %d and %d\n", a, b);
    int x = a;
    a = b;
    b = x;

    printf("After swap value of %d and %d\n", a, b);
  */
  // program to find if a character entered by user is upper case or not
  // check if given number is Amstrong number
  // check if the given number is a natural number

  /*
    int lotteryNumber [7] ;
    int guessLotteryNumber[7];

    printf("\n Welcome to lottery game!");
    printf("\n Enter any 7 numbers ranging from 1 to 50:");
    //
    scanf("\n %d", &lotteryNumber);

    for (int i = 0; i <= 7; i++)
    {
      scanf("%d",&guessLotteryNumber[i]);
    }

    for (int i = 0; i <= 7; i++)
    {
      lotteryNumber = (rand() % 49 + 1);
      printf("\n%d", lotteryNumber);
    }

  */

  return 0;
}
