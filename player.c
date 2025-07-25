#include <stdio.h>
#include <stdlib.h>

void playMusic() {
    system("powershell -c (New-Object Media.SoundPlayer 'music.wav').PlaySync();");
}

int main() {
    int choice;

    do {
        printf("\n==== Simple C Music Player ====\n");
        printf("1. Play Music\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                playMusic();
                break;
            case 2:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 2);

    return 0;
}

