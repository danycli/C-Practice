#include <stdio.h>

int main() {
    float item1, item2, item3, subtotal, taxRate, taxAmount, totalCost;

    printf("Enter the price of item 1: ");
    scanf("%f", &item1);

    printf("Enter the price of item 2: ");
    scanf("%f", &item2);

    printf("Enter the price of item 3: ");
    scanf("%f", &item3);
    
    printf("Enter the tax rate (in percentage): ");
    scanf("%f", &taxRate);
    
    subtotal = item1 + item2 + item3;
    
    taxAmount = subtotal * (taxRate / 100);
    
    totalCost = subtotal + taxAmount;
    
    printf("\n--- Receipt ---\n");
    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax (%.2f%%): $%.2f\n", taxRate, taxAmount);
    printf("Total Cost: $%.2f\n", totalCost);

    return 0;
}
