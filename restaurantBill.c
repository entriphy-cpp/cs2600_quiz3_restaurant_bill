#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "meal.h"

// External table
extern Meal MealTable[];
extern const int MealTableEntries;

int main(int argc, char const *argv[]) {
    // Check argument count (should be >= 3; argv[1] = tax, argv[2] = tip)
    if (argc < 3) {
        printf("Usage: restaurantBill <tax> <tip>\n");
        return EXIT_FAILURE;
    }

    // Parse command line arguments for tax and tip (convert to double)
    char *ptr; // Temporary ptr to use for strtod
    double tax = strtod(argv[1], &ptr);
    double tip = strtod(argv[2], &ptr);
    printf("Tax: %.2f%%\n", tax);
    printf("Tip: %.2f%%\n", tip);

    // Randomly select a meal in the meal table
    srand(time(NULL));
    int random = rand() % MealTableEntries;
    Meal randomMeal = MealTable[random];

    // Calculate meal cost, tax amount, tip amount, and total bill

    // Display cost information to user
}
