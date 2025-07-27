#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

#define CONSOLE_WIDTH 120

int calculateBoxWidth(const char* message, int minWidth, int extraPadding) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + extraPadding;
    if (boxWidth < minWidth) boxWidth = minWidth;
    if (boxWidth > CONSOLE_WIDTH - 4) boxWidth = CONSOLE_WIDTH - 4; 
    return boxWidth;
}

void printCenteredBox(char message[]) {
    int msgLen = strlen(message);
    int boxWidth = calculateBoxWidth(message, 40, 16); 
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    int innerPadding = (boxWidth - 2 - msgLen) / 2;

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║");
    for (int i = 0; i < innerPadding; i++) printf(" ");
    printf("%s", message);
    for (int i = 0; i < boxWidth - 2 - innerPadding - msgLen; i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
}

void printError(const char message[]) {
    int msgLen = strlen(message);
    int boxWidth = calculateBoxWidth(message, 50, 20); 
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    int innerPadding = (boxWidth - 2 - msgLen) / 2;

    printf("\033[1;35m");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║");
    for (int i = 0; i < innerPadding; i++) printf(" ");
    printf("\033[1;31m%s\033[1;35m", message);
    for (int i = 0; i < boxWidth - 2 - innerPadding - msgLen; i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m");
}

void printSuccess(const char message[]) {
    int msgLen = strlen(message);
    int boxWidth = calculateBoxWidth(message, 50, 20); 
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    int innerPadding = (boxWidth - 2 - msgLen) / 2;

    printf("\033[1;35m");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║");
    for (int i = 0; i < innerPadding; i++) printf(" ");
    printf("\033[1;36m%s\033[1;35m", message);
    for (int i = 0; i < boxWidth - 2 - innerPadding - msgLen; i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m");
}

void printSongBox(char message[], int songNumber, int isActive) {
    char fullText[100];
    if (isActive) {
        snprintf(fullText, sizeof(fullText), "%d. %s  ( NOW PLAYING )", songNumber, message);
    } else {
        snprintf(fullText, sizeof(fullText), "%d. %s", songNumber, message);
    }
    
    int boxWidth = calculateBoxWidth(fullText, 60, 16);
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    int innerPadding = (boxWidth - 2 - strlen(fullText)) / 2;

    if (isActive) {
        printf("\033[1;32m"); 
    } else {
        printf("\033[1;34m"); 
    }

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║");
    for (int i = 0; i < innerPadding; i++) printf(" ");
    
    if (isActive) {
        printf("\033[1;33m%d. %s  ( NOW PLAYING )\033[1;32m", songNumber, message);
    } else {
        printf("\033[1;37m%d. %s\033[1;34m", songNumber, message);
    }
    
    for (int i = 0; i < boxWidth - 2 - innerPadding - (int)strlen(fullText); i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m"); 
}

void printControlsBox() {
    const char* lines[] = {
        "CONTROLS & INSTRUCTIONS",
        "",
        "Press 'SPACE' for pause/play in the ffplay window",
        "Press 'Q' to quit current song in the ffplay window", 
        "Before switching songs, pause or quit the current one",
        ""
    };
    int numLines = sizeof(lines) / sizeof(lines[0]);
    
    int maxLen = 0;
    for (int i = 0; i < numLines; i++) {
        int len = strlen(lines[i]);
        if (len > maxLen) maxLen = len;
    }
    
    int boxWidth = calculateBoxWidth("", maxLen + 10, maxLen + 20);
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    printf("\033[1;36m");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int line = 0; line < numLines; line++) {
        for (int i = 0; i < sideSpaces; i++) printf(" ");
        printf("║");
        
        int lineLen = strlen(lines[line]);
        int innerPadding = (boxWidth - 2 - lineLen) / 2;
        
        for (int i = 0; i < innerPadding; i++) printf(" ");
        
        if (line == 0) {
            printf("\033[1;33m%s\033[1;36m", lines[line]);
        } else if (strlen(lines[line]) > 0) {
            printf("\033[1;37m%s\033[1;36m", lines[line]);
        } else {
            printf("%s", lines[line]); 
        }
        
        for (int i = 0; i < boxWidth - 2 - innerPadding - lineLen; i++) printf(" ");
        printf("║\n");
    }

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m");
}

void printMenuBox() {
    const char* lines[] = {
        "NAVIGATION MENU",
        "",
        "Press 'A' for Previous Song",
        "Press 'D' for Next Song", 
        "Press 'E' to Exit Music Player",
        ""
    };
    int numLines = sizeof(lines) / sizeof(lines[0]);
    
    int maxLen = 0;
    for (int i = 0; i < numLines; i++) {
        int len = strlen(lines[i]);
        if (len > maxLen) maxLen = len;
    }
    
    int boxWidth = calculateBoxWidth("", maxLen + 10, maxLen + 16);
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    printf("\033[1;35m");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int line = 0; line < numLines; line++) {
        for (int i = 0; i < sideSpaces; i++) printf(" ");
        printf("║");
        
        int lineLen = strlen(lines[line]);
        int innerPadding = (boxWidth - 2 - lineLen) / 2;
        
        for (int i = 0; i < innerPadding; i++) printf(" ");
        
        if (line == 0) {
            printf("\033[1;33m%s\033[1;35m", lines[line]); 
        } else if (strlen(lines[line]) > 0) {
            printf("\033[1;37m%s\033[1;35m", lines[line]); 
        } else {
            printf("%s", lines[line]); 
        }
        
        for (int i = 0; i < boxWidth - 2 - innerPadding - lineLen; i++) printf(" ");
        printf("║\n");
    }

    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m");
}

void printThanksBox(char message[]) {
    int boxWidth = calculateBoxWidth(message, 50, 16);
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    int innerPadding = (boxWidth - 2 - strlen(message)) / 2;

    printf("\033[1;32m");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║");
    for (int i = 0; i < innerPadding; i++) printf(" ");
    printf("\033[1;33m%s\033[1;32m", message);
    for (int i = 0; i < boxWidth - 2 - innerPadding - (int)strlen(message); i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    printf("\033[0m");
}

void clearScreen() {
    system("cls");
}

void play(const char *file) {
    char cmd[512];
    snprintf(cmd, sizeof(cmd), "cmd /c start \"\" \"C:\\VS Code projects\\C-Practice\\music_Player\\ffplay.exe\" -autoexit \"%s\"", file);
    system(cmd);
}

void displayInterface(int currentSong) {
    const char *songNames[] = {"Sajde", "Haseen", "SAIYAARA"};
    
    clearScreen();
    printf("\n");
    printCenteredBox(" Music Player By Dany ");
    printf("\n\n");
    
    
    for (int i = 0; i < 3; i++) {
        printSongBox((char*)songNames[i], i + 1, (i == currentSong));
        printf("\n");
    }
    
    printf("\n");
    printControlsBox();
    printf("\n");
    printMenuBox();
    printf("\n");
}

int main() {
    const char *songs[] = {
        "C:\\VS Code projects\\C-Practice\\music_Player\\Sajde.wav",
        "C:\\VS Code projects\\C-Practice\\music_Player\\Haseen.wav",
        "C:\\VS Code projects\\C-Practice\\music_Player\\SAIYAARA.wav"
    };
    
    const char *songNames[] = {"Sajde", "Haseen", "SAIYAARA"};
    
    int choice;
    int current_song;
    char ch;
    
    system("chcp 65001 > nul");
    system("color 0F");
    
    clearScreen();
    printf("\n");
    printCenteredBox("Music Player By Dany ");
    printf("\n\n");
    
    printSongBox("Sajde", 1, 0);
    printf("\n");
    printSongBox("Haseen", 2, 0);
    printf("\n");
    printSongBox("SAIYAARA", 3, 0);
    printf("\n\n");
    
    printf("\t\t\t\t\t ▶ Choose a song (1-3): ");
    scanf("%d", &choice);

    while(choice < 1 || choice > 3){
        printf("\n");
        printError("Invalid choice! Please select 1, 2, or 3");
        printf("\n");
        printf("\t\t\t\t\t ▶ Try again (1-3): ");
        scanf("%d", &choice);
    }
    
    current_song = choice - 1;
    
    while (getchar() != '\n');
    
    play(songs[current_song]);
    
    char startMsg[100];
    snprintf(startMsg, sizeof(startMsg), "Started playing: %s", songNames[current_song]);
    printf("\n");
    printSuccess(startMsg);
    printf("\n");
    
    Sleep(2000);
    
    while (1) {
        displayInterface(current_song);
        
        printf("\t\t\t\t ▶ Your choice (A/D/E): ");
        scanf("%c", &ch);
        
        while(getchar() != '\n');

        if(ch == 'A' || ch == 'a'){
            if(current_song == 0){
                printf("\n");
                printError("There is no previous song! You're at the first song.");
                printf("\n");
                Sleep(2000);
            } else {
                current_song--;
                play(songs[current_song]);
                char msg[100];
                snprintf(msg, sizeof(msg), "Playing previous song: %s", songNames[current_song]);
                printf("\n");
                printSuccess(msg);
                printf("\n");
                Sleep(2000);
            }
        }
        else if(ch == 'D' || ch == 'd'){
            if(current_song == 2){
                printf("\n");
                printError("There is no next song! You are at the last song.");
                printf("\n");
                Sleep(2000);
            } else {
                current_song++;
                play(songs[current_song]);
                char msg[100];
                snprintf(msg, sizeof(msg), "Playing next song: %s", songNames[current_song]);
                printf("\n");
                printSuccess(msg);
                printf("\n");
                Sleep(2000);
            }
        }
        else if(ch == 'E' || ch == 'e'){
            clearScreen();
            printf("\n\n\n");
            printThanksBox("Thank you for using Music Player By Dany!");
            printf("\n");
            printSuccess("Goodbye! See you next time!");
            printf("\n\n");
            break;
        }
        else {
            printf("\n");
            printError("Invalid input! Please use 'A' for previous, 'D' for next, or 'E' to quit.");
            printf("\n");
            Sleep(2000);
        }
    }
    
    return 0;
}