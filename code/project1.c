//union program, age of person

#include <stdio.h>
union Age {
    int years;
    float months;
};
int main() {
    union Age personAge; 
    int preference;
    printf("Enter age:\n");
    printf("1. Years\n");
    printf("2. Months\n");
    printf("Enter your preference from above : ");
    scanf("%d", &preference);
    if (preference == 1) 
    {
        printf("Enter age in years: ");
        scanf("%d", &personAge.years);
    } 
    else if (preference == 2) 
    {
        printf("Enter age in months: ");
        scanf("%f", &personAge.months);
    } 
    else 
    {
        printf("Invalid preference!\n");
        return 1;
    }
    if (preference == 1) 
    {
        printf("Age in years: %d\n", personAge.years);
        printf("Age in months: %.2f\n", personAge.years * 12.0);
    } 
    else 
    {
        printf("Age in years: %d\n", (int)(personAge.months / 12));
        printf("Age in months: %.2f\n", personAge.months);
    }

    return 0;
}
