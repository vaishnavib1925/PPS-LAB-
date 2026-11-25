Assignment9.c

#include <stdio.h>

struct SensorData
{
    float soilMoisture;
    float temperature;
    float humidity;
    int cropHealth;
    float latitude;
    float longitude;
};

void inputData(struct SensorData s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details for Area %d\n", i + 1);

        printf("Enter soil moisture: ");
        scanf("%f", &s[i].soilMoisture);

        printf("Enter temperature: ");
        scanf("%f", &s[i].temperature);

        printf("Enter humidity: ");
        scanf("%f", &s[i].humidity);

        printf("Enter crop health (0-100): ");
        scanf("%d", &s[i].cropHealth);

        printf("Enter GPS latitude: ");
        scanf("%f", &s[i].latitude);

        printf("Enter GPS longitude: ");
        scanf("%f", &s[i].longitude);
    }
}

void displayData(struct SensorData s[], int n)
{
    int i;

    printf("\n\n===== FIELD MONITORING REPORT =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nArea %d\n", i + 1);

        printf("Soil Moisture: %.2f\n", s[i].soilMoisture);
        printf("Temperature: %.2f C\n", s[i].temperature);
        printf("Humidity: %.2f %%\n", s[i].humidity);
        printf("Crop Health: %d\n", s[i].cropHealth);

        printf("GPS Coordinates: %.4f, %.4f\n",
               s[i].latitude, s[i].longitude);

        if(s[i].soilMoisture < 30)
        {
            printf("Irrigation Status: Water Required\n");
        }
        else
        {
            printf("Irrigation Status: No Irrigation Required\n");
        }

        if(s[i].cropHealth < 50)
        {
            printf("Crop Condition: Poor\n");
        }
        else
        {
            printf("Crop Condition: Healthy\n");
        }
    }
}

int main()
{
    struct SensorData s[50];
    int n;

    printf("AGRICULTURAL ROBOT SENSOR DATA MANAGEMENT\n");

    printf("\nEnter number of areas: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50)
    {
        printf("Invalid number of areas!\n");
        return 0;
    }

    inputData(s, n);

    displayData(s, n);

    return 0;
}