#include <stdio.h>
#include <string.h>
struct student

{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct student harry, rahul, shubham;
void print()
{
    printf("%s", rahul.name);
}
int main()
{

    harry.id = 1;
    rahul.id = 2;
    shubham.id = 3;
    harry.marks = 466;
    rahul.marks = 466;
    shubham.marks = 466;
    harry.fav_char = 'p';
    rahul.fav_char = 'p';
    shubham.fav_char = 'y';
    strcpy(rahul.name, "Rahul the stud");
    // printf("harry got %d marks\n", harry.marks);
    // printf("rahul got %d id\n", rahul.id);
    // printf("shubham got %d fav_char\n", shubham.fav_char);
    // printf("rahul name is: %s\n", rahul.name);
    print();
    return 0;
}
