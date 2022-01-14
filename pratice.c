#include <stdio.h>

struct driver
{

        char name[34];
        char dlno[54];
        char route[65];
        int kms;

} dr;
int main()
{

        struct driver d;
        printf("enter the detail of driver %d\n");
        scanf("%s", &d.name);
        printf("enter the name of driver %d\n");
        scanf("%d", &d.dlno);
        printf("enter the route of driver %d\n");
        scanf("%s", &d.route);
        printf("enter the kms of the driver %d\n");
        scanf("%s", &d.kms);

        for (char i = 1; i < 4; i++)
        {
                printf("****printing information these driver***");

                printf("for driver name is %s\n", d.name);
                printf("for driver dlno is %s\n", d.dlno);
                printf("for driver route is %s\n", d.route);
                printf("for driver kms is %d\n", d.kms);
        }
}