#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percent;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit = %.2f%%", percent);
    }
    else if (cp > sp) {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss = %.2f%%", percent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}56