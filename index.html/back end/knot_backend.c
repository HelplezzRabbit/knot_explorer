#include <stdio.h>
#include <string.h>

// Function prototypes
void showCategories();
void displayKnotOptions(int category);
void getDescription(int category, int knot);
void getProcess(int category, int knot);

int main() {
    int categoryChoice, knotChoice, descriptionChoice, processChoice;

    printf("Welcome to the Knot Explorer!\n");
    showCategories();

    printf("Enter the number corresponding to the knot category you'd like to explore: ");
    scanf("%d", &categoryChoice);

    if (categoryChoice < 1 || categoryChoice > 7) {
        printf("Invalid category choice. Exiting...\n");
        return 0;
    }

    displayKnotOptions(categoryChoice);

    printf("Enter the number corresponding to the specific knot you'd like to explore: ");
    scanf("%d", &knotChoice);

    printf("\nWould you like to see the description of the knot? (1 = Yes, 2 = No): ");
    scanf("%d", &descriptionChoice);
    if (descriptionChoice == 1) {
        getDescription(categoryChoice, knotChoice);
    }

    printf("\nWould you like to know the process of making the knot? (1 = Yes, 2 = No): ");
    scanf("%d", &processChoice);
    if (processChoice == 1) {
        getProcess(categoryChoice, knotChoice);
    }

    printf("\nThank you for exploring knots!\n");
    return 0;
}

void showCategories() {
    printf("Choose a category of knots:\n");
    printf("1. Basic Knots\n");
    printf("2. Climbing Knots\n");
    printf("3. Sailing Knots\n");
    printf("4. Decorative Knots\n");
    printf("5. Fishing Knots\n");
    printf("6. Utility Knots\n");
    printf("7. Specialized Knots\n");
}

void displayKnotOptions(int category) {
    printf("\nKnots in this category:\n");
    switch (category) {
        case 1: 
            printf("1. Square Knot\n2. Bowline Knot\n3. Sheet Bend Knot\n4. Clove Hitch Knot\n");
            break;
        case 2: 
            printf("1. Figure Eight Knot\n2. Alpine Butterfly Knot\n3. Prusik Knot\n4. Water Knot\n");
            break;
        case 3: 
            printf("1. Rolling Hitch Knot\n2. Clove Hitch Knot\n3. Reef Knot\n4. Bowline Knot\n");
            break;
        case 4: 
            printf("1. Monkey's Fist Knot\n2. Turk's Head Knot\n3. Matthew Walker Knot\n4. Carrick Bend Knot\n");
            break;
        case 5: 
            printf("1. Blood Knot\n2. Fisherman's Knot\n3. Improved Clinch Knot\n4. Barrel Knot\n");
            break;
        case 6: 
            printf("1. Trucker's Hitch Knot\n2. Taut-Line Hitch Knot\n3. Round Turn and Two Half Hitches\n4. Timber Hitch Knot\n");
            break;
        case 7: 
            printf("1. Eldridge Knot\n2. Gordian Knot\n3. Klemheist Knot\n4. Bends\n");
            break;
        default: 
            printf("Invalid category.\n");
    }
}

void getDescription(int category, int knot) {
    printf("\nDescription of the knot:\n");
    if (category == 1 && knot == 1) {
        printf("Square Knot: A simple binding knot used to secure two ends of a rope together.\n");
    } else if (category == 1 && knot == 2) {
        printf("Bowline Knot: Creates a fixed loop at the end of a rope. It's strong and does not slip.\n");
    }
    // Add descriptions for other knots similarly.
    else {
        printf("Description not available for this knot.\n");
    }
}

void getProcess(int category, int knot) {
    printf("\nProcess to make the knot:\n");
    if (category == 1 && knot == 1) {
        printf("Square Knot: Cross right end over left and tuck it under, then repeat with the other ends.\n");
    } else if (category == 1 && knot == 2) {
        printf("Bowline Knot: Make a loop, pass the working end through, wrap it around and back through the loop.\n");
    }
    // Add processes for other knots similarly.
    else {
        printf("Process not available for this knot.\n");
    }
}
