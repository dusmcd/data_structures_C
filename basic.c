#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[50];
    int hireDate;
    float salary;
};

int main(void) {
    struct employee dustin = {.name = "Dustin", .hireDate = 23, .salary = 59000.00};
    printf("Employee name: %s  Employee hire date: %d  Employee salary %f\n", 
            dustin.name, dustin.hireDate, dustin.salary);
    
    struct employee stan;
    // read in second employee
    printf("Enter new employee (name, hire date, and salary) separated by space:\n");
    scanf("%s %d %f", stan.name, &stan.hireDate, &stan.salary);

    printf("Employee name: %s  Employee hire date: %d  Employee salary %f\n", 
            stan.name, stan.hireDate, stan.salary);
    return 0;
}