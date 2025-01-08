#include <stdio.h>

int main() {
    char name[100];
    int reg_num, backlogs;
    float cgpa;

    scanf("%s", name);
    scanf("%d", &reg_num);
    scanf("%f", &cgpa);
    scanf("%d", &backlogs);

    if ((backlogs == 0 && cgpa >= 7.0) || ((backlogs == 1 || backlogs == 2) && cgpa >= 7.5)) {
        printf("%s\n%d\nEligible to attend placement\n", name, reg_num);
    } else {
        printf("%s\n%d\nNot Eligible to attend placement\n", name, reg_num);
    }

    return 0;
}
