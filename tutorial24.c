#include <stdio.h>
int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometer = 0.0254;
    float first, second;

    while (1)

    {
        printf("enter the input character . q to quit\n     1. km to miles\n      2. inches to foot\n      3. cm to inches\n      4. pound to kgs\n      5. inches to meter\n");

        scanf("%c", &input);

        switch (input)
        {
        case 'q ':
            printf("Quitting the program...");

            goto end;
            break;

        case '1':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f inches  is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cm is equal to %f inches\n", first, second);
            break;

        case '4':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f pound  is equal to %f kgs\n", first, second);
            break;

        case '5':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchestometer;
            printf("%f inches is equal to %f meters\n", first, second);
            break;

        default:
            
            break;
        }
    }

end:
    return;
}
