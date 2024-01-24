#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// Main function
int main()
{

  srand(time(NULL));
  int lotteryNumber[7];
  int guessLotteryNumber[7];
  int length = 7;
  int common[7];
  bool repeating = false;
  int x, y, count = 0;

  printf("\n Welcome to lottery game!");

  printf("\n Enter any 7 numbers ranging from 1 to 50:");
  scanf("/n %d", guessLotteryNumber);

  for (int iter0 = 0; iter0 <= length; iter0++)
  {
    repeating = false;
    for (int iter1 = 0; iter1 < length; iter1++)
    {
      if (lotteryNumber[iter0] == lotteryNumber[iter1] && iter0 & iter1)
      {
        repeating = true;
        break;
      }
    }
    scanf("%d", &guessLotteryNumber[iter0]);
  }
printf(" You Enter: %d", guessLotteryNumber[]);
  for (int i = 0; i <= 6; i++)
  {
    repeating = false;
    for (int j = 0; j < length; j++)
    {
      if (lotteryNumber[i] == lotteryNumber[j] && i & j)
      {
        repeating = true;
        break;
      }
    }
    lotteryNumber[i] = (rand() % 49) + 1;
    // printf("\n%d", lotteryNumber[i]);
  }

  for (x = 0; x < length; x++)
  {
    for (y = 0; y < length; y++)
      if (lotteryNumber[x] == guessLotteryNumber[y])
      {
        common[count] = guessLotteryNumber[y];
        count++;
      }
  }

  printf("\nTotal number of match elements: %d", count);
  for (int a = 0; a < count; count++)
  {
    printf("%d", common[a]);
  }

  printf("\n");
  return 0;
}
