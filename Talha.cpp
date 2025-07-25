//PF project

#include <stdio.h>
int main() {
    char letter;
    int choice;
    int response;
    int step;

    printf("=====================================================\n");
    printf("|                                                   |\n");
    printf("|    ????????      ??????       ??????              |\n");
    printf("|    ????????     ????????     ????????             |\n");
    printf("|    ??????       ????????     ????????             |\n");
    printf("|    ??????       ????????     ????????             |\n");
    printf("|    ???          ???  ???     ???  ???             |\n");
    printf("|    ???          ???  ???     ???  ???             |\n");
    printf("|                                                   |\n");
    printf("|      WELCOME TO THE F  A  A . SYSTEM              |\n");
    printf("|        (First Aid Assistance Program)             |\n");
    printf("|                                                   |\n");
    printf("=====================================================\n\n");

    printf(" ?? Enter the *first letter* of the problem you're facing.\n");
    printf("    For example:\n");
    printf("    A for Allergies\n");
    printf("    B for Burns\n");
    printf("    C for Choking\n");
    printf("    ... all the way to Z\n\n");

    printf(" ?? Your Choice: ");
    scanf(" %c", &letter);

    // Continue with switch-case logic...


    switch(letter) {
        case 'a':
        case 'A':
            printf("\nProblems starting with 'A':\n");
            printf("1. Allergic Reaction\n");
            printf("2. Asthma Attack\n");
            printf("3. Animal Bite\n");
            printf("4. Abdominal Pain\n");
            printf("5. Amputation\n");
            printf("6. Ankle Sprain\n");
            printf("Choose the problem (1-6): ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("\n--- You selected: ALLERGIC REACTION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Remove the allergen if possible.\n");
                        printf("Do you have gloves or something to protect your hands?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Great, carefully remove the allergen.\n");
                            step++;
                        } else {
                            printf("Alternative: Use a cloth or barrier to protect your hands.\n");
                            printf("Do you have that?\n[1] Yes\n[2] No\nYour choice: ");
                            scanf("%d", &response);
                            if (response == 1) {
                                printf("Use that to remove the allergen.\n");
                                step++;
                            } else {
                                printf("No protection available. Call emergency services immediately.\n");
                                break;
                            }
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Administer an antihistamine if available.\n");
                        printf("Do you have antihistamine medication?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Give the antihistamine as directed.\n");
                            step++;
                        } else {
                            printf("No medication available. Monitor closely and prepare to call emergency help.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Watch for signs of anaphylaxis (difficulty breathing, swelling).\n");
                        printf("Do you have an epinephrine auto-injector (EpiPen)?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Administer the EpiPen immediately and call emergency services.\n");
                            step++;
                        } else {
                            printf("No EpiPen available.\n");
                            printf("Final Advice: Call emergency services immediately and keep the person calm.\n");
                            break;
                        }
                    }
                }
                if (step > 3) {
                    printf("\nFinal Verdict: Monitor breathing and consciousness. Seek medical help immediately.\n");
                }
            } else if (choice == 2) {
                printf("\n--- You selected: ASTHMA ATTACK ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Help the person sit comfortably and stay calm.\n");
                        printf("Is the person able to sit upright?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Good, keep them calm.\n");
                            step++;
                        } else {
                            printf("Try to help them into a sitting position if safe.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Assist with their inhaler if available.\n");
                        printf("Do they have a prescribed inhaler?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Help them use their inhaler.\n");
                            step++;
                        } else {
                            printf("No inhaler available.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: If symptoms worsen, call emergency services.\n");
                        printf("Are symptoms severe (difficulty speaking, lips turning blue)?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Call emergency services immediately.\n");
                            step++;
                        } else {
                            printf("Continue monitoring and help them breathe slowly.\n");
                            step++;
                        }
                    }
                }
                if (step > 3) {
                    printf("\nFinal Verdict: Keep monitoring and seek medical help if no improvement.\n");
                }
            } else if (choice == 3) {
                printf("\n--- You selected: ANIMAL BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash the wound gently with soap and water.\n");
                        printf("Do you have clean water and soap?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Wash the wound thoroughly.\n");
                            step++;
                        } else {
                            printf("Use clean water only or antiseptic wipes if available.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Apply an antiseptic.\n");
                        printf("Do you have antiseptic cream or solution?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Apply antiseptic to the wound.\n");
                            step++;
                        } else {
                            printf("Alternative: Use clean honey or saltwater solution if safe.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Cover the wound with a sterile dressing.\n");
                        printf("Do you have a sterile bandage or dressing?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Cover the wound gently.\n");
                            step++;
                        } else {
                            printf("Use a clean cloth or plastic wrap as alternative.\n");
                            step++;
                        }
                    }
                }
                if (step > 3) {
                    printf("\nFinal Verdict: Seek medical attention especially for deep or dirty bites.\n");
                }
            } else if (choice == 4) {
                printf("\n--- You selected: ABDOMINAL PAIN ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Help the person lie down in a comfortable position.\n");
                        printf("Can they lie down comfortably?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Good. Encourage rest.\n");
                            step++;
                        } else {
                            printf("Try to help them find a position that eases pain.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Do not give food or drink if vomiting or severe pain.\n");
                        printf("Is the person vomiting or in severe pain?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Avoid giving food or drink.\n");
                            step++;
                        } else {
                            printf("Offer small sips of water if tolerated.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services if pain is severe or sudden.\n");
                        printf("Is the pain severe or sudden?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Call emergency help immediately.\n");
                            step++;
                        } else {
                            printf("Monitor symptoms and seek medical advice.\n");
                            step++;
                        }
                    }
                }
                if (step > 3) {
                    printf("\nFinal Verdict: Monitor and seek medical help if pain persists or worsens.\n");
                }
            } else if (choice == 5) {
                printf("\n--- You selected: AMPUTATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Control bleeding by applying pressure.\n");
                        printf("Do you have a clean cloth or bandage?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Apply pressure firmly.\n");
                            step++;
                        } else {
                            printf("Use any clean fabric as alternative.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Elevate the injured limb if possible.\n");
                        printf("Can you safely elevate the limb?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Elevate the limb to reduce bleeding.\n");
                            step++;
                        } else {
                            printf("Skip elevation if unsafe.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Preserve the amputated part by wrapping in moist cloth and placing in a sealed bag.\n");
                        printf("Do you have a plastic bag and clean cloth?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Wrap and store the part properly.\n");
                            step++;
                        } else {
                            printf("Try to keep the part clean and cool by any means.\n");
                            step++;
                        }
                    }
                }
                if (step > 3) {
                    printf("\nFinal Verdict: Call emergency services immediately. Transport the patient and amputated part quickly.\n");
                }
            } else if (choice == 6) {
                printf("\n--- You selected: ANKLE SPRAIN ---\n");
                step = 1;
                while (step <= 4) {
                    if (step == 1) {
                        printf("Step 1: Rest the injured ankle.\n");
                        printf("Can the person avoid putting weight on it?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Good. Avoid weight bearing.\n");
                            step++;
                        } else {
                            printf("Help them use crutches or support if available.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Apply ice to reduce swelling.\n");
                        printf("Do you have ice or cold pack?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Apply ice wrapped in cloth for 15-20 minutes.\n");
                            step++;
                        } else {
                            printf("Use cold water soaked cloth as alternative.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Compress the ankle with elastic bandage.\n");
                        printf("Do you have an elastic bandage?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Wrap the ankle snugly but not too tight.\n");
                            step++;
                        } else {
                            printf("Skip compression if not available.\n");
                            step++;
                        }
                    }
                    if (step == 4) {
                        printf("Step 4: Elevate the ankle above heart level.\n");
                        printf("Can you elevate the ankle?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Keep the ankle elevated to reduce swelling.\n");
                            step++;
                        } else {
                            printf("Elevate as much as possible.\n");
                            step++;
                        }
                    }
                }
                if (step > 4) {
                    printf("\nFinal Verdict: Monitor pain and swelling. Seek medical advice if severe.\n");
                }
            } else {
                printf("Invalid choice. Please restart the program and enter a valid number.\n");
            }
            break;

        default:
            printf("Invalid problem letter entered. Please restart and enter a valid letter.\n");
            break;
        case 'B':
        case 'b':
            printf("\nProblems starting with 'B':\n");
            printf("1. Bleeding\n");
            printf("2. Broken Bone\n");
            printf("3. Burn\n");
            printf("4. Breathing Difficulty\n");
            printf("5. Blister\n");
            printf("6. Blackout\n");
            printf("Choose the problem (1-6): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Bleeding
                printf("\n--- You selected: BLEEDING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Apply direct pressure to the wound using a clean cloth.\n");
                        printf("Can you apply pressure now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Keep applying pressure until bleeding stops.\n");
                            step++;
                        } else {
                            printf("Use any clean cloth or bandage and press firmly.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Elevate the injured area if possible to reduce blood flow.\n");
                        printf("Is it safe to elevate the area?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Raise the limb gently above heart level.\n");
                            step++;
                        } else {
                            printf("Skip elevation if it causes pain or is unsafe.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Seek medical help if bleeding is severe or doesn’t stop.\n");
                        printf("Do you need emergency medical help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Call emergency services immediately.\n");
                        } else {
                            printf("Continue to monitor for signs of shock or continued bleeding.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Bleeding controlled. Monitor until help arrives.\n");
            }
            else if (choice == 2) {  // Broken Bone
                printf("\n--- You selected: BROKEN BONE ---\n");
                step = 1;
                while (step <= 4) {
                    if (step == 1) {
                        printf("Step 1: Do NOT move the affected limb unnecessarily.\n");
                        printf("Is the person stable and calm?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1 || response == 2) {
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Immobilize the limb using a splint or padding.\n");
                        printf("Do you have materials to do this?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Apply splint without forcing the limb.\n");
                            step++;
                        } else {
                            printf("Use rolled-up clothes or cardboard if nothing else is available.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Apply a cold pack wrapped in cloth to reduce swelling.\n");
                        printf("Is a cold pack available?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Apply gently over the injury.\n");
                            step++;
                        } else {
                            printf("Skip cold pack and continue monitoring.\n");
                            step++;
                        }
                    }
                    if (step == 4) {
                        printf("Step 4: Seek immediate medical attention.\n");
                        printf("Have you called for medical help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1 || response == 2) {
                            printf("Transport only if absolutely necessary and limb is secured.\n");
                            step++;
                        }
                    }
                }
                printf("\nFinal Verdict: Immobilize and monitor until medical help is available.\n");
            }
            else if (choice == 3) {  // Burn
                printf("\n--- You selected: BURN ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Cool the burn under running water for at least 10 minutes.\n");
                        printf("Can you do this now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Cool immediately to stop further tissue damage.\n");
                            step++;
                        } else {
                            printf("Use cool (not cold) wet cloth if water is not available.\n");
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Cover the burn with a clean, non-stick dressing or cloth.\n");
                        printf("Do you have suitable dressing?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Cover lightly to prevent infection.\n");
                            step++;
                        } else {
                            printf("Use clean, loose cloth as temporary cover.\n");
                            step++;
                        }
                    }
                    if (step == 3) {
                        printf("Step 3: Do not apply creams, oils, or ice.\n");
                        printf("Did you apply any of these?\n[1] No\n[2] Yes\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Great, burns should be treated gently.\n");
                        } else {
                            printf("Rinse off and follow proper care.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Minor burns can be treated at home. Seek help if severe.\n");
            }
            else if (choice == 4) {  // Breathing Difficulty
                printf("\n--- You selected: BREATHING DIFFICULTY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Help the person to sit upright to ease breathing.\n");
                        printf("Can you help them sit comfortably?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Loosen tight clothing and provide fresh air.\n");
                        printf("Is the environment safe and well-ventilated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services if breathing worsens or doesn’t improve.\n");
                        printf("Is help needed now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always take breathing issues seriously. Seek help if unsure.\n");
            }
            else if (choice == 5) {  // Blister
                printf("\n--- You selected: BLISTER ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Do NOT pop the blister. Cover with a clean bandage.\n");
                        printf("Is it covered properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep area clean and dry. Watch for signs of infection.\n");
                        printf("Is there redness, pus, or pain?\n[1] No\n[2] Yes\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Seek medical help if signs of infection are present.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Blisters usually heal on their own. Avoid further friction.\n");
            }
            else if (choice == 6) {  // Blackout
                printf("\n--- You selected: BLACKOUT (Fainting) ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Lay the person down and elevate their legs.\n");
                        printf("Can you do that?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing and responsiveness.\n");
                        printf("Are they breathing normally?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR and call emergency services immediately.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Keep them lying down until they feel fully recovered.\n");
                        printf("Are they feeling better?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Keep monitoring and seek medical advice.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Fainting is often harmless, but always assess the cause.\n");
            }
            break;
        case 'C':
        case 'c':
            printf("\nProblems starting with 'C':\n");
            printf("1. Choking\n");
            printf("2. Concussion\n");
            printf("3. Chest Pain\n");
            printf("4. Cuts\n");
            printf("5. Cramps\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Choking
                printf("\n--- You selected: CHOKING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Ask the person if they are choking and can speak or cough.\n");
                        printf("Can they speak or cough?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Encourage them to cough forcefully to dislodge the object.\n");
                            step = 4;
                        } else {
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Stand behind them and give 5 back blows between the shoulder blades.\n");
                        printf("Did you administer back blows?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Perform 5 abdominal thrusts (Heimlich maneuver).\n");
                        printf("Did you perform the Heimlich maneuver?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        printf("Repeat back blows and thrusts until the object is out or help arrives.\n");
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue until object is expelled or emergency services arrive.\n");
            }
            else if (choice == 2) {  // Concussion
                printf("\n--- You selected: CONCUSSION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Ensure the person is safe and stop any activity immediately.\n");
                        printf("Are they out of harm's way?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for symptoms like confusion, nausea, dizziness, or headache.\n");
                        printf("Are any symptoms present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Seek medical evaluation even if symptoms seem mild.\n");
                        printf("Will you seek medical help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Strongly advised to consult a healthcare provider soon.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always monitor closely for 24 hours after a concussion.\n");
            }
            else if (choice == 3) {  // Chest Pain
                printf("\n--- You selected: CHEST PAIN ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Help the person sit in a comfortable position.\n");
                        printf("Is the person resting comfortably?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Ask about medical history and if they have prescribed medication (like nitroglycerin).\n");
                        printf("Do they have medication?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Help them take their medication if needed.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services immediately.\n");
                        printf("Did you call emergency help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Please call for help immediately, chest pain can be life-threatening.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Treat chest pain seriously—assume cardiac until proven otherwise.\n");
            }
            else if (choice == 4) {  // Cuts
                printf("\n--- You selected: CUTS ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Clean the wound with clean water to remove dirt.\n");
                        printf("Did you rinse it well?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply gentle pressure with a clean cloth to stop bleeding.\n");
                        printf("Has the bleeding stopped?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover with a sterile bandage or dressing.\n");
                        printf("Is the wound covered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Clean and monitor the cut for signs of infection.\n");
            }
            else if (choice == 5) {  // Cramps
                printf("\n--- You selected: CRAMPS ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Stretch and gently massage the cramped muscle.\n");
                        printf("Did this relieve the cramp?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Drink fluids with electrolytes if available.\n");
                        printf("Were fluids taken?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Cramps often result from dehydration or overuse. Rest and hydrate.\n");
            }
            break;
        case 'D':
        case 'd':
            printf("\nProblems starting with 'D':\n");
            printf("1. Drowning\n");
            printf("2. Diabetic Emergency\n");
            printf("3. Dislocation\n");
            printf("4. Diarrhea\n");
            printf("5. Dog Bite\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Drowning
                printf("\n--- You selected: DROWNING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Ensure your own safety and remove the person from water if safe.\n");
                        printf("Is the person out of the water?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing. If not breathing, begin CPR immediately.\n");
                        printf("Is the person breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR: 30 chest compressions + 2 rescue breaths. Repeat.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services or send someone to call.\n");
                        printf("Has help been called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue CPR until breathing returns or help arrives.\n");
            }
            else if (choice == 2) {  // Diabetic Emergency
                printf("\n--- You selected: DIABETIC EMERGENCY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Check for signs of low blood sugar: confusion, sweating, trembling.\n");
                        printf("Are these symptoms present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: If conscious, give a sugary drink/snack (juice, glucose tablets).\n");
                        printf("Was sugar given?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services if they become unconscious or symptoms persist.\n");
                        printf("Did you call for help if needed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Diabetics should carry glucose or ID. Get them help fast if unsure.\n");
            }
            else if (choice == 3) {  // Dislocation
                printf("\n--- You selected: DISLOCATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do NOT try to put the bone back in place.\n");
                        printf("Have you avoided moving the joint?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Immobilize the area with a splint or sling.\n");
                        printf("Was the joint immobilized?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply ice to reduce swelling and get medical attention immediately.\n");
                        printf("Did you apply ice and contact a doctor?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Dislocations require professional care. Immobilize and seek help.\n");
            }
            else if (choice == 4) {  // Diarrhea
                printf("\n--- You selected: DIARRHEA ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Keep the person hydrated with clean fluids (ORS, water).\n");
                        printf("Was hydration started?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid solid foods for a while, especially greasy/spicy foods.\n");
                        printf("Is the person resting and avoiding risky foods?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: See a doctor if diarrhea lasts >2 days or includes blood.\n");
            }
            else if (choice == 5) {  // Dog Bite
                printf("\n--- You selected: DOG BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash the bite area thoroughly with soap and water.\n");
                        printf("Was the area cleaned well?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply an antiseptic and cover with a clean bandage.\n");
                        printf("Is the wound dressed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Seek medical attention for risk of infection or rabies.\n");
                        printf("Did the person visit a clinic or doctor?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always treat animal bites seriously—rabies can be fatal.\n");
            }
            break;
        case 'E':
        case 'e':
            printf("\nProblems starting with 'E':\n");
            printf("1. Electric Shock\n");
            printf("2. Eye Injury\n");
            printf("3. Epileptic Seizure\n");
            printf("4. Ear Bleeding\n");
            printf("5. Exhaustion (Heat-related)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Electric Shock
                printf("\n--- You selected: ELECTRIC SHOCK ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do NOT touch the person if they are still in contact with electricity. Turn off the source.\n");
                        printf("Is the power source turned off?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing and pulse. Begin CPR if needed.\n");
                        printf("Is the person breathing and has a pulse?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services and keep the person still and warm.\n");
                        printf("Have emergency services been contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Electrical burns can be internal too, always get medical help.\n");
            }
            else if (choice == 2) {  // Eye Injury
                printf("\n--- You selected: EYE INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do NOT rub or apply pressure to the eye.\n");
                        printf("Has pressure been avoided?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Rinse gently with clean water if chemicals or particles are involved.\n");
                        printf("Was the eye rinsed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover the eye with a clean cloth and seek medical attention.\n");
                        printf("Is the eye covered and are they on the way to a doctor?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Eye injuries can worsen quickly—get an ophthalmologist’s help ASAP.\n");
            }
            else if (choice == 3) {  // Epileptic Seizure
                printf("\n--- You selected: EPILEPTIC SEIZURE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move objects away and cushion their head. Do not restrain them.\n");
                        printf("Is the person in a safe area?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Time the seizure. If longer than 5 minutes, call emergency help.\n");
                        printf("Did the seizure last more than 5 minutes?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: After the seizure, place them in recovery position and stay with them.\n");
                        printf("Is the person in recovery position?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Most seizures are not emergencies, but stay calm and supportive.\n");
            }
            else if (choice == 4) {  // Ear Bleeding
                printf("\n--- You selected: EAR BLEEDING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Gently tilt the head to let the blood drain. Do not block the ear.\n");
                        printf("Is the ear draining naturally?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Seek immediate medical help, especially if from head injury.\n");
                        printf("Was a doctor contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Ear bleeding could indicate a skull fracture—act fast.\n");
            }
            else if (choice == 5) {  // Exhaustion (Heat-related)
                printf("\n--- You selected: EXHAUSTION (Heat-related) ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to a cooler environment.\n");
                        printf("Is the person in a cool, shaded or air-conditioned area?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Give cool water if conscious and able to drink.\n");
                        printf("Was water given?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Loosen clothing, fan them, apply cool cloths, and monitor for heatstroke.\n");
                        printf("Have you done these steps and checked for signs of worsening?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Heat exhaustion can become heatstroke. Keep monitoring and act fast.\n");
            }
            break;
        case 'F':
        case 'f':
            printf("\nProblems starting with 'F':\n");
            printf("1. Fainting\n");
            printf("2. Fracture\n");
            printf("3. Frostbite\n");
            printf("4. Foreign Object in Eye\n");
            printf("5. Food Poisoning\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Fainting
                printf("\n--- You selected: FAINTING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Lay the person flat on their back and elevate the legs.\n");
                        printf("Can you do that?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Loosen tight clothing and ensure good airflow.\n");
                        printf("Have you done that?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: If the person doesn't regain consciousness within 1 minute, call emergency services.\n");
                        printf("Have they regained consciousness?\n[1] Yes\n[2] No (Call help)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: After recovery, advise medical evaluation to find the cause.\n");
            }

            else if (choice == 2) {  // Fracture
                printf("\n--- You selected: FRACTURE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Keep the injured limb still and do not move it unnecessarily.\n");
                        printf("Is the person not moving the injured area?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Immobilize the area using a splint or padding if available.\n");
                        printf("Do you have materials to do this?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply an ice pack to reduce swelling and get medical help.\n");
                        printf("Was cold applied and transport arranged?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Keep the person calm and limb immobilized until help arrives.\n");
            }

            else if (choice == 3) {  // Frostbite
                printf("\n--- You selected: FROSTBITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to a warm environment immediately.\n");
                        printf("Is the person in a warmer place now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Rewarm the affected area using warm (not hot) water.\n");
                        printf("Was this done for 15–30 minutes?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Do not rub or massage the area. Seek medical care urgently.\n");
                        printf("Are you avoiding pressure and seeking help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Frostbite can cause permanent damage—seek treatment quickly.\n");
            }

            else if (choice == 4) {  // Foreign Object in Eye
                printf("\n--- You selected: FOREIGN OBJECT IN EYE ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Avoid rubbing the eye. Blink several times to try dislodging the object.\n");
                        printf("Did they try blinking gently?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Flush the eye with clean water or saline.\n");
                        printf("Was the eye flushed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If object doesn't come out or pain persists, seek an eye specialist.\n");
            }

            else if (choice == 5) {  // Food Poisoning
                printf("\n--- You selected: FOOD POISONING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rest and drink plenty of clean fluids (water, ORS).\n");
                        printf("Is the person hydrated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid solid food until vomiting or diarrhea stops.\n");
                        printf("Is the person avoiding food?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Seek medical help if symptoms persist for more than 24 hours.\n");
                        printf("Have symptoms improved?\n[1] Yes\n[2] No (Seek help)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Food poisoning usually passes, but watch for severe dehydration.\n");
            }
            break;
        case 'G':
        case 'g':
            printf("\nProblems starting with 'G':\n");
            printf("1. Gas Inhalation\n");
            printf("2. Gunshot Wound\n");
            printf("3. Gastroenteritis\n");
            printf("4. Groin Injury\n");
            printf("5. Glass Injury\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Gas Inhalation
                printf("\n--- You selected: GAS INHALATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to fresh air immediately.\n");
                        printf("Have they been moved to safety?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Loosen clothing and monitor breathing.\n");
                        printf("Are they breathing normally?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR and call emergency services.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Seek medical help even if symptoms are mild.\n");
                        printf("Have you arranged medical evaluation?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Some gas effects are delayed—always consult a doctor.\n");
            }

            else if (choice == 2) {  // Gunshot Wound
                printf("\n--- You selected: GUNSHOT WOUND ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Call emergency services immediately.\n");
                        printf("Have you called for help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply firm pressure to control bleeding (unless object is embedded).\n");
                        printf("Is bleeding under control?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Keep the person still and calm.\n");
                        printf("Is the person stable while awaiting help?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Gunshot wounds are medical emergencies, don't delay treatment.\n");
            }

            else if (choice == 3) {  // Gastroenteritis
                printf("\n--- You selected: GASTROENTERITIS ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Rest and drink fluids regularly to prevent dehydration.\n");
                        printf("Has the person been drinking water or ORS?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid dairy, greasy foods, and caffeine.\n");
                        printf("Are dietary precautions being followed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Recover in 1–3 days; if symptoms persist, see a doctor.\n");
            }

            else if (choice == 4) {  // Groin Injury
                printf("\n--- You selected: GROIN INJURY ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Rest and apply a cold pack wrapped in a cloth.\n");
                        printf("Was cold applied within 15 minutes?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid physical activity for at least 48 hours.\n");
                        printf("Is the person resting?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Seek medical advice if pain persists or swelling increases.\n");
            }

            else if (choice == 5) {  // Glass Injury
                printf("\n--- You selected: GLASS INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do NOT remove deeply embedded glass—leave it for professionals.\n");
                        printf("Is it a deep wound?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Cover lightly and wait for emergency help.\n");
                            step = 4;
                        } else {
                            step++;
                        }
                    }
                    if (step == 2) {
                        printf("Step 2: Remove small, superficial pieces with clean tweezers.\n");
                        printf("Were small pieces safely removed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Wash the wound, apply pressure if bleeding, and dress it cleanly.\n");
                        printf("Is the area now clean and covered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor for signs of infection. Seek care if glass remains.\n");
            }
            break;
        case 'H':
        case 'h':
            printf("\nProblems starting with 'H':\n");
            printf("1. Head Injury\n");
            printf("2. Heart Attack\n");
            printf("3. Hypothermia\n");
            printf("4. Heat Stroke\n");
            printf("5. Heavy Bleeding\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Head Injury
                printf("\n--- You selected: HEAD INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Keep the person still and avoid movement of the head and neck.\n");
                        printf("Is the person lying still?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply a cold pack gently to reduce swelling.\n");
                        printf("Was a cold pack used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Watch for confusion, drowsiness, or vomiting.\n");
                        printf("Are any symptoms worsening?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Seek emergency medical help immediately.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor the person and consult a doctor for evaluation.\n");
            }

            else if (choice == 2) {  // Heart Attack
                printf("\n--- You selected: HEART ATTACK ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Call emergency services immediately.\n");
                        printf("Was help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Call emergency services right away!\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Help the person sit down and stay calm.\n");
                        printf("Is the person resting and breathing normally?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: If available, give aspirin (unless allergic or advised not to).\n");
                        printf("Did they take aspirin?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Keep monitoring until help arrives. Don’t delay.\n");
            }

            else if (choice == 3) {  // Hypothermia
                printf("\n--- You selected: HYPOTHERMIA ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to a warm, dry place.\n");
                        printf("Are they in a warm environment now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Remove wet clothing and wrap in blankets.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Provide warm (non-alcoholic, non-caffeinated) drinks if conscious.\n");
                        printf("Were warm fluids offered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Get medical help if temperature doesn’t rise or confusion persists.\n");
            }

            else if (choice == 4) {  // Heat Stroke
                printf("\n--- You selected: HEAT STROKE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to a cool, shaded area immediately.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Remove excess clothing and apply cool water or ice packs.\n");
                        printf("Has cooling started?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services — heat stroke is life-threatening.\n");
                        printf("Was help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Do it now! This is an emergency.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Keep cooling and stay with the person until help arrives.\n");
            }

            else if (choice == 5) {  // Heavy Bleeding
                printf("\n--- You selected: HEAVY BLEEDING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Apply firm pressure with a clean cloth or bandage.\n");
                        printf("Is pressure being applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Do this immediately to reduce blood loss!\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep the wound elevated above heart level if possible.\n");
                        printf("Was the injured area elevated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Do not remove the cloth if soaked—add more on top and continue pressure.\n");
                        printf("Are you following this step?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue pressure and get emergency help if bleeding doesn’t stop.\n");
            }
            break;
        case 'I':
        case 'i':
            printf("\nProblems starting with 'I':\n");
            printf("1. Insect Bite\n");
            printf("2. Internal Bleeding\n");
            printf("3. Impalement\n");
            printf("4. Intoxication (Poisoning)\n");
            printf("5. Irregular Breathing\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Insect Bite
                printf("\n--- You selected: INSECT BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move to a safe area to avoid more bites.\n");
                        printf("Is the person safe now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Wash the bite area with soap and water.\n");
                        printf("Was it cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply a cold compress to reduce swelling.\n");
                        printf("Was cold applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Watch for allergic reactions. Seek help if severe.\n");
            }

            else if (choice == 2) {  // Internal Bleeding
                printf("\n--- You selected: INTERNAL BLEEDING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Look for signs—bruising, pain, dizziness, vomiting blood.\n");
                        printf("Are such signs present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Lay person flat, keep warm, and call emergency services.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Internal bleeding is a medical emergency. Never delay help.\n");
            }

            else if (choice == 3) {  // Impalement
                printf("\n--- You selected: IMPALEMENT ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Do NOT remove the object.\n");
                        printf("Is the object still in place?\n[1] Yes\n[2] No (Critical mistake)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Stabilize the object and call emergency services.\n");
                        printf("Was stabilization and help arranged?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Keep the object stable and wait for trained professionals.\n");
            }

            else if (choice == 4) {  // Intoxication (Poisoning)
                printf("\n--- You selected: INTOXICATION (POISONING) ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Identify the poison (label, container, smell).\n");
                        printf("Was the substance identified?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call poison control or emergency services immediately.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Do not induce vomiting unless directed by a professional.\n");
                        printf("Are you following this advice?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always follow poison control guidance. Bring container if possible.\n");
            }

            else if (choice == 5) {  // Irregular Breathing
                printf("\n--- You selected: IRREGULAR BREATHING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Check for any obstruction in airway.\n");
                        printf("Was anything blocking the airway?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Clear it gently if safe to do so.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Loosen tight clothing and ensure the person is in a comfortable position.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services if breathing remains erratic.\n");
                        printf("Has help been called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Irregular breathing may signal a serious condition. Monitor closely.\n");
            }
            break;
        case 'J':
        case 'j':
            printf("\nProblems starting with 'J':\n");
            printf("1. Jaw Injury\n");
            printf("2. Joint Dislocation\n");
            printf("3. Jellyfish Sting\n");
            printf("4. Jaundice (in babies or sudden onset)\n");
            printf("5. Jump Injury (Fall Trauma)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Jaw Injury
                printf("\n--- You selected: JAW INJURY ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Support the jaw with a bandage or cloth.\n");
                        printf("Was support provided?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cold to reduce swelling and visit a dentist or hospital.\n");
                        printf("Was cold applied and help arranged?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Jaw injuries can cause airway issues—monitor and get medical help.\n");
            }

            else if (choice == 2) {  // Joint Dislocation
                printf("\n--- You selected: JOINT DISLOCATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do NOT try to pop the joint back into place.\n");
                        printf("Was this avoided?\n[1] Yes\n[2] No (Very dangerous!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Immobilize the joint using a splint or sling.\n");
                        printf("Was the joint supported?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply ice packs and seek emergency care.\n");
                        printf("Was cold applied and help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Dislocations must be treated by professionals. Don’t delay.\n");
            }

            else if (choice == 3) {  // Jellyfish Sting
                printf("\n--- You selected: JELLYFISH STING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rinse the area with vinegar to neutralize venom.\n");
                        printf("Was vinegar used?\n[1] Yes\n[2] No (Use saltwater, never fresh water)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Remove tentacles using a pair of tweezers (wear gloves if possible).\n");
                        printf("Were tentacles removed safely?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Immerse the area in hot water (not scalding) to ease pain.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If symptoms worsen or allergic reaction occurs, seek emergency help.\n");
            }

            else if (choice == 4) {  // Jaundice (esp. in newborns or sudden onset)
                printf("\n--- You selected: JAUNDICE ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Look for yellowing of eyes/skin, fatigue, and dark urine.\n");
                        printf("Are such symptoms present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Do not give any medicine—consult a doctor immediately.\n");
                        printf("Has a doctor been contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Jaundice can indicate liver issues—professional care is crucial.\n");
            }

            else if (choice == 5) {  // Jump Injury (Fall Trauma)
                printf("\n--- You selected: JUMP INJURY (FALL TRAUMA) ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Do not move the person if you suspect a spinal injury.\n");
                        printf("Was the person kept still?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Avoid moving—could worsen spinal injury.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for responsiveness and breathing.\n");
                        printf("Are they breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR if trained. Get help immediately.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services and stay with the person.\n");
                        printf("Was help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: All fall injuries must be evaluated—risk of internal damage is high.\n");
            }
            break;
        case 'K':
        case 'k':
            printf("\nProblems starting with 'K':\n");
            printf("1. Knocked-Out Tooth\n");
            printf("2. Knee Injury\n");
            printf("3. Knife Wound\n");
            printf("4. Kid Injury (Child Trauma)\n");
            printf("5. Kinked Neck (Muscle Spasm)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Knocked-Out Tooth
                printf("\n--- You selected: KNOCKED-OUT TOOTH ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Pick up the tooth by the crown, not the root.\n");
                        printf("Was this done carefully?\n[1] Yes\n[2] No (Risk of damage)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Rinse the tooth with clean water (don’t scrub it).\n");
                        printf("Was the tooth rinsed properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Place it back in socket if possible or in milk/saline.\n");
                        printf("Was the tooth stored correctly or reinserted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: See a dentist immediately—time is critical for tooth survival.\n");
            }

            else if (choice == 2) {  // Knee Injury
                printf("\n--- You selected: KNEE INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rest the knee and avoid putting weight on it.\n");
                        printf("Is the person off the injured knee?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply an ice pack for 15-20 minutes every 1-2 hours.\n");
                        printf("Was ice used correctly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Elevate the leg and wrap with an elastic bandage if swollen.\n");
                        printf("Was elevation and wrapping done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If swelling or pain persists, consult an orthopedic specialist.\n");
            }

            else if (choice == 3) {  // Knife Wound
                printf("\n--- You selected: KNIFE WOUND ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Apply firm pressure with clean cloth or bandage to stop bleeding.\n");
                        printf("Is pressure being applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Apply pressure immediately to reduce blood loss!\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Do NOT remove embedded object if present.\n");
                        printf("Is the object left untouched?\n[1] Yes\n[2] No (Do not remove it!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Keep person still and calm, call emergency services.\n");
                        printf("Was help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue pressure and wait for emergency help.\n");
            }

            else if (choice == 4) {  // Kid Injury (Child Trauma)
                printf("\n--- You selected: KID INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Calm the child and examine for visible injuries.\n");
                        printf("Was the child comforted and checked?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Clean minor wounds with water and apply a bandage.\n");
                        printf("Was wound care done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Observe behavior—crying, sleepiness, vomiting may indicate serious injury.\n");
                        printf("Any of these signs present?\n[1] Yes (Seek help)\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: When in doubt, consult a pediatric doctor.\n");
            }

            else if (choice == 5) {  // Kinked Neck
                printf("\n--- You selected: KINKED NECK ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Rest and avoid sudden movements of the neck.\n");
                        printf("Was rest ensured?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply warm compress or take a warm shower.\n");
                        printf("Was heat applied for muscle relief?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If pain persists or worsens, seek medical advice.\n");
            }
            break;
        case 'L':
        case 'l':
            printf("\nProblems starting with 'L':\n");
            printf("1. Laceration\n");
            printf("2. Limb Fracture\n");
            printf("3. Lightning Strike\n");
            printf("4. Loss of Consciousness\n");
            printf("5. Low Blood Sugar\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Laceration
                printf("\n--- You selected: LACERATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rinse the wound gently with clean water.\n");
                        printf("Was the wound rinsed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply pressure with clean cloth to stop bleeding.\n");
                        printf("Was pressure applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover the wound with a sterile bandage.\n");
                        printf("Was the wound dressed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: For deep or long cuts, seek medical care for stitches or further care.\n");
            }

            else if (choice == 2) {  // Limb Fracture
                printf("\n--- You selected: LIMB FRACTURE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Immobilize the injured limb with a splint or sling.\n");
                        printf("Was the limb immobilized?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply a cold pack to reduce swelling.\n");
                        printf("Was ice or cold applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Avoid moving the limb and seek medical help immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Fractures require professional treatment—avoid moving the injured part.\n");
            }

            else if (choice == 3) {  // Lightning Strike
                printf("\n--- You selected: LIGHTNING STRIKE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Call emergency services immediately.\n");
                        printf("Was help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Call now! This is critical.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing and pulse. Begin CPR if necessary.\n");
                        printf("Is the person breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR and continue until help arrives.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Treat visible burns and keep the person warm.\n");
                        printf("Was the person treated for burns?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor for shock, memory issues, or seizures. Get them to a hospital ASAP.\n");
            }

            else if (choice == 4) {  // Loss of Consciousness
                printf("\n--- You selected: LOSS OF CONSCIOUSNESS ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Check for responsiveness, pulse, and breathing.\n");
                        printf("Is the person breathing and has pulse?\n[1] Yes\n[2] No (CPR needed)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR immediately and call for help.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Lay them on their side if breathing to prevent choking.\n");
                        printf("Was the person placed in recovery position?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Keep airway open and wait for medical help.\n");
                        printf("Is the person stable now?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor closely; loss of consciousness is always serious.\n");
            }

            else if (choice == 5) {  // Low Blood Sugar
                printf("\n--- You selected: LOW BLOOD SUGAR ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Give sugary drink or candy immediately.\n");
                        printf("Was sugar given?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Give juice, glucose tablets, or any quick sugar source now.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Let them rest and monitor for improvement.\n");
                        printf("Is the person feeling better?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: If unconscious, do NOT give anything by mouth. Call emergency services.\n");
                        printf("Is the person unconscious?\n[1] Yes (Call for help!)\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Low blood sugar can escalate fast. Monitor until fully stable.\n");
            }
            break;
        case 'M':
        case 'm':
            printf("\nProblems starting with 'M':\n");
            printf("1. Muscle Cramp\n");
            printf("2. Migraine\n");
            printf("3. Mouth Injury\n");
            printf("4. Minor Cut\n");
            printf("5. Motion Sickness\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Muscle Cramp
                printf("\n--- You selected: MUSCLE CRAMP ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Gently stretch and massage the cramped muscle.\n");
                        printf("Was the muscle stretched or massaged?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply heat to tight muscles or cold to sore areas.\n");
                        printf("Was a hot or cold pack used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Drink water or an electrolyte solution.\n");
                        printf("Was hydration provided?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If cramp persists or reoccurs often, consult a doctor.\n");
            }

            else if (choice == 2) {  // Migraine
                printf("\n--- You selected: MIGRAINE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move to a quiet, dark room and lie down.\n");
                        printf("Was the person moved to a calm place?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cold compress to the forehead.\n");
                        printf("Was a cold compress applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Take prescribed medication if available.\n");
                        printf("Did the person take their medication?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If symptoms are severe or persistent, seek medical attention.\n");
            }

            else if (choice == 3) {  // Mouth Injury
                printf("\n--- You selected: MOUTH INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rinse mouth with clean, cold water.\n");
                        printf("Was the mouth rinsed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply pressure with gauze to stop bleeding.\n");
                        printf("Was pressure applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply cold pack to reduce swelling.\n");
                        printf("Was a cold pack applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If bleeding doesn't stop or injury is deep, consult a dentist or doctor.\n");
            }

            else if (choice == 4) {  // Minor Cut
                printf("\n--- You selected: MINOR CUT ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rinse the cut with clean water.\n");
                        printf("Was the cut rinsed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply antiseptic to prevent infection.\n");
                        printf("Was antiseptic applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover with bandage or plaster.\n");
                        printf("Was the cut covered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor for signs of infection—redness, swelling, pus.\n");
            }

            else if (choice == 5) {  // Motion Sickness
                printf("\n--- You selected: MOTION SICKNESS ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Sit still, face forward, and fix eyes on a stable point.\n");
                        printf("Is the person sitting properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Provide motion sickness medication or ginger.\n");
                        printf("Was anything given?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Open windows for fresh air or stop vehicle for relief if possible.\n");
            }
            break;
        case 'N':
        case 'n':
            printf("\nProblems starting with 'N':\n");
            printf("1. Nosebleed\n");
            printf("2. Nausea\n");
            printf("3. Near Drowning\n");
            printf("4. Numbness (Sudden)\n");
            printf("5. Neck Injury\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Nosebleed
                printf("\n--- You selected: NOSEBLEED ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Sit the person down and lean them slightly forward.\n");
                        printf("Is the person sitting forward?\n[1] Yes\n[2] No (Correct their position)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Pinch the soft part of the nose for 10 minutes.\n");
                        printf("Was pressure applied correctly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply a cold compress to the nose or neck.\n");
                        printf("Was a cold compress used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If bleeding continues after 20 minutes, seek medical attention.\n");
            }

            else if (choice == 2) {  // Nausea
                printf("\n--- You selected: NAUSEA ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Have the person sit quietly in a ventilated area.\n");
                        printf("Is the person resting in a calm space?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Offer small sips of water or ginger tea.\n");
                        printf("Was a drink offered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If nausea worsens or is accompanied by other symptoms, consult a doctor.\n");
            }

            else if (choice == 3) {  // Near Drowning
                printf("\n--- You selected: NEAR DROWNING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Remove the person from water safely.\n");
                        printf("Was the person removed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Call for trained rescue. Do not risk your own safety.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing and pulse.\n");
                        printf("Are they breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Begin CPR immediately and call emergency services.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Keep the person warm and stay with them until help arrives.\n");
                        printf("Was the person kept warm?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: All drowning cases must be seen by medical professionals.\n");
            }

            else if (choice == 4) {  // Numbness
                printf("\n--- You selected: NUMBNESS (SUDDEN) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Ask if it's localized (fingers, limbs) or widespread.\n");
                        printf("Localized?\n[1] Yes\n[2] No (Possible stroke)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Seek emergency care if it's sudden, spreads, or with weakness.\n");
                        printf("Was medical help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Numbness could indicate nerve damage or stroke—do not ignore.\n");
            }

            else if (choice == 5) {  // Neck Injury
                printf("\n--- You selected: NECK INJURY ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Immobilize the head and neck. Do not let the person move.\n");
                        printf("Is the neck being stabilized?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Prevent any neck movement! Support the head.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Never move someone with a neck injury unless life-threatening.\n");
            }
            break;
        case 'O':
        case 'o':
            printf("\nProblems starting with 'O':\n");
            printf("1. Open Wound\n");
            printf("2. Object in Eye\n");
            printf("3. Overdose\n");
            printf("4. Obstructed Airway (Choking)\n");
            printf("5. Oxygen Deprivation\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Open Wound
                printf("\n--- You selected: OPEN WOUND ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Control bleeding with direct pressure using a clean cloth.\n");
                        printf("Was pressure applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Clean the wound with water.\n");
                        printf("Was the wound rinsed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover with a sterile bandage.\n");
                        printf("Was the wound covered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Watch for infection—redness, swelling, pus. Seek medical attention if needed.\n");
            }

            else if (choice == 2) {  // Object in Eye
                printf("\n--- You selected: OBJECT IN EYE ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Do NOT rub the eye. Blink several times to try dislodging the object.\n");
                        printf("Was the eye kept untouched and blinking tried?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Avoid touching or rubbing! This can worsen injury.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Flush with clean water or saline solution.\n");
                        printf("Was the eye flushed properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If object doesn't come out or vision is affected, go to an eye specialist.\n");
            }

            else if (choice == 3) {  // Overdose
                printf("\n--- You selected: OVERDOSE ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Call emergency services immediately. Provide info if known (what, when, how much).\n");
                        printf("Was help called?\n[1] Yes\n[2] No (Do it immediately)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: If unconscious but breathing, place in recovery position. If not breathing, start CPR.\n");
                        printf("Is the person breathing?\n[1] Yes (Recovery position)\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Begin CPR and continue until help arrives.\n");
                        }
                        step++;
                    }
                }
                printf("\nFinal Verdict: Never induce vomiting unless instructed by poison control. Stay with person until help arrives.\n");
            }

            else if (choice == 4) {  // Obstructed Airway (Choking)
                printf("\n--- You selected: OBSTRUCTED AIRWAY ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Ask if the person can speak or cough.\n");
                        printf("Can the person speak/cough?\n[1] Yes (Encourage coughing)\n[2] No (Perform abdominal thrusts)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Perform 5 back blows + 5 abdominal thrusts (Heimlich maneuver).\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services if object doesn't come out.\n");
                        printf("Was emergency help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue attempts carefully until help arrives or airway clears.\n");
            }

            else if (choice == 5) {  // Oxygen Deprivation
                printf("\n--- You selected: OXYGEN DEPRIVATION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move the person to fresh air immediately.\n");
                        printf("Was the person moved to fresh air?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check for breathing and pulse.\n");
                        printf("Are they breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Begin CPR and call for help!\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Loosen tight clothing and keep airway open.\n");
                        printf("Was airway cleared?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Oxygen loss is critical—get emergency help immediately.\n");
            }
            break;
        case 'P':
        case 'p':
            printf("\nProblems starting with 'P':\n");
            printf("1. Poisoning\n");
            printf("2. Puncture Wound\n");
            printf("3. Panic Attack\n");
            printf("4. Pulled Muscle\n");
            printf("5. Penetrating Chest Injury\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Poisoning
                printf("\n--- You selected: POISONING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Identify the poison if possible (substance, label, amount).\n");
                        printf("Do you know what was consumed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call poison control or emergency services immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Do NOT induce vomiting unless advised by professionals.\n");
            }

            else if (choice == 2) {  // Puncture Wound
                printf("\n--- You selected: PUNCTURE WOUND ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Let the wound bleed slightly to clean itself, unless heavy bleeding.\n");
                        printf("Was the wound allowed to bleed slightly or controlled if needed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Clean with water and mild soap—do not scrub deeply.\n");
                        printf("Was the wound cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply clean bandage and watch for infection.\n");
                        printf("Was the wound covered properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Deep or rusty wounds may need tetanus shots—see a doctor.\n");
            }

            else if (choice == 3) {  // Panic Attack
                printf("\n--- You selected: PANIC ATTACK ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Talk calmly and encourage slow breathing.\n");
                        printf("Was the person comforted and guided to breathe?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Ask them to focus on physical surroundings (5 senses technique).\n");
                        printf("Did you try grounding techniques?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If symptoms last long or are recurring, suggest professional help.\n");
            }

            else if (choice == 4) {  // Pulled Muscle
                printf("\n--- You selected: PULLED MUSCLE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rest the muscle and avoid further strain.\n");
                        printf("Was activity stopped immediately?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply ice pack for 20 minutes every 2 hours.\n");
                        printf("Was cold therapy applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Wrap with an elastic bandage to reduce swelling.\n");
                        printf("Was compression applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If pain or swelling persists, consult a healthcare provider.\n");
            }

            else if (choice == 5) {  // Penetrating Chest Injury
                printf("\n--- You selected: PENETRATING CHEST INJURY ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Do NOT remove the object. Stabilize it with bulky dressing.\n");
                        printf("Was the object left in place and supported?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Do not remove any embedded object—it may cause more harm.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services immediately. Monitor breathing.\n");
                        printf("Was emergency help called?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: This is a critical emergency—keep person still and breathing stable.\n");
            }
            break;
        case 'Q':
        case 'q':
            printf("\nProblems starting with 'Q':\n");
            printf("1. Quick Fainting\n");
            printf("2. Quinsy (Tonsillar Abscess)\n");
            printf("3. Quadriceps Strain\n");
            printf("4. Quivering Heartbeat (Palpitations)\n");
            printf("5. Quick Allergic Reaction\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Quick Fainting
                printf("\n--- You selected: QUICK FAINTING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Lay the person flat and raise their legs.\n");
                        printf("Was the person positioned properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Loosen any tight clothing and check breathing.\n");
                        printf("Were breathing and clothing checked?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If the person does not wake up in 1 minute, call emergency services.\n");
            }

            else if (choice == 2) {  // Quinsy (Tonsillar Abscess)
                printf("\n--- You selected: QUINSY (TONSILLAR ABSCESS) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Monitor breathing and swallowing—do NOT try to drain it.\n");
                        printf("Is the person having trouble breathing or swallowing?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Call emergency services immediately.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Provide fluids and keep the person upright.\n");
                        printf("Was the person kept upright and hydrated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: This condition requires antibiotics and drainage by a medical professional.\n");
            }

            else if (choice == 3) {  // Quadriceps Strain
                printf("\n--- You selected: QUADRICEPS STRAIN ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rest the leg immediately.\n");
                        printf("Was the leg rested?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply an ice pack wrapped in cloth for 15–20 minutes.\n");
                        printf("Was ice applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Elevate the leg and avoid pressure.\n");
                        printf("Was elevation done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Avoid intense activity for a few days; see a doctor if swelling persists.\n");
            }

            else if (choice == 4) {  // Quivering Heartbeat (Palpitations)
                printf("\n--- You selected: QUIVERING HEARTBEAT (PALPITATIONS) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Ask the person to sit and take slow, deep breaths.\n");
                        printf("Did the person sit and relax?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: If symptoms last more than a few minutes, seek medical help.\n");
                        printf("Did you contact a doctor if irregular heartbeat continued?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Palpitations with chest pain or fainting require urgent evaluation.\n");
            }

            else if (choice == 5) {  // Quick Allergic Reaction
                printf("\n--- You selected: QUICK ALLERGIC REACTION ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Identify and remove the allergen.\n");
                        printf("Was the allergen removed or exposure stopped?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Administer antihistamines or use an epinephrine auto-injector if available.\n");
                        printf("Was medicine or EpiPen used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Call emergency services immediately if severe symptoms occur.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Monitor breathing and be ready to perform CPR if needed.\n");
                        printf("Is the person breathing normally?\n[1] Yes\n[2] No (Start CPR and call for help)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Allergic reactions can worsen rapidly. Observe closely and get emergency help.\n");
            }
            break;
        case 'R':
        case 'r':
            printf("\nProblems starting with 'R':\n");
            printf("1. Road Rash\n");
            printf("2. Rabies (Animal Bite)\n");
            printf("3. Respiratory Arrest\n");
            printf("4. Rash (Allergic Skin Reaction)\n");
            printf("5. Rectal Bleeding\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Road Rash
                printf("\n--- You selected: ROAD RASH ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Clean the wound gently with water.\n");
                        printf("Was the wound cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Remove dirt or debris using clean tweezers if necessary.\n");
                        printf("Was debris removed safely?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply antibiotic ointment and cover with a clean dressing.\n");
                        printf("Was the ointment applied and wound dressed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor for infection. Change dressing daily.\n");
            }

            else if (choice == 2) {  // Rabies (Animal Bite)
                printf("\n--- You selected: RABIES (Animal Bite) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Wash the bite area with soap and water for 10–15 minutes.\n");
                        printf("Was the area washed thoroughly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Seek immediate medical care for rabies vaccination.\n");
                        printf("Was medical attention sought?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Rabies is fatal if untreated—always seek urgent care after animal bites.\n");
            }

            else if (choice == 3) {  // Respiratory Arrest
                printf("\n--- You selected: RESPIRATORY ARREST ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Call emergency services immediately.\n");
                        printf("Was emergency help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Begin rescue breathing or full CPR if trained.\n");
                        printf("Is CPR being performed?\n[1] Yes\n[2] No (Find help!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue CPR until help arrives or the person starts breathing.\n");
            }

            else if (choice == 4) {  // Rash
                printf("\n--- You selected: RASH (Allergic Skin Reaction) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Remove any allergens or irritants.\n");
                        printf("Was the source of rash removed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply soothing lotion or antihistamine cream.\n");
                        printf("Was anything applied to the rash?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Seek medical care if rash worsens or spreads.\n");
            }

            else if (choice == 5) {  // Rectal Bleeding
                printf("\n--- You selected: RECTAL BLEEDING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Monitor the amount of bleeding and any accompanying symptoms.\n");
                        printf("Was bleeding amount noted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid straining. Encourage hydration and rest.\n");
                        printf("Was straining avoided and person kept hydrated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always consult a doctor—rectal bleeding should never be ignored.\n");
            }
            break;
        case 'S':
        case 's':
            printf("\nProblems starting with 'S':\n");
            printf("1. Shock\n");
            printf("2. Seizure\n");
            printf("3. Snake Bite\n");
            printf("4. Sunburn\n");
            printf("5. Sprain\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Shock
                printf("\n--- You selected: SHOCK ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Lay the person flat and elevate their legs unless there's injury.\n");
                        printf("Was this position applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep the person warm and comfortable.\n");
                        printf("Was the person kept warm?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Do not give anything by mouth. Stay with the person until help arrives.\n");
            }

            else if (choice == 2) {  // Seizure
                printf("\n--- You selected: SEIZURE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Move objects away to prevent injury.\n");
                        printf("Was the area cleared?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Do not hold the person down or put anything in their mouth.\n");
                        printf("Was this advice followed?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: After seizure ends, place person in recovery position and stay with them.\n");
                        printf("Was the recovery position used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Call emergency services if seizure lasts more than 5 minutes or it's the first time.\n");
            }

            else if (choice == 3) {  // Snake Bite
                printf("\n--- You selected: SNAKE BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Keep the person still and calm. Immobilize the bitten area.\n");
                        printf("Was movement limited?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep bite area lower than heart level.\n");
                        printf("Was the limb positioned correctly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services immediately. Do NOT suck or cut the bite.\n");
                        printf("Was medical help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Antivenom is time-sensitive. Avoid any physical exertion.\n");
            }

            else if (choice == 4) {  // Sunburn
                printf("\n--- You selected: SUNBURN ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Get out of the sun immediately.\n");
                        printf("Was the person removed from sun exposure?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cool, damp cloths or take a cool bath.\n");
                        printf("Was cooling treatment given?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply aloe vera gel or moisturizer.\n");
                        printf("Was a soothing cream applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Avoid further sun exposure. Stay hydrated. Seek help if blisters form or fever develops.\n");
            }

            else if (choice == 5) {  // Sprain
                printf("\n--- You selected: SPRAIN ---\n");
                step = 1;
                while (step <= 4) {
                    if (step == 1) {
                        printf("Step 1: Rest the injured area.\n");
                        printf("Was the person resting the injury?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply ice wrapped in a cloth for 20 minutes.\n");
                        printf("Was ice applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Use compression with an elastic bandage.\n");
                        printf("Was a compression bandage used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 4) {
                        printf("Step 4: Elevate the injured area above heart level.\n");
                        printf("Was elevation done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If swelling or pain persists, consult a medical professional.\n");
            }
            break;
        case 'T':
        case 't':
            printf("\nProblems starting with 'T':\n");
            printf("1. Tooth Knocked Out\n");
            printf("2. Traumatic Head Injury\n");
            printf("3. Torn Muscle\n");
            printf("4. Tick Bite\n");
            printf("5. Temperature Extremes (Hypo/Hyperthermia)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Tooth Knocked Out
                printf("\n--- You selected: TOOTH KNOCKED OUT ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Pick up the tooth by the crown (not the root), if available.\n");
                        printf("Was the tooth picked up correctly?\n[1] Yes\n[2] No (Do not touch the root!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep the tooth in milk or inside the person's cheek and go to the dentist immediately.\n");
                        printf("Was the tooth stored correctly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Quick action (within 30 minutes) improves the chance of saving the tooth.\n");
            }

            else if (choice == 2) {  // Traumatic Head Injury
                printf("\n--- You selected: TRAUMATIC HEAD INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Keep the person still and avoid movement of the neck.\n");
                        printf("Was the person kept immobile?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Check responsiveness and breathing.\n");
                        printf("Is the person responsive?\n[1] Yes\n[2] No (Begin CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR and call emergency services.\n");
                        }
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply a cold pack if there is swelling, but do not press hard.\n");
                        printf("Was a cold pack used properly?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Watch for signs of concussion. Seek emergency care immediately.\n");
            }

            else if (choice == 3) {  // Torn Muscle
                printf("\n--- You selected: TORN MUSCLE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Rest the affected muscle and stop any activity.\n");
                        printf("Was the muscle rested?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply an ice pack wrapped in a cloth for 15–20 minutes.\n");
                        printf("Was ice applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Compress with a bandage and elevate.\n");
                        printf("Was compression and elevation done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Severe tears may need physical therapy or medical care.\n");
            }

            else if (choice == 4) {  // Tick Bite
                printf("\n--- You selected: TICK BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Remove the tick with fine-tipped tweezers, pulling straight out.\n");
                        printf("Was the tick removed properly?\n[1] Yes\n[2] No (Try again carefully)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Clean the bite area and hands with soap and water.\n");
                        printf("Was cleaning done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Monitor for signs of infection or rash.\n");
                        printf("Is there any redness or swelling?\n[1] No\n[2] Yes (Consult doctor)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Watch for flu-like symptoms or bullseye rash—can be signs of Lyme disease.\n");
            }

            else if (choice == 5) {  // Temperature Extremes
                printf("\n--- You selected: TEMPERATURE EXTREMES ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Determine if it’s hypothermia (cold) or hyperthermia (heat).\n");
                        printf("Which condition is present?\n[1] Hypothermia\n[2] Hyperthermia\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Move to warm place, remove wet clothes, wrap in blankets.\n");
                        } else {
                            printf("Move to cool place, apply cold compresses, give sips of water.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services if the person becomes unresponsive or has extreme symptoms.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Always monitor body temp. Both conditions can become life-threatening quickly.\n");
            }
            break;
        case 'U':
        case 'u':
            printf("\nProblems starting with 'U':\n");
            printf("1. Unconsciousness\n");
            printf("2. Urinary Retention (Emergency)\n");
            printf("3. Unusual Breathing\n");
            printf("4. Underwater Drowning\n");
            printf("5. Unidentified Insect Bite\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Unconsciousness
                printf("\n--- You selected: UNCONSCIOUSNESS ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Check for breathing and responsiveness.\n");
                        printf("Is the person breathing?\n[1] Yes\n[2] No (Start CPR)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Start CPR immediately and call emergency services.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: If breathing, place the person in the recovery position.\n");
                        printf("Was recovery position used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Call emergency services.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Stay with the person until help arrives. Keep monitoring breathing.\n");
            }

            else if (choice == 2) {  // Urinary Retention
                printf("\n--- You selected: URINARY RETENTION ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Help the person into a comfortable position.\n");
                        printf("Was a comfortable position provided?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Encourage fluid intake and immediate medical attention.\n");
                        printf("Was help sought?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: This is a medical emergency. Do not delay professional treatment.\n");
            }

            else if (choice == 3) {  // Unusual Breathing
                printf("\n--- You selected: UNUSUAL BREATHING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Observe the breathing rate, depth, and pattern.\n");
                        printf("Is breathing labored or noisy?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep the person upright and calm. Call for help if it worsens.\n");
                        printf("Was the person kept upright?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Call emergency services if breathing becomes erratic or they lose consciousness.\n");
            }

            else if (choice == 4) {  // Underwater Drowning
                printf("\n--- You selected: UNDERWATER DROWNING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Remove the person from water and check for breathing.\n");
                        printf("Is the person breathing?\n[1] Yes\n[2] No (Start CPR immediately)\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 2) {
                            printf("Perform rescue breathing and chest compressions.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Even if they recover, monitor for water in lungs. Seek medical help.\n");
            }

            else if (choice == 5) {  // Unidentified Insect Bite
                printf("\n--- You selected: UNIDENTIFIED INSECT BITE ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash the area with soap and water.\n");
                        printf("Was the area cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cold compress to reduce swelling.\n");
                        printf("Was cold applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Watch for allergic reaction signs like hives or swelling.\n");
                        printf("Any allergic reaction?\n[1] No\n[2] Yes (Use antihistamines or epinephrine)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Seek medical attention if symptoms worsen or the bite area spreads.\n");
            }
            break;
        case 'V':
        case 'v':
            printf("\nProblems starting with 'V':\n");
            printf("1. Vomiting\n");
            printf("2. Vaginal Bleeding (Emergency)\n");
            printf("3. Venomous Insect Sting\n");
            printf("4. Vision Loss (Sudden)\n");
            printf("5. Vehicle Accident Injury\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Vomiting
                printf("\n--- You selected: VOMITING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Help the person sit upright or lie on their side to prevent choking.\n");
                        printf("Was the person positioned safely?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Give small sips of clear fluid to prevent dehydration.\n");
                        printf("Was hydration attempted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Monitor for blood in vomit or signs of severe dehydration. Seek medical attention if necessary.\n");
            }

            else if (choice == 2) {  // Vaginal Bleeding (Emergency)
                printf("\n--- You selected: VAGINAL BLEEDING (EMERGENCY) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Keep the person lying down with legs elevated.\n");
                        printf("Was this done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply a sanitary pad if available and seek emergency care.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Do not give food or drink. Transport to hospital urgently.\n");
            }

            else if (choice == 3) {  // Venomous Insect Sting
                printf("\n--- You selected: VENOMOUS INSECT STING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Remove stinger by scraping with a card (not tweezers).\n");
                        printf("Was the stinger removed safely?\n[1] Yes\n[2] No (Try again gently)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply a cold compress to reduce pain and swelling.\n");
                        printf("Was cold applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Watch for allergic reaction (difficulty breathing, swelling).\n");
                        printf("Any severe reaction?\n[1] No\n[2] Yes (Use EpiPen and call help)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If symptoms worsen, seek emergency medical treatment immediately.\n");
            }

            else if (choice == 4) {  // Vision Loss (Sudden)
                printf("\n--- You selected: VISION LOSS (SUDDEN) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Ask if there was any injury or exposure to chemicals.\n");
                        printf("Was trauma or chemical exposure present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        if (response == 1) {
                            printf("Flush eyes with clean water if chemical, and call emergency services.\n");
                        }
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Cover the affected eye with a clean cloth. Do not apply pressure.\n");
                        printf("Was the eye protected?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Sudden vision loss is a medical emergency. Get help urgently.\n");
            }

            else if (choice == 5) {  // Vehicle Accident Injury
                printf("\n--- You selected: VEHICLE ACCIDENT INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Ensure your safety first, then check if the injured person is conscious.\n");
                        printf("Is the scene safe and person awake?\n[1] Yes\n[2] No (Call for help immediately)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Do not move the person unless there's danger (fire, etc.).\n");
                        printf("Was movement avoided?\n[1] Yes\n[2] No (Only move if absolutely needed)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Apply pressure to bleeding wounds with clean cloth.\n");
                        printf("Was bleeding controlled?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Wait for emergency responders. Stay calm and reassure the injured.\n");
            }
            break;
        case 'W':
        case 'w':
            printf("\nProblems starting with 'W':\n");
            printf("1. Wound (Open Cut)\n");
            printf("2. Wasp Sting\n");
            printf("3. Whiplash\n");
            printf("4. Wheezing\n");
            printf("5. Weak Pulse\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Wound (Open Cut)
                printf("\n--- You selected: WOUND (Open Cut) ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash hands and clean the wound with clean water.\n");
                        printf("Was the wound cleaned?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Stop the bleeding with gentle pressure using clean cloth or gauze.\n");
                        printf("Was bleeding controlled?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Cover the wound with sterile bandage.\n");
                        printf("Was the wound covered?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Change bandage daily. Seek care if wound looks infected.\n");
            }

            else if (choice == 2) {  // Wasp Sting
                printf("\n--- You selected: WASP STING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash the sting area with soap and water.\n");
                        printf("Was the area cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cold compress to reduce swelling and pain.\n");
                        printf("Was a cold compress applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Watch for allergic symptoms like difficulty breathing or swelling of face.\n");
                        printf("Any allergic reaction noticed?\n[1] No\n[2] Yes (Use EpiPen and call emergency services)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Seek medical attention if pain increases or symptoms worsen.\n");
            }

            else if (choice == 3) {  // Whiplash
                printf("\n--- You selected: WHIPLASH ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Apply cold pack to neck to reduce swelling.\n");
                        printf("Was a cold pack applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid moving the neck too much. Use a neck brace if advised.\n");
                        printf("Was neck movement minimized?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: See a doctor if pain continues or worsens over time.\n");
            }

            else if (choice == 4) {  // Wheezing
                printf("\n--- You selected: WHEEZING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Help the person sit upright and stay calm.\n");
                        printf("Was the person calmed and seated?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Offer inhaler if available.\n");
                        printf("Was an inhaler used?\n[1] Yes\n[2] No (Seek emergency help)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Call emergency services if wheezing doesn't stop or worsens.\n");
            }

            else if (choice == 5) {  // Weak Pulse
                printf("\n--- You selected: WEAK PULSE ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Lay the person flat and raise their legs.\n");
                        printf("Was this position applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Keep the person warm and call emergency services immediately.\n");
                        printf("Was emergency help called?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: A weak pulse may indicate shock or internal injury. Do not delay care.\n");
            }
            break;
        case 'X':
        case 'x':
            printf("\nProblems starting with 'X':\n");
            printf("1. X-ray Exposure (Accidental)\n");
            printf("2. Xeroderma (Severe Dry Skin)\n");
            printf("3. Xenobiotic Ingestion (Unknown Substance)\n");
            printf("4. Xiphisternum Injury (Chest Trauma)\n");
            printf("5. Xylitol Poisoning (Pets)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // X-ray Exposure (Accidental)
                printf("\n--- You selected: X-RAY EXPOSURE (Accidental) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Leave the exposure area immediately.\n");
                        printf("Was the area evacuated?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Seek medical evaluation for potential radiation dosage.\n");
                        printf("Was a medical checkup done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Follow-up and documentation are essential for radiation incidents.\n");
            }

            else if (choice == 2) {  // Xeroderma
                printf("\n--- You selected: XERODERMA (Severe Dry Skin) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Apply unscented moisturizer or petroleum jelly generously.\n");
                        printf("Was a suitable cream used?\n[1] Yes\n[2] No (Try now)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid harsh soaps and hot water exposure.\n");
                        printf("Were precautions taken?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Persistent cases may need dermatological care.\n");
            }

            else if (choice == 3) {  // Xenobiotic Ingestion
                printf("\n--- You selected: XENOBIOTIC INGESTION (Unknown Substance) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Do NOT induce vomiting unless told by poison control.\n");
                        printf("Was vomiting avoided?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call poison control or emergency services immediately.\n");
                        printf("Was poison control contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Save any containers or labels for medical staff.\n");
            }

            else if (choice == 4) {  // Xiphisternum Injury
                printf("\n--- You selected: XIPHISTERNUM INJURY (Chest Trauma) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Immobilize the chest and avoid deep breathing or movement.\n");
                        printf("Was movement limited?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply ice to reduce swelling and call emergency help.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Xiphisternum injuries may impact organs—medical care is critical.\n");
            }

            else if (choice == 5) {  // Xylitol Poisoning (Pets)
                printf("\n--- You selected: XYLITOL POISONING (Pets) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Remove the product and prevent further ingestion.\n");
                        printf("Was access blocked immediately?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Rush the pet to the vet. Xylitol causes liver failure in pets.\n");
                        printf("Was the vet contacted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Keep xylitol-containing products away from animals. Time is critical.\n");
            }
            break;
        case 'Y':
        case 'y':
            printf("\nProblems starting with 'Y':\n");
            printf("1. Yellow Jacket Sting\n");
            printf("2. Yellow Skin (Jaundice Sign)\n");
            printf("3. Yawning with Chest Pain\n");
            printf("4. Yersinia Infection (Severe Food Poisoning)\n");
            printf("5. Youth Sports Injury\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Yellow Jacket Sting
                printf("\n--- You selected: YELLOW JACKET STING ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Wash the sting area with soap and water.\n");
                        printf("Was the area cleaned?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cold pack to reduce pain and swelling.\n");
                        printf("Was cold applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Monitor for allergic reaction such as swelling of face or trouble breathing.\n");
                        printf("Any allergic reaction noticed?\n[1] No\n[2] Yes (Use EpiPen and call emergency services)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: If pain increases or allergic symptoms appear, seek emergency medical attention.\n");
            }

            else if (choice == 2) {  // Yellow Skin (Possible Jaundice)
                printf("\n--- You selected: YELLOW SKIN (Jaundice) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Check for other symptoms like fever, fatigue, or dark urine.\n");
                        printf("Are symptoms present?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: This may indicate liver disease. Refer to hospital immediately.\n");
                        printf("Was help contacted?\n[1] Yes\n[2] No (Call now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Yellow skin requires urgent evaluation by a doctor.\n");
            }

            else if (choice == 3) {  // Yawning with Chest Pain
                printf("\n--- You selected: YAWNING WITH CHEST PAIN ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Stop physical activity and sit down calmly.\n");
                        printf("Was the person calmed and seated?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Chest pain during yawning may signal cardiac or muscular causes.\n");
                        printf("Call emergency help if pain persists?\n[1] Called\n[2] Not Yet\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Don't ignore chest pain. Better safe than sorry—get medical advice.\n");
            }

            else if (choice == 4) {  // Yersinia Infection (Food Poisoning)
                printf("\n--- You selected: YERSINIA INFECTION (Severe Food Poisoning) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Hydrate the person with clear fluids.\n");
                        printf("Was hydration attempted?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid anti-diarrhea medication and call a doctor if symptoms worsen.\n");
                        printf("Was medical help sought?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Food poisoning with fever or blood in stool needs medical treatment.\n");
            }

            else if (choice == 5) {  // Youth Sports Injury
                printf("\n--- You selected: YOUTH SPORTS INJURY ---\n");
                step = 1;
                while (step <= 3) {
                    if (step == 1) {
                        printf("Step 1: Stop all activity and have the child rest.\n");
                        printf("Was the child rested?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply ice to injury for 15-20 minutes.\n");
                        printf("Was ice applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 3) {
                        printf("Step 3: Elevate the injured area and seek medical attention if pain/swelling persists.\n");
                        printf("Was elevation and medical attention done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Proper recovery is important to avoid long-term damage. Follow up with a doctor if pain continues.\n");
            }
            break;
        case 'Z':
        case 'z':
            printf("\nProblems starting with 'Z':\n");
            printf("1. Zinc Poisoning\n");
            printf("2. Zika Virus Symptoms\n");
            printf("3. Zygomatic Bone Fracture (Cheekbone Injury)\n");
            printf("4. Zero Pulse (Cardiac Arrest)\n");
            printf("5. Zoster (Shingles Flare-Up)\n");
            printf("Choose the problem (1-5): ");
            scanf("%d", &choice);

            if (choice == 1) {  // Zinc Poisoning
                printf("\n--- You selected: ZINC POISONING ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Identify source (e.g., supplement overdose).\n");
                        printf("Was the source identified?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call poison control and avoid giving food or water.\n");
                        printf("Was emergency help contacted?\n[1] Yes\n[2] No (Call now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Zinc overdose can affect the stomach, heart, and nervous system. Professional help is required.\n");
            }

            else if (choice == 2) {  // Zika Virus
                printf("\n--- You selected: ZIKA VIRUS SYMPTOMS ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Treat symptoms (fever, rash, joint pain) with rest and fluids.\n");
                        printf("Was the person hydrated and resting?\n[1] Yes\n[2] No (Do it now)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Pregnant individuals must seek immediate medical advice.\n");
                        printf("Is the person pregnant or at risk?\n[1] No\n[2] Yes (Seek OB/GYN care now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Zika may pass to a fetus and requires medical evaluation.\n");
            }

            else if (choice == 3) {  // Zygomatic Bone Fracture
                printf("\n--- You selected: ZYGOMATIC BONE FRACTURE (Cheekbone) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Apply cold compress gently to reduce swelling.\n");
                        printf("Was a cold compress applied?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Avoid eating solid food and call a doctor.\n");
                        printf("Was medical help sought?\n[1] Yes\n[2] No (Do it now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Facial fractures need imaging and surgical review.\n");
            }

            else if (choice == 4) {  // Zero Pulse (Cardiac Arrest)
                printf("\n--- You selected: ZERO PULSE (Cardiac Arrest) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Start CPR immediately (30 compressions, 2 breaths).\n");
                        printf("Was CPR started?\n[1] Yes\n[2] No (Start now!)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Call emergency services and use AED if available.\n");
                        printf("Was help contacted and AED used?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Continue CPR until professionals take over. Every second counts.\n");
            }

            else if (choice == 5) {  // Zoster (Shingles)
                printf("\n--- You selected: ZOSTER (SHINGLES FLARE-UP) ---\n");
                step = 1;
                while (step <= 2) {
                    if (step == 1) {
                        printf("Step 1: Avoid touching or scratching the rash area.\n");
                        printf("Was the area left alone?\n[1] Yes\n[2] No (Avoid contact)\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                    if (step == 2) {
                        printf("Step 2: Apply cool compresses and consult a doctor for antiviral meds.\n");
                        printf("Was cooling and medical consultation done?\n[1] Yes\n[2] No\nYour choice: ");
                        scanf("%d", &response);
                        step++;
                    }
                }
                printf("\nFinal Verdict: Zoster can be very painful and contagious. Prompt treatment helps healing.\n");
            }
            break;
        }
    }
