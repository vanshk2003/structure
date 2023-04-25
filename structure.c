#include <stdio.h>
struct student {
    char Name[50];
    int PRN;
    float Marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    for (i = 0; i < 5; ++i) {
        s[i].PRN = i + 1;
        printf("\n PRN %d\n", s[i].PRN);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        fflush(stdin);
        printf("Enter Marks: ");
        scanf("%f", &s[i].Marks);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 5; ++i) {
        printf("\nPRN: %d\n", i + 1);
        printf("Name: ");
        puts(s[i].Name);
        printf("Marks: %.1f", s[i].Marks);
        printf("\n");
    }
    return 0;
}



