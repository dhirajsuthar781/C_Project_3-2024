// nested structure 

#include <stdio.h>


struct Car {
    char model[20];
    int year;
    float price;
};

struct CarMake {
    char make[20];
    struct Car cars[3]; 
};

int main() 
{
    struct CarMake carMakes[3]; 
   
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter manufacturer of car %d: ", i + 1);
        scanf("%s", carMakes[i].make);

       
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter model %d details (name, year, price): ", j + 1);
            scanf("%s %d %f", carMakes[i].cars[j].model, &carMakes[i].cars[j].year, &carMakes[i].cars[j].price);
        }
    }

    
    printf("\nInformation about all cars:\n");

    for (int i = 0; i < 3; i++) 
    {
        printf("\nManufacturer: %s\n", carMakes[i].make);
        printf("-------------------------------------------------\n");

        for (int j = 0; j < 3; j++) 
        {
            printf("Model: %s\n", carMakes[i].cars[j].model);
            printf("Year: %d\n", carMakes[i].cars[j].year);
            printf("Price: %.2f\n", carMakes[i].cars[j].price);
            printf("\n");
        }

        printf("-------------------------------------------------\n");
    }

    return 0;
}
