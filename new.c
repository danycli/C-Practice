                                // Islamic Law of Inheritance System (Font size and style ??)

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define CONSOLE_WIDTH 120

void printCenteredBox(const char* message) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    if (boxWidth < 40) boxWidth = 40; // minimum width
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  %-*s  ║\n", boxWidth - 6, message);

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
}

void printSectionHeader(const char* title) {
    printf("\n");
    int titleLen = strlen(title);
    int totalSpaces = (CONSOLE_WIDTH - titleLen - 8) / 2;

    for (int i = 0; i < totalSpaces; i++) printf(" ");
    printf("╔═══ %s ═══╗\n", title);
    printf("\n");
}

void printSeparator() {
    int sideSpaces = (CONSOLE_WIDTH - 80) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    for (int i = 0; i < 80; i++) printf("═");
    printf("\n");
}

void printPrompt(const char* question) {
    int qLen = strlen(question);
    int boxWidth = qLen + 8;
    if (boxWidth < 40) boxWidth = 40;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  %-*s  ║\n", boxWidth - 6, question);

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("   ▶ Enter: ");
}

void printError(const char* message) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    if (boxWidth < 50) boxWidth = 50;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    // Set text color to yellow (keeping background)
    printf("\033[33m");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  \033[1;31m%-*s\033[0m\033[33m  ║\n", boxWidth - 6, message);

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

    // Reset to default yellow color
    printf("\033[33m");
}

void printChoicePrompt(const char* question, const char* option1, const char* option2) {
    const int boxWidth = 76;         // Full box width
    const int contentWidth = 72;     // Inside width for content
    const int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    // Top border
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; ++i) printf("═");
    printf("╗\n");

    // Question line
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("║ %-*.*s ║\n", contentWidth, contentWidth, question);

    // Divider
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("╠");
    for (int i = 0; i < boxWidth - 2; ++i) printf("═");
    printf("╣\n");

    // Option 1 (manual padding to avoid Unicode shift)
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("║ ➤ 1. %-67s ║\n", option1); // 72 - 6 = 66 chars padding

    // Option 2
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("║ ➤ 2. %-67s ║\n", option2);

    // Bottom border
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; ++i) printf("═");
    printf("╝\n");

    // Input line
    for (int i = 0; i < sideSpaces; ++i) printf(" ");
    printf("  ▶ Enter your choice: ");
}

void printTableHeader() {
    int sideSpaces = (CONSOLE_WIDTH - 76) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("┌────────────────────────────────────┬────────────────────┬──────────────┐\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("│ HEIR                               │ SHARE TYPE         │ AMOUNT       │\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("├────────────────────────────────────┼────────────────────┼──────────────┤\n");
}

void printTable(const char* col1, const char* col2, int amount) {
    int sideSpaces = (CONSOLE_WIDTH - 76) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("│ %-34s │ %-18s │ %12d │\n", col1, col2, amount);
}

void printTableFooter() {
    int sideSpaces = (CONSOLE_WIDTH - 76) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("└────────────────────────────────────┴────────────────────┴──────────────┘\n");
}

void printResidueDistribution(const char* title, int amount, const char* details) {
    const int boxWidth = 65;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;


    // Top border
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    // Title line
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║ %-61s ║\n", title);

    // Optional detail line
    if (details != NULL) {
        int detailLen = strlen(details);
        if (detailLen <= 61) {
            for (int i = 0; i < sideSpaces; i++) printf(" ");
            printf("║ %-61s ║\n", details);
        } else {
            // Wrap long detail string into two lines
            char line1[62] = {0};
            char line2[62] = {0};
            strncpy(line1, details, 61);
            strncpy(line2, details + 61, 61);

            for (int i = 0; i < sideSpaces; i++) printf(" ");
            printf("║ %-61s ║\n", line1);

            for (int i = 0; i < sideSpaces; i++) printf(" ");
            printf("║ %-61s ║\n", line2);
        }
    }

    // Amount line - changed to light blue (36)
    char amountLine[70];
    snprintf(amountLine, sizeof(amountLine), "Amount: %d", amount);
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║ \033[1;36m%-*s\033[33m ║\n", 61, amountLine);  // Light blue amount, yellow text

    // Bottom border
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

    // Reset to default yellow color for subsequent text
    printf("\033[33m");
}

void checkPrimaryHeirs(
    int gender, int* nSpouse, int* spouse,
    int* nChild, int* son, int* daughter,
    int* mother, int* father,
    int* paternalGrandfather, int* maternalGrandmother,
    int* siblings, int* nSiblings, int* brotherFull, int* sisterFull,
    int* uterineSiblings, int* nUncles, int* uterineBrothers, int* uterineSisters,
    int* uncles,
    int* totalHeirs
) {
    int child;
    *nChild = 0;
    *son = 0;
    *daughter = 0;

    printSectionHeader("CHECKING PRIMARY HEIRS");

    if(gender == 1) {
        printChoicePrompt("Is wife alive?", "YES", "NO");
    } else {
        printChoicePrompt("Is husband alive?", "YES", "NO");
    }
    scanf("%d", spouse);
    while(*spouse < 1 || *spouse > 2) {
        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
        printf("   ▶ Try again: ");
        scanf("%d", spouse);
    }

    if(gender == 1 && *spouse == 1) {
        printPrompt("Enter the number of wives:");
        scanf("%d", nSpouse);
        while(*nSpouse < 1 || *nSpouse > 4) {
            printError("Number of wives should be between 1-4");
            printf("   ▶ Try again: ");
            scanf("%d", nSpouse);
        }
        (*totalHeirs)++;
    } else if(gender == 2 && *spouse == 1) {
        *nSpouse = 1;
        (*totalHeirs)++;
    } else {
        *nSpouse = 0;
    }

    printChoicePrompt("Is there any child?", "YES", "NO");
    scanf("%d", &child);
    while(child < 1 || child > 2) {
        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
        printf("   ▶ Try again: ");
        scanf("%d", &child);
    }

    if(child == 1) {
        printPrompt("How many children are there?");
        scanf("%d", nChild);
        printPrompt("Number of sons:");
        scanf("%d", son);
        printPrompt("Number of daughters:");
        scanf("%d", daughter);
        while(*son + *daughter != *nChild) {
            printError("Sum of sons and daughters doesn't match total children!");
            printPrompt("Number of sons:");
            scanf("%d", son);
            printPrompt("Number of daughters:");
            scanf("%d", daughter);
        }
        if(*nChild > 0) (*totalHeirs)++;
    }

    int skip = (*son > 0);  

    if(!skip) {
        printChoicePrompt("Is mother alive?", "YES", "NO");
        scanf("%d", mother);
        while(*mother < 1 || *mother > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", mother);
        }
        if(*mother == 1) (*totalHeirs)++;

        printChoicePrompt("Is father alive?", "YES", "NO");
        scanf("%d", father);
        while(*father < 1 || *father > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", father);
        }
        if(*father == 1) (*totalHeirs)++;
    } else {
        *mother = 2;
        *father = 2;
    }

    if(!skip && *mother == 2 && *father == 2) {
        printChoicePrompt("Is paternal grandfather alive?", "YES", "NO");
        scanf("%d", paternalGrandfather);
        while(*paternalGrandfather < 1 || *paternalGrandfather > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", paternalGrandfather);
        }
        if(*paternalGrandfather == 1) (*totalHeirs)++;

        printChoicePrompt("Is maternal grandmother alive?", "YES", "NO");
scanf("%d", maternalGrandmother);
while(*maternalGrandmother < 1 || *maternalGrandmother > 2) {
    printError("Invalid choice! Please enter 1 for YES or 2 for NO");
    printf("   ▶ Try again: ");
    scanf("%d", maternalGrandmother);
}

int paternalGrandmother;
printChoicePrompt("Is paternal grandmother alive?", "YES", "NO");
scanf("%d", &paternalGrandmother);
while(paternalGrandmother < 1 || paternalGrandmother > 2) {
    printError("Invalid choice! Please enter 1 for YES or 2 for NO");
    printf("   ▶ Try again: ");
    scanf("%d", &paternalGrandmother);
}

        if(*maternalGrandmother == 1) (*totalHeirs)++;
    } else {
        *paternalGrandfather = 2;
        *maternalGrandmother = 2;
    }

    if(!skip && *father == 2) {
        printChoicePrompt("Are there any full siblings (same father and mother)?", "YES", "NO");
        scanf("%d", siblings);
        while(*siblings < 1 || *siblings > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", siblings);
        }

        if(*siblings == 1) {
            printPrompt("How many full brothers:");
            scanf("%d", brotherFull);
            printPrompt("How many full sisters:");
            scanf("%d", sisterFull);
            *nSiblings = *brotherFull + *sisterFull;
            if(*nSiblings > 0) (*totalHeirs)++;
        } else {
            *nSiblings = 0;
            *brotherFull = *sisterFull = 0;
        }

        printChoicePrompt("Are there any uterine siblings?", "YES", "NO");
        scanf("%d", uterineSiblings);
        while(*uterineSiblings < 1 || *uterineSiblings > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", uterineSiblings);
        }

        if(*uterineSiblings == 1) {
            printPrompt("How many uterine brothers:");
            scanf("%d", uterineBrothers);
            printPrompt("How many uterine sisters:");
            scanf("%d", uterineSisters);
            if(*uterineBrothers + *uterineSisters > 0) (*totalHeirs)++;
        } else {
            *uterineBrothers = *uterineSisters = 0;
        }
    } else {
        *siblings = 2;
        *brotherFull = *sisterFull = 0;
        *uterineSiblings = 2;
        *uterineBrothers = *uterineSisters = 0;
        *nSiblings = 0;
    }

    if(!skip && *father == 2 && *nSiblings == 0 && *paternalGrandfather == 2) {
    printChoicePrompt("Are there any paternal uncles alive?", "YES", "NO");
    scanf("%d", uncles);
    while(*uncles < 1 || *uncles > 2) {
        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
        printf("   ▶ Try again: ");
        scanf("%d", uncles);
    }

    if(*uncles == 1) {
    printPrompt("How many paternal uncles?");
    scanf("%d", nUncles); // ✅ Store in the address passed from main
    while(*nUncles <= 0) {
        printError("Number must be greater than 0");
        printf("   ▶ Try again: ");
        scanf("%d", nUncles);
    }
    (*totalHeirs)++;
} else {
    *nUncles = 0; // ✅ Properly set the value in main
}

} else {
    *uncles = 2;
    nUncles = 0;
}

}

// Add this function before main()
void distributeDistantRelatives(
    int wealth,
    int daughterChildren,
    int sisterChildren,
    int maternalUncle,
    int paternalAunt,
    int maternalCousins,
    int paternalCousins,
    int maternalGrandfather
) {
    printSectionHeader("DISTRIBUTION TO DISTANT RELATIVES");
    printTableHeader();

    int distributed = 0;

    if (daughterChildren == 1) {
        printTable("Daughters' Children", "Full Inheritance", wealth);
        distributed = 1;
    } else if (sisterChildren == 1) {
        printTable("Sisters' Children", "Full Inheritance", wealth);
        distributed = 1;
    } else if (maternalUncle == 1) {
        printTable("Maternal Uncles/Aunts", "Full Inheritance", wealth);
        distributed = 1;
    } else if (paternalAunt == 1) {
        printTable("Paternal Aunts", "Full Inheritance", wealth);
        distributed = 1;
    } else if (maternalCousins == 1) {
        printTable("Maternal Cousins", "Full Inheritance", wealth);
        distributed = 1;
    } else if (paternalCousins == 1) {
        printTable("Paternal Female Cousins", "Full Inheritance", wealth);
        distributed = 1;
    } else if (maternalGrandfather == 1) {
        printTable("Maternal Grandfather", "Full Inheritance", wealth);
        distributed = 1;
    }

    if (!distributed) {
        printTable("None", "No Extended Heirs Found", 0);
    }

    printTableFooter();
    if (!distributed) {
        printResidueDistribution("Estate Status", wealth, "Passed to Bait-ul-Maal or state");
    }
}


int main() {

    system("chcp 65001 > nul");
    system("color E");
    
    int gender, spouse, nSpouse, wealth, nChild, son, daughter;
    int mother, father, siblings, nSiblings, brotherFull, sisterFull;
    int uterineSiblings, uterineBrothers, uterineSisters;
    int paternalGrandfather, maternalGrandmother, uncles;
    int wifeShare, husbandShare, motherShare, fatherShare, daughterFixedShare;
    int uterineShare, maternalGrandmotherShare;
    int remaining, totalParts, sonPart, daughterPart;
    int totalHeirs = 0;
    
    int daughterChildren, sisterChildren, maternalUncle, paternalAunt;
    int maternalCousins, paternalCousins;
    int extendedRelatives = 0;
    
    int fixedShares = 0;
    int isAwlCase = 0;
    int maternalGrandfather = 2;
    int nUncles = 0;
    
    printf("\n");
    printCenteredBox("ISLAMIC INHERITANCE CALCULATOR");
    printf("\n");
    printSeparator();
    printf("\n");
    
    do {
    printPrompt("What is the total wealth left by the deceased person?");
    scanf("%d", &wealth);
    
    if(wealth <= 0) {
        printError("ERROR: Wealth must be greater than 0");
        printf("   ▶ Try again: ");
    }
} while(wealth <= 0);
    
    do {
    printChoicePrompt("Who is the deceased person?", "Male", "Female");
    if (scanf("%d", &gender) != 1) {
        while (getchar() != '\n'); // clear input buffer
        gender = 0; // force retry
    }

    if (gender < 1 || gender > 2) {
        printError("Invalid choice! Please enter 1 for Male or 2 for Female");
    }
} while (gender < 1 || gender > 2);

    checkPrimaryHeirs(
    gender, &nSpouse, &spouse,
    &nChild, &son, &daughter,
    &mother, &father,
    &paternalGrandfather, &maternalGrandmother,
    &siblings, &nSiblings, &brotherFull, &sisterFull,
    &uterineSiblings, &nUncles, &uterineBrothers, &uterineSisters,
    &uncles,
    &totalHeirs
);
    
    if (totalHeirs == 0) {
    printSectionHeader("NO PRIMARY HEIRS FOUND");
    printf("Checking for Extended Relatives...\n\n");

    extendedRelatives = 0; // Reset to start fresh

    printChoicePrompt("Are there any children of daughters?", "YES", "NO");
    scanf("%d", &daughterChildren);
    while(daughterChildren < 1 || daughterChildren > 2) {
        printError("Invalid input!");
        scanf("%d", &daughterChildren);
    }
    if (daughterChildren == 1) extendedRelatives++;

    printChoicePrompt("Are there any children of sisters?", "YES", "NO");
    scanf("%d", &sisterChildren);
    while(sisterChildren < 1 || sisterChildren > 2) {
        printError("Invalid input!");
        scanf("%d", &sisterChildren);
    }
    if (sisterChildren == 1) extendedRelatives++;

    printChoicePrompt("Is any maternal uncle/aunt alive?", "YES", "NO");
    scanf("%d", &maternalUncle);
    while(maternalUncle < 1 || maternalUncle > 2) {
        printError("Invalid input!");
        scanf("%d", &maternalUncle);
    }
    if (maternalUncle == 1) extendedRelatives++;

    printChoicePrompt("Is any paternal aunt alive?", "YES", "NO");
    scanf("%d", &paternalAunt);
    while(paternalAunt < 1 || paternalAunt > 2) {
        printError("Invalid input!");
        scanf("%d", &paternalAunt);
    }
    if (paternalAunt == 1) extendedRelatives++;

    printChoicePrompt("Are there any maternal cousins?", "YES", "NO");
    scanf("%d", &maternalCousins);
    while(maternalCousins < 1 || maternalCousins > 2) {
        printError("Invalid input!");
        scanf("%d", &maternalCousins);
    }
    if (maternalCousins == 1) extendedRelatives++;

    printChoicePrompt("Are there any paternal female cousins?", "YES", "NO");
    scanf("%d", &paternalCousins);
    while(paternalCousins < 1 || paternalCousins > 2) {
        printError("Invalid input!");
        scanf("%d", &paternalCousins);
    }
    if (paternalCousins == 1) extendedRelatives++;

    printChoicePrompt("Is maternal grandfather alive?", "YES", "NO");
    scanf("%d", &maternalGrandfather);
    while(maternalGrandfather < 1 || maternalGrandfather > 2) {
        printError("Invalid input!");
        scanf("%d", &maternalGrandfather);
    }
    if (maternalGrandfather == 1) extendedRelatives++;
}
    
    printSectionHeader("INHERITANCE CALCULATION RESULTS");
    
    if(totalHeirs == 0 && extendedRelatives == 0) {
        printCenteredBox("SPECIAL CASE: NO HEIRS FOUND AT ALL");
        printSeparator();
        printf("\nTotal wealth: %d goes to Islamic Treasury for public welfare\n", wealth);
        return 0;
    }
    
    if (totalHeirs == 0 && extendedRelatives > 0) {
    printCenteredBox("EXTENDED RELATIVES INHERITANCE");
    printSeparator();
    printf("\nNo primary heirs found. Extended relatives inherit.\n");
    printf("Total wealth: %d\n\n", wealth);

    distributeDistantRelatives(
        wealth,
        daughterChildren,
        sisterChildren,
        maternalUncle,
        paternalAunt,
        maternalCousins,
        paternalCousins,
        maternalGrandfather
    );

    return 0; // Stop further processing, since inheritance is settled
}

    
    printf("Primary heirs found: %d\n", totalHeirs);
    printSeparator();
    
    wifeShare = 0;
    husbandShare = 0;
    motherShare = 0;
    fatherShare = 0;
    daughterFixedShare = 0;
    uterineShare = 0;
    maternalGrandmotherShare = 0;
    fixedShares = 0;
    
    if(gender == 1) {
        printCenteredBox("MALE DECEASED - INHERITANCE DISTRIBUTION");
        printf("\n");
        
        if(nSpouse > 0) {
            if(nChild > 0) {
                wifeShare = wealth / 8;
                printf("Wife(s) share (1/8): %d", wifeShare);
            } else {
                wifeShare = wealth / 4;
                printf("Wife(s) share (1/4): %d", wifeShare);
            }
            if(nSpouse > 1) {
                printf(" (Each wife: %d)", wifeShare / nSpouse);
            }
            printf("\n");
            fixedShares += wifeShare;
        }
    } else {
        printCenteredBox("FEMALE DECEASED - INHERITANCE DISTRIBUTION");
        printf("\n");
        
        if(spouse == 1) {
            if(nChild > 0) {
                husbandShare = wealth / 4;
                printf("Husband share (1/4): %d\n", husbandShare);
            } else {
                husbandShare = wealth / 2;
                printf("Husband share (1/2): %d\n", husbandShare);
            }
            fixedShares += husbandShare;
        }
    }
    
    if (mother == 1) {
    if (nChild > 0 || nSiblings >= 2 || (uterineBrothers + uterineSisters) >= 2) {
        motherShare = wealth / 6;
        printf("Mother share (1/6): %d\n", motherShare);
    } 
    else if (spouse == 1 && father == 2 && nChild == 0 && nSiblings == 0 && (uterineBrothers + uterineSisters) == 0) {
        // If spouse is alive and mother is the only primary heir after spouse
        int residueAfterSpouse = wealth;
        if (gender == 1 && nSpouse > 0) {
            residueAfterSpouse -= wifeShare;
        } else if (gender == 2 && spouse == 1) {
            residueAfterSpouse -= husbandShare;
        }
        motherShare = residueAfterSpouse / 3;
        printf("Mother share (1/3 of residue): %d\n", motherShare);
    } 
    else {
        motherShare = wealth / 3;
        printf("Mother share (1/3): %d\n", motherShare);
    }

    fixedShares += motherShare;
}

    
    if(father == 1) {
        fatherShare = wealth / 6;
        printf("Father share (1/6): %d\n", fatherShare);
        fixedShares += fatherShare;
    }
    if (maternalGrandmother == 1) {
    maternalGrandmotherShare = wealth / 6;
    printf("Maternal grandmother share (1/6): %d\n", maternalGrandmotherShare);
    fixedShares += maternalGrandmotherShare;
}
else if (maternalGrandmother == 3) {
    maternalGrandmotherShare = wealth / 6;
    printf("Paternal grandmother share (1/6): %d\n", maternalGrandmotherShare);
    fixedShares += maternalGrandmotherShare;
}

    
    if(daughter > 0 && son == 0) {
        if(daughter == 1) {
            daughterFixedShare = wealth / 2;
            printf("Daughter share (1/2): %d\n", daughterFixedShare);
        } else {
            daughterFixedShare = (wealth * 2) / 3;
            printf("Daughters share (2/3): %d (Each daughter: %d)\n", 
                   daughterFixedShare, daughterFixedShare / daughter);
        }
        fixedShares += daughterFixedShare;
    }
    
    if(uterineBrothers + uterineSisters > 0) {
        if(uterineBrothers + uterineSisters == 1) {
            uterineShare = wealth / 6;
            printf("Uterine sibling share (1/6): %d\n", uterineShare);
        } else {
            uterineShare = wealth / 3;
            printf("Uterine siblings share (1/3): %d (Each gets: %d)\n", 
                   uterineShare, uterineShare / (uterineBrothers + uterineSisters));
        }
        fixedShares += uterineShare;
    }
    
    if(maternalGrandmother == 1) {
        maternalGrandmotherShare = wealth / 6;
        printf("Maternal grandmother share (1/6): %d\n", maternalGrandmotherShare);
        fixedShares += maternalGrandmotherShare;
    }
    
    if(fixedShares > wealth) {
        isAwlCase = 1;
        printf("\n");
        printCenteredBox("*** AWL CASE DETECTED ***");
        printf("Fixed shares total (%d) exceeds estate (%d)\n", fixedShares, wealth);
        printf("Applying proportional reduction:\n\n");
        
        if(wifeShare > 0) {
            wifeShare = (wifeShare * wealth) / fixedShares;
            printf("Wife(s) adjusted share: %d", wifeShare);
            if(nSpouse > 1) {
                printf(" (Each wife: %d)", wifeShare / nSpouse);
            }
            printf("\n");
        }
        
        if(husbandShare > 0) {
            husbandShare = (husbandShare * wealth) / fixedShares;
            printf("Husband adjusted share: %d\n", husbandShare);
        }
        
        if(motherShare > 0) {
            motherShare = (motherShare * wealth) / fixedShares;
            printf("Mother adjusted share: %d\n", motherShare);
        }
        
        if(fatherShare > 0) {
            fatherShare = (fatherShare * wealth) / fixedShares;
            printf("Father adjusted share: %d\n", fatherShare);
        }
        
        if(daughterFixedShare > 0) {
            daughterFixedShare = (daughterFixedShare * wealth) / fixedShares;
            printf("Daughters adjusted share: %d (Each: %d)\n", 
                   daughterFixedShare, daughterFixedShare / daughter);
        }
        
        if(uterineShare > 0) {
            uterineShare = (uterineShare * wealth) / fixedShares;
            printf("Uterine siblings adjusted share: %d (Each: %d)\n", 
                   uterineShare, uterineShare / (uterineBrothers + uterineSisters));
        }
        
        if(maternalGrandmotherShare > 0) {
            maternalGrandmotherShare = (maternalGrandmotherShare * wealth) / fixedShares;
            printf("Maternal grandmother adjusted share: %d\n", maternalGrandmotherShare);
        }
        
        remaining = 0;
    } else {
        remaining = wealth - fixedShares;
        printf("\nFixed shares total: %d, Remaining for residue: %d\n\n", fixedShares, remaining);
        
        if(remaining > 0) {
            if(son > 0) {
                totalParts = (son * 2) + daughter;
                sonPart = (remaining * 2) / totalParts;
                daughterPart = remaining / totalParts;
                
                printResidueDistribution("Sons and daughters share residue", remaining, 
                    daughter > 0 ? "Each son gets 2x each daughter's share" : "Only sons inherit residue");
                    //Green
                    printf("    Each son gets: \033[1;32m%d\033[33m (Total for %d sons: \033[1;32m%d\033[33m)\n", 
                        sonPart, son, sonPart * son);
                if(daughter > 0) {
                    printf("    Each daughter gets: \033[1;32m%d\033[33m additional (Total for %d daughters: \033[1;32m%d\033[33m)\n", 
                    daughterPart, daughter, daughterPart * daughter);
                }
            }

        else if(
    maternalGrandmother == 1 &&
    mother == 2 &&
    father == 2 &&
    nChild == 0 &&
    spouse == 2 &&
    paternalGrandfather == 2 &&
    nSiblings == 0 &&
    (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    printResidueDistribution("Residue returns to maternal grandmother", remaining, "She is the only heir");
    printf("Maternal grandmother's total: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
           maternalGrandmotherShare, remaining, maternalGrandmotherShare + remaining);
}


            else if(
    (uterineBrothers + uterineSisters) > 0 &&
    father == 2 && mother == 2 &&
    spouse == 2 && nChild == 0 &&
    paternalGrandfather == 2 &&
    nSiblings == 0 && uncles == 2
) {
    printResidueDistribution("Residue returns to uterine siblings", remaining, "Only heirs are uterine siblings");

    int totalUterine = uterineBrothers + uterineSisters;
    int eachShare = remaining / totalUterine;

    printf("Each uterine sibling gets: \033[1;32m%d\033[0m\n", eachShare + uterineShare/totalUterine);
}


            else if(
    mother == 1 &&
    father == 2 &&
    spouse == 2 &&
    nChild == 0 &&
    paternalGrandfather == 2 &&
    maternalGrandmother == 2 &&
    nSiblings == 0 &&
    (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    printResidueDistribution("Residue returns to mother", remaining, "She is the only heir");
    printf("Mother's total share: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
           motherShare, remaining, motherShare + remaining);
}


            else if(
    gender == 2 &&  // Female deceased
    spouse == 1 && // Husband is alive
    nChild == 0 &&
    mother == 2 && father == 2 &&
    paternalGrandfather == 2 && maternalGrandmother == 2 &&
    nSiblings == 0 && (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    printResidueDistribution("Residue returns to husband", remaining, "He is the only heir");
    printf("Husband's total share: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
           husbandShare, remaining, husbandShare + remaining);
}

else if(
    gender == 1 &&  // Male deceased
    nSpouse > 0 &&  // Wife(s) alive
    nChild == 0 &&
    mother == 2 && father == 2 &&
    paternalGrandfather == 2 && maternalGrandmother == 2 &&
    nSiblings == 0 && (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    printResidueDistribution("Residue returns to wife(s)", remaining, "She is the only heir");
    if(nSpouse == 1) {
        printf("Wife's total share: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
               wifeShare, remaining, wifeShare + remaining);
    } else {
        printf("Total wives' share: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
               wifeShare, remaining, wifeShare + remaining);
        printf("Each wife gets: \033[1;32m%d\033[0m\n", (wifeShare + remaining) / nSpouse);
    }
}


            else if(father == 1 && son == 0) {
                printResidueDistribution("Father gets remaining residue", remaining, NULL);
                printf("Father's total share: %d (1/6) + %d (residue) = \033[1;32m%d\033[33m\n", 
                        fatherShare, remaining, fatherShare + remaining);
            }
            else if(paternalGrandfather == 1 && father == 2 && son == 0) {
                printResidueDistribution("Paternal grandfather gets remaining residue", remaining, NULL);
            }
            else if(nSiblings > 0 && father == 2 && paternalGrandfather == 2 && nChild == 0) {
                totalParts = (brotherFull * 2) + sisterFull;
                if(totalParts > 0) {
                    int brotherPart = (remaining * 2) / totalParts;
                    int sisterPart = remaining / totalParts;
                    
                    printResidueDistribution("Full siblings share residue", remaining, 
                        "Each brother gets 2x each sister's share");
                    if(brotherFull > 0) {
                        printf("    Each full brother gets: \033[1;32m%d\033[0m (Total: \033[1;32m%d\033[0m)\n", 
                               brotherPart, brotherPart * brotherFull);
                    }
                    if(sisterFull > 0) {
                        printf("    Each full sister gets: \033[1;32m%d\033[0m (Total: \033[1;32m%d\033[0m)\n", 
                               sisterPart, sisterPart * sisterFull);
                    }
                }
            }
            else if(
    mother == 1 &&
    father == 2 &&
    spouse == 1 &&
    gender == 1 && // Male deceased
    nChild == 0 &&
    paternalGrandfather == 2 &&
    maternalGrandmother == 2 &&
    nSiblings == 0 &&
    (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    printResidueDistribution("Residue returns to mother", remaining, "She is the only remaining heir after wife");
    printf("Mother's total share: %d (fixed) + %d (residue) = \033[1;32m%d\033[0m\n",
           motherShare, remaining, motherShare + remaining);
}
        else if(
    son == 0 && daughter == 0 &&
    father == 2 && paternalGrandfather == 2 &&
    mother == 2 && maternalGrandmother == 2 &&
    nChild == 0 && spouse == 2 &&
    brotherFull == 0 && sisterFull > 0 &&
    (uterineBrothers + uterineSisters) == 0 &&
    uncles == 2
) {
    if (sisterFull == 1) {
        int sisterShare = wealth / 2;
        printResidueDistribution("Full sister gets fixed share (1/2)", sisterShare, "No residuary heir");
        printf("Full sister's share: \033[1;32m%d\033[0m\n", sisterShare);
    } else {
        int totalShare = (wealth * 2) / 3;
        int each = totalShare / sisterFull;
        printResidueDistribution("Full sisters get fixed share (2/3)", totalShare, "Divided equally, no residuary heir");
        printf("Each sister gets: \033[1;32m%d\033[0m (Total: \033[1;32m%d\033[0m)\n", each, totalShare);
    }
}


            else if(uncles == 1 && nUncles > 0 && 
        father == 2 && paternalGrandfather == 2 &&
        nSiblings == 0 && nChild == 0) {
    printResidueDistribution("Paternal uncles share residue", remaining, NULL);
    printf("Each paternal uncle gets: \033[1;32m%d\033[0m (Total for %d uncles: \033[1;32m%d\033[0m)\n",
           remaining / nUncles, nUncles, remaining);
}

            else if(
    daughter > 0 && son == 0 &&
    father == 2 && paternalGrandfather == 2 &&
    nSiblings == 0 && uncles == 2 &&
    (uterineBrothers + uterineSisters) == 0
) {
    printResidueDistribution("Residue returns to daughters", remaining, NULL);
    printf("Each daughter gets additional: \033[1;32m%d\033[0m\n", remaining / daughter);
}

    else {
    // Final fallback: apply Radd to fixed-share heirs excluding spouse
    printResidueDistribution("Radd: Residue returned to fixed-share heirs", remaining, "Spouse excluded from Radd");

    int totalFixedExcludingSpouse = 0;
    if (mother == 1) totalFixedExcludingSpouse += motherShare;
    if (father == 1) totalFixedExcludingSpouse += fatherShare;
    if (maternalGrandmother == 1) totalFixedExcludingSpouse += maternalGrandmotherShare;
    if (uterineBrothers + uterineSisters > 0) totalFixedExcludingSpouse += uterineShare;
    if (daughter > 0 && son == 0) totalFixedExcludingSpouse += daughterFixedShare;
    // You can also add sister fixed share here if added above

    if (totalFixedExcludingSpouse > 0) {
        if (mother == 1) {
            int extra = (motherShare * remaining) / totalFixedExcludingSpouse;
            printf("Mother receives Radd: \033[1;32m%d\033[0m → Total: \033[1;32m%d\033[0m\n", extra, motherShare + extra);
        }
        if (father == 1) {
            int extra = (fatherShare * remaining) / totalFixedExcludingSpouse;
            printf("Father receives Radd: \033[1;32m%d\033[0m → Total: \033[1;32m%d\033[0m\n", extra, fatherShare + extra);
        }
        if (maternalGrandmother == 1) {
            int extra = (maternalGrandmotherShare * remaining) / totalFixedExcludingSpouse;
            printf("Maternal grandmother receives Radd: \033[1;32m%d\033[0m → Total: \033[1;32m%d\033[0m\n", extra, maternalGrandmotherShare + extra);
        }
        if (uterineBrothers + uterineSisters > 0) {
            int totalUterine = uterineBrothers + uterineSisters;
            int extra = (uterineShare * remaining) / totalFixedExcludingSpouse;
            int eachExtra = extra / totalUterine;
            printf("Each uterine sibling receives Radd: \033[1;32m%d\033[0m (added to fixed)\n", eachExtra);
        }
        if (daughter > 0 && son == 0) {
            int extra = (daughterFixedShare * remaining) / totalFixedExcludingSpouse;
            int eachExtra = extra / daughter;
            printf("Each daughter receives Radd: \033[1;32m%d\033[0m (added to fixed)\n", eachExtra);
        }
    } else {
        printError("No eligible heirs for Radd — check fiqh logic");
    }
}


        }
    }
    printf("\n");
    printSeparator();
    printCenteredBox("       INHERITANCE SUMMARY");
    printSeparator();
    
    printTableHeader();
    printTable("TOTAL ESTATE", "Original", wealth);
    
    if(isAwlCase) {
        printTable("AWL CASE", "Proportional", wealth);
        printTable("All shares adjusted", "to total", wealth);
    } else {
        printTable("Fixed Shares", "Total", fixedShares);
        printTable("Residue Distributed", "Remaining", remaining);
        printTable("Total Distributed", "Sum", fixedShares + remaining);
    }
    
    printTableFooter();
    
    printf("\n");
    printSeparator();
    printCenteredBox("  INHERITANCE CALCULATION COMPLETE");
    printf("\n");
    printf("Note: This follows major Islamic inheritance rules including Awl cases\n");
    printf("For complex cases, consult qualified Islamic scholars\n\n");
    
    return 0;
}