#include <stdio.h>
#include <string.h>

int main() {
    int Age, M_Certificate;
    char Eyetest, Writingtest, Drivingtest;

    printf("Enter your Age: ");
    scanf("%d", &Age);

    if (Age < 18) {
        printf("You are not eligible for a driving license\n");
    } else {
        printf("Enter Results of Eye Test Pass(P) OR Fail(F): ");
        scanf(" %c", &Eyetest); 

        if (Eyetest == 'F' || Eyetest == 'f') {
            printf("You may need to wear glasses\n");
        }

        printf("Enter Result of Writing Test: ");
        scanf(" %c", &Writingtest);

        if (Writingtest == 'F' || Writingtest == 'f') {
            printf("You need to Re-sit the test\n");
        }

        printf("Enter Result of Driving Test: ");
        scanf(" %c", &Drivingtest);

        if (Drivingtest == 'F' || Drivingtest == 'f') {
            printf("You need to Re-take the Driving Test\n");
        }

        if (Age >= 60) {
            printf("Enter 1 if you have a Medical Fitness Certificate or 0 in case you don't: ");
            scanf("%d", &M_Certificate);
            if (M_Certificate == 0) {
                printf("You are not Eligible For Driving license\n");
            } else {
                printf("You are eligible for a Driving license\n");
            }
        } else {
            printf("You are eligible for a Driving license\n");
        }
    }

    return 0;
} 
