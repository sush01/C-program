#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

void checkWin(int);

void checkWin(int count)
{
  switch (count)
  {
  case 1:
    printf("Only one match, Better luck next time\n");
    break;
  case 2:
    printf("Only two matches, Better luck next time\n");
    break;
  case 3:
    printf("Three matches, You won 100 €\n");
    break;
  case 4:
    printf("Four matches, You won 500€\n");
    break;
  case 5:
    printf("Five matches, You won 10000€\n");
    break;
  case 6:
    printf("Six matches, Congratulations! You won jackpot\n");
    break;
  default:
    printf("No matches,You lose! Better luck next time :( \n");
  }
}
// Main function
int main()
{

  srand(time(NULL));
  int length = 6;
  int lotteryNumber[length];
  int guessLotteryNumber[length];

  int common[length];
  int x, y, count = 0;

  printf("Enter %d elements for your lottery number ranging 0 to 50:\n", length);
  // user input lottery number

  for (int i = 0; i < length; i++)
  {
    do
    {
      scanf("%d", &guessLotteryNumber[i]);
      // Check if the entered number is greater than 50

      if (guessLotteryNumber[i] > 50)
      {
        printf("Invalid input! Please enter a number less than or equal to 50 \n");
      }
    } while (guessLotteryNumber[i] > 50);
  }

  // randomly generated lottery number
  for (int j = 0; j < length; j++)
  {
    lotteryNumber[j] = rand() % 50;
  }
  printf("\n");

  // comparing user input lottery number and randomly generated lottery number
  for (x = 0; x < length; x++)
  {
    for (y = 0; y < length; y++)
      if (lotteryNumber[x] == guessLotteryNumber[y])
      {
        common[count] = guessLotteryNumber[y];
        count++;
      }
  }

  // checking number of elements matched
  printf("\nTotal number of matching numbers: %d\n", count);
  printf("Matching Numbers:");
  for (int a = 0; a < count; a++)
  {
    printf("%d", common[a]);
    if (a < count - 1)
    {
      printf(" ");
    }
  }

  printf("\n");

  // checks win
  checkWin(count);

  // printing the generated lottery number
  printf("Lottery Number was:\n");
  for (int k = 0; k < length; k++)
  {
    printf("%d ", lotteryNumber[k]);
  }
  printf("\n");
  return 0;
}
