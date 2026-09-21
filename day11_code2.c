//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cost_price, selling_price, profit_loss_percentage;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost_price, &selling_price);

    if (selling_price > cost_price) {
        profit_loss_percentage = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit %.2f%%\n", profit_loss_percentage);
    } else if (cost_price > selling_price) {
        profit_loss_percentage = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss %.2f%%\n", profit_loss_percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}