//student information with array of structure

#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    int phone;
    char std[20];
    float per;
};

int main()
{
    struct student st[4];
    int i;
    
    printf("Enter The Information Of Four student :\n");
    
    for(i=0;i<4;i++)
    {
        printf("\n Enter Name : ");
        scanf("%s", &st[i].name);
        
        printf("\n Enter Roll Number : ");
        scanf("%d", &st[i].rollno);
        
        printf("\n Enter Phone Number : ");
        scanf("%d", &st[i].phone);
        
        printf("\n Enter Class : ");
        scanf("%s", &st[i].std);
        
        printf("\n Enter Percentage : ");
        scanf("%f", &st[i].per);
    }
    
    printf("Student Information List : ");
    
    for(i=0;i<4;i++)
    {
        printf("Name : %s, Roll Number : %d, Phone Number : %d, Class : %s, Percentage : %f", st[i].name, st[i].rollno, st[i].phone, st[i].std, st[i].per);
        printf("\n------------------------------------------------------------");
    }
}