#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define CONSOLE_WIDTH 120

void printCenteredBox(const char* message) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║    %s    ║\n", message);
    
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
    int questionLen = strlen(question);
    int boxWidth = questionLen + 8;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  %s  ║\n", question);
    
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
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  \033[1;31m%s\033[0m  ║\n", message);
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
}

void printChoicePrompt(const char* question, const char* option1, const char* option2) {
    int questionLen = strlen(question);
    int option1Len = strlen(option1);
    int option2Len = strlen(option2);
    int maxLen = questionLen;
    if(option1Len + 4 > maxLen) maxLen = option1Len + 4;
    if(option2Len + 4 > maxLen) maxLen = option2Len + 4;
    int boxWidth = maxLen + 8;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  %s", question);
    for (int i = questionLen; i < maxLen; i++) printf(" ");
    printf("  ║\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╠");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╣\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  ➤ 1. %s", option1);
    for (int i = option1Len + 4; i < maxLen; i++) printf(" ");
    printf("  ║\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║  ➤ 2. %s", option2);
    for (int i = option2Len + 4; i < maxLen; i++) printf(" ");
    printf("  ║\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("   ▶ Enter your choice: ");
}

void printTable(const char* col1, const char* col2, int amount) {
    int sideSpaces = (CONSOLE_WIDTH - 65) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("│ %-25s │ %-15s │ %10d │\n", col1, col2, amount);
}

void printTableHeader() {
    int sideSpaces = (CONSOLE_WIDTH - 65) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("┌───────────────────────────┬─────────────────┬────────────┐\n");
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("│ HEIR                      │ SHARE TYPE      │ AMOUNT     │\n");
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("├───────────────────────────┼─────────────────┼────────────┤\n");
}

void printTableFooter() {
    int sideSpaces = (CONSOLE_WIDTH - 65) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("└───────────────────────────┴─────────────────┴────────────┘\n");
}

void printResidueDistribution(const char* title, int amount, const char* details) {
    int sideSpaces = (CONSOLE_WIDTH - 60) / 2;
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔════════════════════════════════════════════════════════╗\n");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║ %-56s ║\n", title);
    
    if (details != NULL) {
        for (int i = 0; i < sideSpaces; i++) printf(" ");
        printf("║ %-56s ║\n", details);
    }
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║ \033[1;33mAmount: %-47d\033[0m ║\n", amount);
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚════════════════════════════════════════════════════════╝\n");
}

int main() {
    system("chcp 65001 > nul");
    
    int gender, spouse, nSpouse, wealth, child, nChild, son, daughter;
    int mother, father, siblings, nSiblings, brotherFull, sisterFull;
    int uterineSiblings, uterineBrothers, uterineSisters;
    int grandparents, paternalGrandfather, maternalGrandmother, uncles;
    int wifeShare, husbandShare, motherShare, fatherShare, daughterFixedShare;
    int uterineShare, paternalGrandfatherShare, maternalGrandmotherShare;
    int remaining, totalParts, sonPart, daughterPart;
    int totalHeirs = 0;
    
    int daughterChildren, sisterChildren, maternalUncle, paternalAunt;
    int maternalCousins, paternalCousins;
    int extendedRelatives = 0;
    
    int fixedShares = 0;
    int isAwlCase = 0;
    
    printf("\n");
    printCenteredBox("ISLAMIC INHERITANCE CALCULATOR");
    printf("\n");
    printSeparator();
    printf("\n");
    
    printPrompt("What is the total wealth left by the deceased person?");
    scanf("%d", &wealth);
    
    if(wealth <= 0) {
        printError("ERROR: Wealth must be greater than 0");
        return 0;
    }
    
    printChoicePrompt("Who is the deceased person?", "Male", "Female");
    scanf("%d", &gender);
    
    while(gender < 1 || gender > 2) {
        printError("Invalid choice! Please enter 1 for Male or 2 for Female");
        printf("   ▶ Try again: ");
        scanf("%d", &gender);
    }
    
    printSectionHeader("CHECKING PRIMARY HEIRS");
    
    if(gender == 1) {
        printChoicePrompt("Is wife alive?", "YES", "NO");
        scanf("%d", &spouse);
        
        while(spouse < 1 || spouse > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &spouse);
        }
        
        if(spouse == 1) {
            printPrompt("Enter the number of wives:");
            scanf("%d", &nSpouse);
            while(nSpouse < 1 || nSpouse > 4) {
                printError("Number of wives should be between 1-4");
                printf("   ▶ Try again: ");
                scanf("%d", &nSpouse);
            }
            totalHeirs++;
        } else {
            nSpouse = 0;
        }
    } else {
        printChoicePrompt("Is husband alive?", "YES", "NO");
        scanf("%d", &spouse);
        
        while(spouse < 1 || spouse > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &spouse);
        }
        
        if(spouse == 1) {
            nSpouse = 1;
            totalHeirs++;
        } else {
            nSpouse = 0;
        }
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
        scanf("%d", &nChild);
        printPrompt("Number of sons:");
        scanf("%d", &son);
        printPrompt("Number of daughters:");
        scanf("%d", &daughter);
        
        while(daughter + son != nChild) {
            printError("Sum of sons and daughters doesn't match total children!");
            printPrompt("Number of sons:");
            scanf("%d", &son);
            printPrompt("Number of daughters:");
            scanf("%d", &daughter);
        }
        if(nChild > 0) totalHeirs++;
    } else {
        nChild = 0;
        son = 0;
        daughter = 0;
    }
    
    printChoicePrompt("Is mother alive?", "YES", "NO");
    scanf("%d", &mother);
    while(mother < 1 || mother > 2) {
        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
        printf("   ▶ Try again: ");
        scanf("%d", &mother);
    }
    if(mother == 1) totalHeirs++;
    
    printChoicePrompt("Is father alive?", "YES", "NO");
    scanf("%d", &father);
    while(father < 1 || father > 2) {
        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
        printf("   ▶ Try again: ");
        scanf("%d", &father);
    }
    if(father == 1) totalHeirs++;
    
    if(nChild == 0 && father == 2) {
        printChoicePrompt("Are there any full siblings (same father and mother)?", "YES", "NO");
        scanf("%d", &siblings);
        
        while(siblings < 1 || siblings > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &siblings);
        }
        
        if(siblings == 1) {
            printPrompt("How many full brothers:");
            scanf("%d", &brotherFull);
            printPrompt("How many full sisters:");
            scanf("%d", &sisterFull);
            nSiblings = brotherFull + sisterFull;
            if(nSiblings > 0) totalHeirs++;
        } else {
            nSiblings = 0;
            brotherFull = 0;
            sisterFull = 0;
        }
    } else {
        siblings = 2;
        nSiblings = 0;
        brotherFull = 0;
        sisterFull = 0;
    }
    
    if(nChild == 0 && father == 2) {
        printChoicePrompt("Are there any uterine siblings?", "YES", "NO");
        scanf("%d", &uterineSiblings);
        
        while(uterineSiblings < 1 || uterineSiblings > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &uterineSiblings);
        }
        
        if(uterineSiblings == 1) {
            printPrompt("How many uterine brothers:");
            scanf("%d", &uterineBrothers);
            printPrompt("How many uterine sisters:");
            scanf("%d", &uterineSisters);
            if(uterineBrothers + uterineSisters > 0) totalHeirs++;
        } else {
            uterineBrothers = 0;
            uterineSisters = 0;
        }
    } else {
        uterineSiblings = 2;
        uterineBrothers = 0;
        uterineSisters = 0;
    }
    
    paternalGrandfather = 2;
    maternalGrandmother = 2;
    if(mother == 2 && father == 2) {
        printChoicePrompt("Is paternal grandfather alive?", "YES", "NO");
        scanf("%d", &paternalGrandfather);
        while(paternalGrandfather < 1 || paternalGrandfather > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &paternalGrandfather);
        }
        if(paternalGrandfather == 1) totalHeirs++;
        
        printChoicePrompt("Is maternal grandmother alive?", "YES", "NO");
        scanf("%d", &maternalGrandmother);
        while(maternalGrandmother < 1 || maternalGrandmother > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &maternalGrandmother);
        }
        if(maternalGrandmother == 1) totalHeirs++;
    }
    
    if(nChild == 0 && father == 2 && nSiblings == 0 && paternalGrandfather == 2) {
        printChoicePrompt("Are there any paternal uncles alive?", "YES", "NO");
        scanf("%d", &uncles);
        while(uncles < 1 || uncles > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &uncles);
        }
        if(uncles == 1) totalHeirs++;
    } else {
        uncles = 2;
    }
    
    if(totalHeirs == 0) {
        printSectionHeader("NO PRIMARY HEIRS FOUND");
        printf("Checking for Extended Relatives...\n\n");
        
        printChoicePrompt("Are there any children of daughters?", "YES", "NO");
        scanf("%d", &daughterChildren);
        while(daughterChildren < 1 || daughterChildren > 2) {
            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
            printf("   ▶ Try again: ");
            scanf("%d", &daughterChildren);
        }
        if(daughterChildren == 1) extendedRelatives++;
        
        if(daughterChildren == 2) {
            printChoicePrompt("Are there any children of sisters?", "YES", "NO");
            scanf("%d", &sisterChildren);
            while(sisterChildren < 1 || sisterChildren > 2) {
                printError("Invalid choice! Please enter 1 for YES or 2 for NO");
                printf("   ▶ Try again: ");
                scanf("%d", &sisterChildren);
            }
            if(sisterChildren == 1) extendedRelatives++;
            
            if(sisterChildren == 2) {
                printChoicePrompt("Are there any maternal uncles/aunts?", "YES", "NO");
                scanf("%d", &maternalUncle);
                while(maternalUncle < 1 || maternalUncle > 2) {
                    printError("Invalid choice! Please enter 1 for YES or 2 for NO");
                    printf("   ▶ Try again: ");
                    scanf("%d", &maternalUncle);
                }
                if(maternalUncle == 1) extendedRelatives++;
                
                if(maternalUncle == 2) {
                    printChoicePrompt("Are there any paternal aunts?", "YES", "NO");
                    scanf("%d", &paternalAunt);
                    while(paternalAunt < 1 || paternalAunt > 2) {
                        printError("Invalid choice! Please enter 1 for YES or 2 for NO");
                        printf("   ▶ Try again: ");
                        scanf("%d", &paternalAunt);
                    }
                    if(paternalAunt == 1) extendedRelatives++;
                    
                    if(paternalAunt == 2) {
                        printChoicePrompt("Are there any maternal cousins?", "YES", "NO");
                        scanf("%d", &maternalCousins);
                        while(maternalCousins < 1 || maternalCousins > 2) {
                            printError("Invalid choice! Please enter 1 for YES or 2 for NO");
                            printf("   ▶ Try again: ");
                            scanf("%d", &maternalCousins);
                        }
                        if(maternalCousins == 1) extendedRelatives++;
                        
                        if(maternalCousins == 2) {
                            printChoicePrompt("Are there any paternal female cousins?", "YES", "NO");
                            scanf("%d", &paternalCousins);
                            while(paternalCousins < 1 || paternalCousins > 2) {
                                printError("Invalid choice! Please enter 1 for YES or 2 for NO");
                                printf("   ▶ Try again: ");
                                scanf("%d", &paternalCousins);
                            }
                            if(paternalCousins == 1) extendedRelatives++;
                        }
                    }
                }
            }
        }
    }
    
    printSectionHeader("INHERITANCE CALCULATION RESULTS");
    
    if(totalHeirs == 0 && extendedRelatives == 0) {
        printCenteredBox("SPECIAL CASE: NO HEIRS FOUND AT ALL");
        printSeparator();
        printf("\nTotal wealth: %d goes to Islamic Treasury for public welfare\n", wealth);
        return 0;
    }
    
    if(totalHeirs == 0 && extendedRelatives > 0) {
        printCenteredBox("EXTENDED RELATIVES INHERITANCE");
        printSeparator();
        printf("\nNo primary heirs found. Extended relatives inherit.\n");
        printf("Total wealth: %d\n\n", wealth);
        
        if(daughterChildren == 1) {
            printf("HEIR: Children of Daughters get entire estate: %d\n", wealth);
        } else if(sisterChildren == 1) {
            printf("HEIR: Children of Sisters get entire estate: %d\n", wealth);
        } else if(maternalUncle == 1) {
            printf("HEIR: Maternal Uncles/Aunts get entire estate: %d\n", wealth);
        } else if(paternalAunt == 1) {
            printf("HEIR: Paternal Aunts get entire estate: %d\n", wealth);
        } else if(maternalCousins == 1) {
            printf("HEIR: Maternal Cousins get entire estate: %d\n", wealth);
        } else if(paternalCousins == 1) {
            printf("HEIR: Paternal Female Cousins get entire estate: %d\n", wealth);
        }
        return 0;
    }
    
    printf("Primary heirs found: %d\n", totalHeirs);
    printSeparator();
    
    wifeShare = 0;
    husbandShare = 0;
    motherShare = 0;
    fatherShare = 0;
    daughterFixedShare = 0;
    uterineShare = 0;
    paternalGrandfatherShare = 0;
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
    
    if(mother == 1) {
        if(nChild > 0 || nSiblings >= 2 || (uterineBrothers + uterineSisters) >= 2) {
            motherShare = wealth / 6;
            printf("Mother share (1/6): %d\n", motherShare);
        } else {
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
                printf("    Each son gets: \033[1;32m%d\033[0m (Total for %d sons: \033[1;32m%d\033[0m)\n", 
                       sonPart, son, sonPart * son);
                if(daughter > 0) {
                    printf("    Each daughter gets: \033[1;32m%d\033[0m additional (Total for %d daughters: \033[1;32m%d\033[0m)\n", 
                           daughterPart, daughter, daughterPart * daughter);
                }
            }
            else if(father == 1 && son == 0) {
                printResidueDistribution("Father gets remaining residue", remaining, NULL);
                printf("Father's total share: %d (1/6) + %d (residue) = \033[1;32m%d\033[0m\n", 
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
            else if(uncles == 1) {
                printResidueDistribution("Paternal uncles get remaining residue", remaining, NULL);
            }
            else if(daughter > 0 && son == 0 && father == 2 && paternalGrandfather == 2 && nSiblings == 0) {
                printResidueDistribution("Residue returns to daughters", remaining, NULL);
                printf("Each daughter gets additional: \033[1;32m%d\033[0m\n", remaining / daughter);
            }
        }
    }
    
    printf("\n");
    printSeparator();
    printCenteredBox("INHERITANCE SUMMARY");
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
    printCenteredBox("INHERITANCE CALCULATION COMPLETE");
    printf("\n");
    printf("Note: This follows major Islamic inheritance rules including Awl cases\n");
    printf("For complex cases, consult qualified Islamic scholars\n\n");
    
    return 0;
}