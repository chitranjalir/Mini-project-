#include <stdio.h>

// Level 1
int level1() {
    int ans;
    printf("\nLEVEL 1: Number Puzzle\n");
    printf("Find the next number:\n");
    printf("2 4 6 8 ?\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans == 10) {
        printf("Correct! Door 1 unlocked.\n");
        return 1;
    } else {
        printf("Wrong answer!\n");
        return 0;
    }
}

// Level 2
int level2() {
    int pass;
    printf("\nLEVEL 2: Password Lock\n");
    printf("Hint: Sum of first five natural numbers\n");
    printf("Enter password: ");
    scanf("%d", &pass);

    if(pass == 15) {
        printf("Correct! Door 2 unlocked.\n");
        return 1;
    } else {
        printf("Wrong password!\n");
        return 0;
    }
}

// Level 3
int level3() {
    int ans;
    printf("\nLEVEL 3: Logic Question\n");
    printf("How many days are there in a week?\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans == 7) {
        printf("Correct! You escaped the room!\n");
        return 1;
    } else {
        printf("Wrong answer!\n");
        return 0;
    }
}

int main() {
    printf("===== CODE ESCAPE ROOM =====\n");
    printf("Solve all puzzles to escape!\n");

    if(level1()) {
        if(level2()) {
            if(level3()) {
                printf("\nCongratulations! Game Completed.\n");
            }
        }
    }

    return 0;
}
