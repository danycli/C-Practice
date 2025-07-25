#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>  // For usleep

int main() {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    int sec = t->tm_sec;

    int paraIndex = sec % 9;
    int totalWords = 0;

    printf("Type the following paragraph:\n\n");

    if (paraIndex == 0) {
        printf("C is a powerful programming language.\n");
        printf("It is used to make games, apps, and systems.\n");
        printf("You are now practicing typing speed.\n");
        printf("Type carefully and try to be fast.\n");
        totalWords = 29;
    } else if (paraIndex == 1) {
        printf("Typing makes you better at programming.\n");
        printf("Practice daily to improve your speed.\n");
        printf("This program checks how fast you type.\n");
        printf("Remember, slow progress is still progress.\n");
        totalWords = 25;
    } else if (paraIndex == 2) {
        printf("When you type a lot, your fingers get used to it.\n");
        printf("Fast typing helps you in coding and writing emails.\n");
        printf("Even chatting becomes quicker.\n");
        printf("So keep learning and typing.\n");
        totalWords = 28;
    } else if (paraIndex == 3) {
        printf("Learning C is like building a base.\n");
        printf("It is the foundation of many other languages.\n");
        printf("Start with C and go ahead step by step.\n");
        printf("You will become a pro with practice.\n");
        totalWords = 31;
    } else if (paraIndex == 4) {
        printf("Some people type slow, and some type fast.\n");
        printf("But speed comes with time and patience.\n");
        printf("You must not give up or feel tired.\n");
        printf("Just continue typing daily.\n");
        totalWords = 27;
    } else if (paraIndex == 5) {
        printf("Mistakes in typing are common.\n");
        printf("Even professionals make errors.\n");
        printf("The trick is to fix them fast and move on.\n");
        printf("Accuracy is more important than speed.\n");
        totalWords = 26;
    } else if (paraIndex == 6) {
        printf("Typing tests are fun and useful.\n");
        printf("They show how good you are with the keyboard.\n");
        printf("You can challenge your friends too.\n");
        printf("Let's see how fast you can type this.\n");
        totalWords = 30;
    } else if (paraIndex == 7) {
        printf("Good posture helps you type better.\n");
        printf("Sit straight and keep your wrists relaxed.\n");
        printf("Keep your eyes on the screen.\n");
        printf("And fingers on the correct keys.\n");
        totalWords = 26;
    } else if (paraIndex == 8) {
        printf("Never stop learning new skills.\n");
        printf("Typing is a useful skill for all fields.\n");
        printf("From school work to job tasks, it's everywhere.\n");
        printf("So take this typing seriously.\n");
        totalWords = 27;
    }

    printf("\nYou need to type %d words.\n", totalWords);
    printf("Start typing below:\n");

    int typedWords = 0;
    int timerStarted = 0;
    time_t startTime, endTime;
    char ch;

    while (typedWords < totalWords) {
        if (kbhit()) {
            ch = getch();

            if (timerStarted == 0 && ch != ' ' && ch != '\n') {
                timerStarted = 1;
                startTime = time(NULL);
            }

            // Print the character the user typed
            printf("%c", ch);
            fflush(stdout);

            if (ch == ' ' || ch == '\n') {
                typedWords++;
            }
        }

        usleep(10000); // small sleep to reduce CPU usage
    }

    endTime = time(NULL);
    double timeTaken = difftime(endTime, startTime);
    if (timeTaken < 1) timeTaken = 1;

    double wpm = (typedWords * 60.0) / timeTaken;

    printf("\n\nTyping completed!\n");
    printf("Words typed: %d\n", typedWords);
    printf("Time taken: %.0f seconds\n", timeTaken);
    printf("Net WPM: %.2f\n", wpm);

    return 0;
}

