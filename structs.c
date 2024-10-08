#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
}; /*There is a ';' here, don't forget that*/

int main(){
    struct Student s1;
    s1.age=22;
    s1.gpa=3.5;
    /**
     * We need use strcpy to value the string type value of a struct
     * */ 
    strcpy(s1.name,"Sam");
    strcpy(s1.major"Math");

    printf("%s",s1.major);
    return 0;
}
