#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For system()

#define CONSOLE_WIDTH 120

int main() {
    system("chcp 65001 > nul");  // Set UTF-8 encoding silently

    char message[] = "✨ Welcome to My Program ✨";
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    // Top border
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    // Message line
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  %s  ║\n", message);

    // Bottom border
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

    return 0;
}
