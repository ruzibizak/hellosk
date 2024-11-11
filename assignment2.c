#include <stdio.h>

int main() {
    int hours[6];      // Array to store hours worked by 6 employees
    int totalHours = 0;
    int wagePerHour = 1000;
    int totalWages;
    
    // Input hours for each employee
    for (int i = 0; i < 6; i++) {
        printf("Enter hours worked by employee %d: ", i + 1);
        scanf("%d", &hours[i]);
        totalHours += hours[i];  // Sum up total hours
    }
    
    // Calculate total wages
    totalWages = totalHours * wagePerHour;
    
    // Display total hours and total wages
    printf("\nTotal hours worked by all employees: %d\n", totalHours);
    printf("Total wages: $%d\n", totalWages);
    
    return 0;
}
