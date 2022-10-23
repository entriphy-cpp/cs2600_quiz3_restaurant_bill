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
    printf("-----------\n");

    // Randomly select a meal in the meal table
    srand(time(NULL));
    int random = rand() % MealTableEntries;
    Meal randomMeal = MealTable[random];

    // Calculate meal cost, tax amount, tip amount, and total bill
    double mealCost = randomMeal.price;
    double taxAmount = mealCost * (tax / 100); // Apply tax to subtotal
    double tipAmount = mealCost * (tip / 100); // Apply tip to subtotal
    double totalBill = mealCost + taxAmount + tipAmount; // Add up subtotal, tax, and tip to get total cost

    // Display cost information to user
    printf("Receipt:\n");
    printf("- %s: $%.2f\n", randomMeal.name, randomMeal.price);
    printf("\n");
    printf("Subtotal: $%.2f\n", mealCost);
    printf("Tax: $%.2f\n", taxAmount);
    printf("Tip: $%.2f\n", tipAmount);
    printf("-----------\n");
    printf("Total: $%.2f\n", totalBill);
}
