#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

struct CarDetails
{
  char *model;
  int index;
  struct Cars *carType;
};

struct Cars
{
  char *carName;
  int index;
  int numbers;
  struct ShowRoom *store;
  struct CarDetails *carSpec;
  int noOfSpec;
};

struct ShowRoom
{
  char *name;
  int numberOfCars;
  struct Cars *carsinShowroom;
  void (*Tellname)(struct ShowRoom *);
};

void ShowroomName(struct ShowRoom *);

void ShowroomName(struct ShowRoom *companyName)
{
  printf("\nWelcome to %s Kauppa!", companyName->name);
}

struct ShowRoom createShowroom(char *);

struct ShowRoom createShowroom(char *name)
{
  struct ShowRoom tempShowroom;
  tempShowroom.numberOfCars = 0;
  tempShowroom.carsinShowroom = NULL;
  tempShowroom.name = malloc(strlen(name) + 1);
  strcpy(tempShowroom.name, name);
  return tempShowroom;
}

int insertCar(struct ShowRoom *, struct Cars, char *, int);

int insertCar(struct ShowRoom *storeRoom, struct Cars cars, char *carName, int numbers)
{

  cars.store = storeRoom;
  cars.carName = malloc(strlen(carName));
  strcpy(cars.carName, carName);
  cars.numbers = numbers;
  cars.noOfSpec = 0;

  storeRoom->numberOfCars += 1;

  // if this is first car , malloc
  // or relloc and extend it with +1
  storeRoom->carsinShowroom = (storeRoom->numberOfCars == 1)
                                  ? malloc(storeRoom->numberOfCars * sizeof(storeRoom))
                                  : realloc(storeRoom->carsinShowroom, storeRoom->numberOfCars * sizeof(cars));

  if (storeRoom->carsinShowroom == NULL)
  {
    printf("\n Memory allocation error!");
    // exit(666);
    exit(EXIT_FAILURE);
  }
  // adding cars in the showroom
  storeRoom->carsinShowroom[storeRoom->numberOfCars - 1] = cars;
  cars.index = storeRoom->numberOfCars - 1;
  return cars.index;
}

int insertCarSpec(struct ShowRoom *, int n, struct CarDetails, char *);

int insertCarSpec(struct ShowRoom *storeRoom, int index, struct CarDetails carDetails, char *model)
{
  carDetails.model = malloc(strlen(model) + 1);
  strcpy(carDetails.model, model);

  carDetails.carType = &storeRoom->carsinShowroom[index];

  storeRoom->carsinShowroom[index].noOfSpec += 1;

  storeRoom->carsinShowroom[index].carSpec =
      (storeRoom->carsinShowroom[index].noOfSpec == 1)
          ? malloc(storeRoom->carsinShowroom[index].noOfSpec * sizeof(carDetails))
          : realloc(storeRoom->carsinShowroom[index].carSpec, storeRoom->carsinShowroom[index].noOfSpec * sizeof(carDetails));

  if (storeRoom->carsinShowroom[index].carSpec == NULL)
  {
    printf("\nMemory allocation error!");
    exit(666); // exit program with error number
  }

  // adding specifications of cars
  storeRoom->carsinShowroom[index].carSpec[storeRoom->carsinShowroom[index].noOfSpec - 1] = carDetails;
  carDetails.index = storeRoom->carsinShowroom[index].noOfSpec - 1;

  return carDetails.index;
}

int main()
{

  struct ShowRoom myShowroom = createShowroom(" Auto ");
  struct Cars audi, bmw, mercedes, toyota, volvo;
  int audiindex = insertCar(&myShowroom, audi, "AUDI", 6);
  int bmwindex = insertCar(&myShowroom, bmw, "BMW", 4);
  int mercedesindex = insertCar(&myShowroom, mercedes, "Mercedes", 4);
  int toyotaindex = insertCar(&myShowroom, toyota, "Toyota", 8);
  int volvoindex = insertCar(&myShowroom, volvo, "Volvo", 10);

  // adding specifications of cars

  struct CarDetails hybrid, automatic, manual, diesel, petrol, sportback, sedan, coupe, farmari, yaris;

  insertCarSpec(&myShowroom, audiindex, manual, "Manaul");
  insertCarSpec(&myShowroom, audiindex, sportback, "Sportback");

  insertCarSpec(&myShowroom, bmwindex, automatic, "Automatic");
  insertCarSpec(&myShowroom, bmwindex, farmari, "Farmari");

  insertCarSpec(&myShowroom, mercedesindex, diesel, "Diesel");
  insertCarSpec(&myShowroom, mercedesindex, coupe, "Coupe");

  insertCarSpec(&myShowroom, toyotaindex, hybrid, "Hybrid");
  insertCarSpec(&myShowroom, toyotaindex, yaris, "Yaris");

  insertCarSpec(&myShowroom, volvoindex, petrol, "Petrol");
  insertCarSpec(&myShowroom, volvoindex, sedan, "Sedan");

  for (int i = 0; i < myShowroom.numberOfCars; i++)
  {
    // prints car name and number of cars
    printf("\n%p", myShowroom.carsinShowroom[i]);
    printf("\n%s", myShowroom.carsinShowroom[i].carName);
    printf("\n%d", myShowroom.carsinShowroom[i].numbers);
    printf("\n-------------");

    // prints car specifications
    printf("\nSpecifications of Cars:");
    for (int j = 0; j < myShowroom.carsinShowroom[i].noOfSpec; j++)
    {
      printf("\n %s", myShowroom.carsinShowroom[i].carSpec[j].model);
    }
    printf("\n==============");
  }
  // gives name of the company
  myShowroom.Tellname = &ShowroomName;
  myShowroom.Tellname(&myShowroom);

  return 0;
}