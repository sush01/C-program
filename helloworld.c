#include <stdio.h>
#include <string.h>

// extern int num = 78; // can be used in other files in same folder.

int main()
{
  /*     This is traditional multi-line commenting     */
  // Lately there has been support to C++ type commenting
  // int age = 32;
  // char *name = "Sushila Kandel";
  // double gpa = 3.6;
  // char grade = 'B'; // stores only one character
  // char phrase[] = "Hello World";

  printf("\n Iltapäivän Tehtävä\n");
  int age = 0;
  char name[10] = "";
  float accountBalance = 0.0;

  printf("Name:\n");
  scanf("%s", &name);

  printf("Age:\n");
  scanf("%d", &age);

  printf("Account Balance:\n");
  scanf("%f", &accountBalance);

  printf("\n I am %s and I am  %d years old.\n", name, age);
  printf("50 years later I will be %d years old.\n", age + 50);
  printf("I have %.2f euros in my account.\n", accountBalance);

  /*
    // task 1 day01
    int value = 0;
    printf("Please enter the value?\n");
    scanf("%d", &value);
    printf("\n The sqare of your value is %d \n", value * value);

    // printf is a statement.
    // It is used to print data to console
    // printf("Hello world!\n");
    // printf("Mina olen %s ", name);
    // printf("Mina olen %d years old.\n", age);

    // This is a return value statement

    printf("\n Task 2");
    int length = 0;
    int width = 0;

    printf("\n Tell me the length:\n");
    scanf("%d", &length);
    printf("Tell me the width:\n");
    scanf("%d", &width);
    printf("\n The square of %d and %d is %d: ", length, width, length * width);

    printf("\n Task 3\n");
    int age = 0;
    char name[10] = " ";
    printf("Name:\n");
    scanf("%s", &name);

    printf("Age:\n");
    scanf("%d", &age);

    printf("\n I am %s and my age is %d \n", name, age);

    printf("\n Task 4\n");
    float q = 0.23;
    float Q = 4.56;
    printf("\n Sum is %0.1f \n", q + Q);

    printf("\n Task 5\n");
    int age = 0;
    char name[10] = " ";*/

  return 0;
}
