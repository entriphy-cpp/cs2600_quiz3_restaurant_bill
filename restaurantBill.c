#include <stdlib.h>
#include <stdio.h>
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

    // Randomly select a meal in the meal table

    // Calculate meal cost, tax amount, tip amount, and total bill

    // Display cost information to user
}
