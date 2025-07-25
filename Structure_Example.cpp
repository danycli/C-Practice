#include <stdio.h>

struct Player {
    char name[20];
    int level;
    float kdRatio;
};

int main() {
    struct Player Danial = {"Danial", 45, 2.5};

    printf("Player Name: %s\n", Danial.name);
    printf("Level: %d\n", Danial.level);
    printf("K/D Ratio: %.1f\n", Danial.kdRatio);

    return 0;
}
