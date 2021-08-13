#include <stdio.h>
#include <stdlib.h>


struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.54;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student2.age = 24;
    student2.gpa = 3.1;
    strcpy( student2.name, "Alex");
    strcpy( student2.major, "Art");

    printf("%s\n", student1.name);
    printf("%s\n", student2.major);


    return 0;
}
