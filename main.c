#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Введіть три значення:");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double result = 1 / (1/t1 + 1/t2 + 1/t3);
    printf(" Час, необхідний для з'їдання пирога:%.2lf\n", result);
    return 0;
}