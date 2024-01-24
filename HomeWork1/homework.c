#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
/*
  srand(time(NULL));

  int number = rand()% 99 +1;
  int guessNumber;
  int attempts= 0;
  int maxAttempts = 10;


  printf("Welcome to number guessing game\n");

  while (attempts < maxAttempts){
  printf("\nGuess a number between 1 to 100: \n");
  scanf("%d",&guessNumber);
  attempts++;

  if (guessNumber == number){
    printf("Congratulations! You guessed it right in %d attempts\n",attempts);
    break;
  }else if (guessNumber < number){
    printf("Sorry! You guess it too low.");
  }else{
    printf("Sorry! You guess it too high.");

  }
  }
 if (attempts == maxAttempts){
  printf( "Sorry, you´ve run out of attempts. The correct number was %d",number);
 }

// program that print the average of 3 numbers
  int a,b,c;
  a = 45, b = 40, c = 35;

  int average = (a+b+c)/2;

  printf("Average of %d %d %d is: %d", a,b,c,average);
  

 //program that checks if the input is character or digit

 char ch;
 printf("Enter Character:");
 scanf("%c",&ch);
 if (ch >= '0' && ch <= '9'){
  printf("%c is a Digit.", ch);
 } else {
  printf("%c is a Character.",ch);

 }
 

//program to print the smallest number

  int a,b,c;
  a = 45, b = 40, c = 35;

  if ( a < b && a < c){
    printf("Smallest number among %d %d %d is : %d", a,b,c,a);
  }else if (b < a && b <c){
    printf("Smallest number among %d %d %d is: %d",a,b,c,b);
  }else{
    printf("Smallest number among %d %d %d is: %d", a,b,c,c);
  }

 // program that swaps value
  int a = 4;
  int b = 5;
   printf("Before swap value of %d and %d\n", a,b);
    int x = a;
    a = b;
    b = x;

    printf("After swap value of %d and %d\n", a,b);
*/
  
// program to find if a character entered by user is upper case or not 
// check if given number is Amstrong number
// check if the given number is a natural number


//Kivi sakset paperia 
int yourGuess;
srand(time(NULL));

printf("Welcome to Rock, Paper, Scissors!\n");
printf(" Enter your choice (1 for Rock , 2 for Paper, 3 for Scissors:\n)");
scanf("%d", &yourGuess);

 int answer =rand() % 4;

 switch( yourGuess){
  case 1: 
  printf("You guessed Rock.\n");
  break;
  case 2: 
  printf("You guessed Paper.\n");
  break;
  case 3: 
  printf("You guessed Scissor.\n");
  break;
  default :
   printf("Invalid guess\n");
   }

   switch(answer){
  case 1: 
  printf("Answer is Rock.\n");
  break;
  case 2: 
  printf("Answer is Paper.\n");
  break;
  case 3: 
  printf("Answer is Scissor.\n");
  break;

   }

   if (yourGuess == answer){
    printf("It´s a tie!\n");

   }else if ((yourGuess== 1 && answer == 3) ||
               (yourGuess == 2 && answer == 1) ||
               ( yourGuess== 3 && answer == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }



char charArray [4]= {'a', 'b' ,'c', 'd'};
printf("\n%x", &charArray);
printf("\n%p", &charArray[0]);
printf("\n%p", &charArray[1]);
printf("\n%p", &charArray[2]);
printf("\n%p", &charArray[3]);

int *mypointerArray = charArray;
for (int i =0 ; i < 4; i++){
  printf("\n %d", *mypointerArray);
  mypointerArray++;
}

   return 0;




}