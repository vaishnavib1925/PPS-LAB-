Assignment8.c
#include <stdio.h>

void findDistance(float *D, float *NL, float *NR, float *total)
{
    float C, dL, dR;

    C = 3.14 * (*D);

    dL = (*NL) * C;
    dR = (*NR) * C;

    *total = (dL + dR) / 2;
}

int main()
{
    float D, NL, NR, total;

    printf("Enter wheel diameter: ");
    scanf("%f", &D);

    printf("Enter left wheel rotations: ");
    scanf("%f", &NL);

    printf("Enter right wheel rotations: ");
    scanf("%f", &NR);

    findDistance(&D, &NL, &NR, &total);

    printf("Total distance travelled = %.2f", total);

    return 0;
}