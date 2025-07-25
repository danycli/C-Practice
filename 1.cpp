#include<stdio.h>
#include<math.h>

#define CONSOLE_WIDTH 80

int main(){
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
    int totalFixedShares = 0;
    int isAwlCase = 0;
    
    printf("=== ISLAMIC INHERITENCE CALCULATOR ===\n\n");
    printf("What is the total wealth left by the deceased person?\nEnter: ");
    scanf("%d", &wealth);
    
    if(wealth <= 0){
        printf("Error: Wealth must be greater than 0\n");
        return 0;
    }
    
    printf("Who is the deceased person?\n1. Male\n2. Female\nChoose: ");
    scanf("%d", &gender);
    
    while(gender < 1 || gender > 2){
        printf("Invalid choice!\nTry Again (1 or 2): ");
        scanf("%d", &gender);
    }
    
    printf("\n=== CHECKING PRIMARY HEIRS ===\n");
    
    if(gender == 1){
        printf("Is wife alive?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &spouse);
        
        while(spouse < 1 || spouse > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &spouse);
        }
        
        if(spouse == 1){
            printf("Enter the number of wives: ");
            scanf("%d", &nSpouse);
            while(nSpouse < 1 || nSpouse > 4){
                printf("Number of wives should be between 1-4\nTry again: ");
                scanf("%d", &nSpouse);
            }
            totalHeirs++;
        } else {
            nSpouse = 0;
        }
    } else {
        printf("Is husband alive?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &spouse);
        
        while(spouse < 1 || spouse > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &spouse);
        }
        
        if(spouse == 1){
            nSpouse = 1;
            totalHeirs++;
        } else {
            nSpouse = 0;
        }
    }
    
    printf("Is there any child?\n1. YES\n2. NO\nChoose: ");
    scanf("%d", &child);
    
    while(child < 1 || child > 2){
        printf("Invalid choice!\nTry Again (1 or 2): ");
        scanf("%d", &child);
    }
    
    if(child == 1){
        printf("How many children are there?\nEnter: ");
        scanf("%d", &nChild);
        printf("Number of sons: ");
        scanf("%d", &son);
        printf("Number of daughters: ");
        scanf("%d", &daughter);
        
        while(daughter + son != nChild){
            printf("Sum of sons and daughters doesn't match total children!\nTry Again...\n");
            printf("Number of sons: ");
            scanf("%d", &son);
            printf("Number of daughters: ");
            scanf("%d", &daughter);
        }
        if(nChild > 0) totalHeirs++;
    } else {
        nChild = 0;
        son = 0;
        daughter = 0;
    }
    
    printf("Is mother alive?\n1. YES\n2. NO\nChoose: ");
    scanf("%d", &mother);
    
    while(mother < 1 || mother > 2){
        printf("Invalid choice!\nTry Again (1 or 2): ");
        scanf("%d", &mother);
    }
    if(mother == 1) totalHeirs++;
    
    printf("Is father alive?\n1. YES\n2. NO\nChoose: ");
    scanf("%d", &father);
    
    while(father < 1 || father > 2){
        printf("Invalid choice!\nTry Again (1 or 2): ");
        scanf("%d", &father);
    }
    if(father == 1) totalHeirs++;
    
    // SIBLINGS
    if(nChild == 0 && father == 2){
        printf("Are there any full siblings (same father and mother)?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &siblings);
        
        while(siblings < 1 || siblings > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &siblings);
        }
        
        if(siblings == 1){
            printf("How many full brothers: ");
            scanf("%d", &brotherFull);
            printf("How many full sisters: ");
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
    
    // UTERINE SIBLINGS DETAILS
    if(nChild == 0 && father == 2){
        printf("Are there any uterine siblings ?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &uterineSiblings);
        
        while(uterineSiblings < 1 || uterineSiblings > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &uterineSiblings);
        }
        
        if(uterineSiblings == 1){
            printf("How many uterine brothers: ");
            scanf("%d", &uterineBrothers);
            printf("How many uterine sisters: ");
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
    
    // GRANDPARENTS
    paternalGrandfather = 2;
    maternalGrandmother = 2;
    if(mother == 2 && father == 2){
        printf("Is paternal grandfather alive?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &paternalGrandfather);
        
        while(paternalGrandfather < 1 || paternalGrandfather > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &paternalGrandfather);
        }
        if(paternalGrandfather == 1) totalHeirs++;
        
        printf("Is maternal grandmother alive?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &maternalGrandmother);
        
        while(maternalGrandmother < 1 || maternalGrandmother > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &maternalGrandmother);
        }
        if(maternalGrandmother == 1) totalHeirs++;
    }
    
    // UNCLES/AUNTS DETAILS
    if(nChild == 0 && father == 2 && nSiblings == 0 && paternalGrandfather == 2){
        printf("Are there any paternal uncles alive?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &uncles);
        
        while(uncles < 1 || uncles > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &uncles);
        }
        if(uncles == 1) totalHeirs++;
    } else {
        uncles = 2;
    }
    
    //EXTENDED RELATIVES
    if(totalHeirs == 0){
        printf("\n=== NO PRIMARY HEIRS FOUND ===\n");
        printf("Checking for Extended Relatives...\n\n");
        
        //DAUGHTER CHILDREN
        printf("Are there any children of daughters?\n1. YES\n2. NO\nChoose: ");
        scanf("%d", &daughterChildren);
        
        while(daughterChildren < 1 || daughterChildren > 2){
            printf("Invalid choice!\nTry Again (1 or 2): ");
            scanf("%d", &daughterChildren);
        }
        if(daughterChildren == 1) extendedRelatives++;
        
        if(daughterChildren == 2){
            //SISTER CHILDREN
            printf("Are there any children of sisters?\n1. YES\n2. NO\nChoose: ");
            scanf("%d", &sisterChildren);
            
            while(sisterChildren < 1 || sisterChildren > 2){
                printf("Invalid choice!\nTry Again (1 or 2): ");
                scanf("%d", &sisterChildren);
            }
            if(sisterChildren == 1) extendedRelatives++;
            
            if(sisterChildren == 2){
                printf("Are there any maternal uncles/aunts?\n1. YES\n2. NO\nChoose: ");
                scanf("%d", &maternalUncle);
                
                while(maternalUncle < 1 || maternalUncle > 2){
                    printf("Invalid choice!\nTry Again (1 or 2): ");
                    scanf("%d", &maternalUncle);
                }
                if(maternalUncle == 1) extendedRelatives++;
                
                if(maternalUncle == 2){
                    printf("Are there any paternal aunts?\n1. YES\n2. NO\nChoose: ");
                    scanf("%d", &paternalAunt);
                    
                    while(paternalAunt < 1 || paternalAunt > 2){
                        printf("Invalid choice!\nTry Again (1 or 2): ");
                        scanf("%d", &paternalAunt);
                    }
                    if(paternalAunt == 1) extendedRelatives++;
                    
                    //MORE DISTANT RELATIVES
                    if(paternalAunt == 2){
                        printf("Are there any maternal cousins?\n1. YES\n2. NO\nChoose: ");
                        scanf("%d", &maternalCousins);
                        
                        while(maternalCousins < 1 || maternalCousins > 2){
                            printf("Invalid choice!\nTry Again (1 or 2): ");
                            scanf("%d", &maternalCousins);
                        }
                        if(maternalCousins == 1) extendedRelatives++;
                        
                        if(maternalCousins == 2){
                            printf("Are there any paternal female cousins?\n1. YES\n2. NO\nChoose: ");
                            scanf("%d", &paternalCousins);
                            
                            while(paternalCousins < 1 || paternalCousins > 2){
                                printf("Invalid choice!\nTry Again (1 or 2): ");
                                scanf("%d", &paternalCousins);
                            }
                            if(paternalCousins == 1) extendedRelatives++;
                        }
                    }
                }
            }
        }
    }
    
    printf("\n=== INHERITANCE CALCULATION RESULTS ===\n");
    
    if(totalHeirs == 0 && extendedRelatives == 0){
        printf("SPECIAL CASE: NO HEIRS FOUND AT ALL\n");
        printf("================================================================\n");
        printf("Total wealth: %d goes to Islamic Treasury for public welfare\n", wealth);
        return 0;
    }
    
    if(totalHeirs == 0 && extendedRelatives > 0){
        printf("EXTENDED RELATIVES INHERITANCE\n");
        printf("================================================================\n");
        printf("No primary heirs found. Extended relatives inherit.\n");
        printf("Total wealth: %d\n\n", wealth);
        
        if(daughterChildren == 1){
            printf("HEIR: Children of Daughters get entire estate: %d\n", wealth);
        }
        else if(sisterChildren == 1){
            printf("HEIR: Children of Sisters get entire estate: %d\n", wealth);
        }
        else if(maternalUncle == 1){
            printf("HEIR: Maternal Uncles/Aunts get entire estate: %d\n", wealth);
        }
        else if(paternalAunt == 1){
            printf("HEIR: Paternal Aunts get entire estate: %d\n", wealth);
        }
        else if(maternalCousins == 1){
            printf("HEIR: Maternal Cousins get entire estate: %d\n", wealth);
        }
        else if(paternalCousins == 1){
            printf("HEIR: Paternal Female Cousins get entire estate: %d\n", wealth);
        }
        
        return 0;
    }
    
    //CALCULATION FOR PRIMARY HEIRS
    printf("Primary heirs found: %d\n", totalHeirs);
    printf("================================================================\n");
    
    wifeShare = 0;
    husbandShare = 0;
    motherShare = 0;
    fatherShare = 0;
    daughterFixedShare = 0;
    uterineShare = 0;
    paternalGrandfatherShare = 0;
    maternalGrandmotherShare = 0;
    fixedShares = 0;
    

    if(gender == 1){
        printf("MALE DECEASED - INHERITANCE DISTRIBUTION:\n\n");
        

        if(nSpouse > 0){
            if(nChild > 0){
                wifeShare = wealth / 8; 
                printf("Wife(s) share (1/8): %d", wifeShare);
            } else {
                wifeShare = wealth / 4;
                printf("Wife(s) share (1/4): %d", wifeShare);
            }
            if(nSpouse > 1){
                printf(" (Each wife: %d)", wifeShare / nSpouse);
            }
            printf("\n");
            fixedShares += wifeShare;
        }
        
    } else {
        printf("FEMALE DECEASED - INHERITANCE DISTRIBUTION:\n\n");
        
    
        if(spouse == 1){
            if(nChild > 0){
                husbandShare = wealth / 4;
                printf("Husband share (1/4): %d\n", husbandShare);
            } else {
                husbandShare = wealth / 2; 
                printf("Husband share (1/2): %d\n", husbandShare);
            }
            fixedShares += husbandShare;
        }
    }
    

    if(mother == 1){
        if(nChild > 0 || nSiblings >= 2 || (uterineBrothers + uterineSisters) >= 2){
            motherShare = wealth / 6; 
            printf("Mother share (1/6): %d\n", motherShare);
        } else {
            motherShare = wealth / 3; 
            printf("Mother share (1/3): %d\n", motherShare);
        }
        fixedShares += motherShare;
    }
    
  
    if(father == 1){
        fatherShare = wealth / 6;
        printf("Father share (1/6): %d", fatherShare);
        fixedShares += fatherShare;
        printf("\n");
    }
    
 
    if(daughter > 0 && son == 0){
        if(daughter == 1){
            daughterFixedShare = wealth / 2; 
            printf("Daughter share (1/2): %d\n", daughterFixedShare);
        } else {
            daughterFixedShare = (wealth * 2) / 3;
            printf("Daughters share (2/3): %d (Each daughter: %d)\n", 
                   daughterFixedShare, daughterFixedShare / daughter);
        }
        fixedShares += daughterFixedShare;
    }
    

    if(uterineBrothers + uterineSisters > 0){
        if(uterineBrothers + uterineSisters == 1){
            uterineShare = wealth / 6;
            printf("Uterine sibling share (1/6): %d\n", uterineShare);
        } else {
            uterineShare = wealth / 3; 
            printf("Uterine siblings share (1/3): %d (Each gets: %d)\n", 
                   uterineShare, uterineShare / (uterineBrothers + uterineSisters));
        }
        fixedShares += uterineShare;
    }
    
 
    if(maternalGrandmother == 1){
        maternalGrandmotherShare = wealth / 6;
        printf("Maternal grandmother share (1/6): %d\n", maternalGrandmotherShare);
        fixedShares += maternalGrandmotherShare;
    }
    

    if(fixedShares > wealth){
        isAwlCase = 1;
        printf("\n*** AWL CASE DETECTED ***\n");
        printf("Fixed shares total (%d) exceeds estate (%d)\n", fixedShares, wealth);
        printf("Applying proportional reduction:\n\n");
        
        //RECALCULATING
        if(wifeShare > 0){
            wifeShare = (wifeShare * wealth) / fixedShares;
            printf("Wife(s) adjusted share: %d", wifeShare);
            if(nSpouse > 1){
                printf(" (Each wife: %d)", wifeShare / nSpouse);
            }
            printf("\n");
        }
        
        if(husbandShare > 0){
            husbandShare = (husbandShare * wealth) / fixedShares;
            printf("Husband adjusted share: %d\n", husbandShare);
        }
        
        if(motherShare > 0){
            motherShare = (motherShare * wealth) / fixedShares;
            printf("Mother adjusted share: %d\n", motherShare);
        }
        
        if(fatherShare > 0){
            fatherShare = (fatherShare * wealth) / fixedShares;
            printf("Father adjusted share: %d\n", fatherShare);
        }
        
        if(daughterFixedShare > 0){
            daughterFixedShare = (daughterFixedShare * wealth) / fixedShares;
            printf("Daughters adjusted share: %d (Each: %d)\n", 
                   daughterFixedShare, daughterFixedShare / daughter);
        }
        
        if(uterineShare > 0){
            uterineShare = (uterineShare * wealth) / fixedShares;
            printf("Uterine siblings adjusted share: %d (Each: %d)\n", 
                   uterineShare, uterineShare / (uterineBrothers + uterineSisters));
        }
        
        if(maternalGrandmotherShare > 0){
            maternalGrandmotherShare = (maternalGrandmotherShare * wealth) / fixedShares;
            printf("Maternal grandmother adjusted share: %d\n", maternalGrandmotherShare);
        }
        
        remaining = 0;
    } else {
        remaining = wealth - fixedShares;
        
        printf("\nFixed shares total: %d, Remaining for residue: %d\n", fixedShares, remaining);
        
        
        if(remaining > 0){
            if(son > 0){
                totalParts = (son * 2) + daughter;
                sonPart = (remaining * 2) / totalParts;
                daughterPart = remaining / totalParts;
                
                printf("\nSons and daughters share residue: %d\n", remaining);
                printf("   Each son gets: %d (Total for %d sons: %d)\n", 
                       sonPart, son, sonPart * son);
                if(daughter > 0){
                    printf("   Each daughter gets: %d additional (Total for %d daughters: %d)\n", 
                           daughterPart, daughter, daughterPart * daughter);
                }
            }
            else if(father == 1 && son == 0){
                printf("\nFather gets remaining residue: %d\n", remaining);
                printf("Father's total share: %d (1/6) + %d (residue) = %d\n", 
                       fatherShare, remaining, fatherShare + remaining);
            }
            else if(paternalGrandfather == 1 && father == 2 && son == 0){
                printf("\nPaternal grandfather gets remaining residue: %d\n", remaining);
            }
            else if(nSiblings > 0 && father == 2 && paternalGrandfather == 2 && nChild == 0){
                totalParts = (brotherFull * 2) + sisterFull;
                if(totalParts > 0){
                    int brotherPart = (remaining * 2) / totalParts;
                    int sisterPart = remaining / totalParts;
                    
                    printf("\nFull siblings share residue: %d\n", remaining);
                    if(brotherFull > 0){
                        printf("   Each full brother gets: %d (Total: %d)\n", 
                               brotherPart, brotherPart * brotherFull);
                    }
                    if(sisterFull > 0){
                        printf("   Each full sister gets: %d (Total: %d)\n", 
                               sisterPart, sisterPart * sisterFull);
                    }
                }
            }
            else if(uncles == 1){
                printf("\nPaternal uncles get remaining residue: %d\n", remaining);
            }
            else if(daughter > 0 && son == 0 && father == 2 && paternalGrandfather == 2 && nSiblings == 0){
                printf("\nNo residuary heirs found. Residue returns to daughters: %d\n", remaining);
                printf("Each daughter gets additional: %d\n", remaining / daughter);
            }
        }
    }
    
    printf("\n================================================================\n");
    printf("INHERITANCE SUMMARY:\n");
    printf("Total Estate: %d\n", wealth);
    if(isAwlCase){
        printf("AWL CASE: Fixed shares exceeded estate, proportional reduction applied\n");
        printf("All shares adjusted to total: %d\n", wealth);
    } else {
        printf("Fixed Shares: %d\n", fixedShares);
        printf("Residue Distributed: %d\n", remaining);
        printf("Total Distributed: %d\n", fixedShares + remaining);
    }
    
    printf("\n================================================================\n");
    printf("INHERITANCE CALCULATION COMPLETE\n");
    printf("Note: This follows major Islamic inheritance rules including Awl cases\n");
    printf("For complex cases, consult qualified Islamic scholars\n");
    
    return 0;
}
