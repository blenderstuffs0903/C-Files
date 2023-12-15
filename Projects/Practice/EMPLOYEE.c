#include <stdio.h>
#include <string.h>

struct employee {
    int employee_code;
    char employee_name[20];
    int basic_salary;
    float HRA;
    int DA;
    int gross;
};
int main() {
    struct employee employees[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter employee code of employee %d", i+1);
        scanf("%d", &employees[i].employee_code);
        printf("Enter name of employee %d", i+1);
        fgets(employees[i].employee_name, 20, stdin);
        employees[i].employee_name[strlen(employees[i].employee_name)-1] = '\0';
        printf("Enter basic salary of %d", i+1);
        scanf("%d", &employees[i].basic_salary);
        employees[i].HRA = employees[i].basic_salary * 0.6;
        employees[i].DA = employees[i].basic_salary * 0.98;
        employees[i].gross = employees[i].HRA + employees[i].DA;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d  %s  %d  %f  %d  %d", employees[i].employee_code, employees[i].employee_name, employees[i].basic_salary, employees[i].HRA, employees[i].DA, employees[i].gross);
        printf("\n");
    }
    return 0;
}