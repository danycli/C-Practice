#include <stdio.h>
#include <stdlib.h>

void playMusic() {
    system("start /min wmplayer music.wav");  // Use 'start' to play using default player
}

void stopMusic() {
    system("taskkill /IM wmplayer.exe /F"); // Kills Windows Media Player
}

int main() {
    int choice;

    do {
        printf("\n==== Simple C Music Player ====\n");
        printf("1. Play Music\n");
        printf("2. Stop Music\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                playMusic();
                break;
            case 2:
                stopMusic();
                break;
            case 3:
                stopMusic();
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}

