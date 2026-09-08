#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print 5 random numbers between 0 and RAND_MAX
    printf("Five random numbers (0 to RAND_MAX):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rand());
    }
    printf("\n");

    // Generate 5 random numbers in a specific range, e.g., 1 to 100
    printf("Five random numbers in range 1–100:\n");
    for (int i = 0; i < 5; i++) {
        int num = (rand() % 100) + 1;  // modulo to limit range
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}
