#include <stdio.h>

struct driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;

} dr;
int main()
{
    struct driver d1, d2, d3;
    printf("enter the detail of the driver no.1\n");
    printf("enter the detail of first driver\n");
    scanf("%s", &d1.name);

    printf("enter the dlno of first driver\n");
    scanf("%s", &d1.dlno);

    printf("enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("enter the kms of first driver\n");
    scanf("%s", &d1.kms);

    printf("enter the detail of the driver no.2\n");
    printf("enter the detail of second driver\n");
    scanf("%s", &d2.name);

    printf("enter the dlno of second driver\n");
    scanf("%s", &d2.dlno);

    printf("enter the route of second driver\n");
    scanf("%s", &d2.route);

    printf("enter the kms of second driver\n");
    scanf("%s", &d2.kms);

    printf("enter the detail of the driver no.3\n");
    printf("enter the detail of third driver\n");
    scanf("%s", &d3.name);

    printf("enter the dlno of third driver\n");
    scanf("%s", &d3.dlno);

    printf("enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("enter the kms of third driver\n");
    scanf("%s", &d3.kms);

printf("******printing information of  these driver******\n");
printf("for driver no 1:\nname is %s\n",d1.name);
printf("dl number is %s\n",d1.dlno);
printf("route is %s\n",d1.route);
printf("kms is %d\n",d1.kms);

printf("for driver no 2:\nname is %s\n",d2.name);
printf("dl number is %s\n",d2.dlno);
printf("route is %s\n",d2.route);
printf("kms is %d\n",d2.kms);

printf("for driver no 3:\nname is %s\n",d3.name);
printf("dl number is %s\n",d3.dlno);
printf("route is %s\n",d3.route);
printf("kms is %d\n",d3.kms);


}
