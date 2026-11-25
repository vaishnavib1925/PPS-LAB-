Assignment7.c

#include <stdio.h>

int main()
{
    int id[3], reading[3];
    char position[3][10];
    int i, left, centre, right;

    left = centre = right = 0;

    printf("Enter details of 3 sensors:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Sensor ID: ");
        scanf("%d", &id[i]);

        printf("Enter Sensor Position (Left=1 Centre=2 Right=3): ");
        scanf("%d", &reading[i]);

        printf("Enter Analogue Reading: ");
        scanf("%d", &reading[i]);

        if(reading[i] < 100)
        {
            printf("Sensor %d: No Line Detected\n", id[i]);
        }
        else if(reading[i] >= 100 && reading[i] <= 500)
        {
            printf("Sensor %d: Line Detected\n", id[i]);

            if(i == 0)
                left = 1;
            else if(i == 1)
                centre = 1;
            else
                right = 1;
        }
        else
        {
            printf("Sensor %d: High Reading\n", id[i]);
        }
    }

    printf("\nOverall Robot Position: ");

    if(centre == 1 && left == 0 && right == 0)
        printf("Centre");
    else if(left == 1 && centre == 0)
        printf("Left");
    else if(right == 1 && centre == 0)
        printf("Right");
    else if(left == 1 && centre == 1 && right == 1)
        printf("On Track");
    else
        printf("Adjust Position");

    return 0;
}