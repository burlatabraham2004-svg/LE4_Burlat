 #include <stdio.h>

int main() {
    char FullName[30];
    char section[20];
    int Quarter_1;
    int Quarter_2;
    int Quarter_3; 
    int Quarter_4;
    float average;
    
    printf("Enter Complete Name: ");
    fgets(FullName, 30, stdin);
    
    printf("Enter Section: ");
    fgets(section, 20, stdin);
    
    printf("\nEnter 1st Quarter Grade: ");
    scanf("%d", &Quarter_1);
    
    printf("\nEnter 2nd Quarter Grade: ");
    scanf("%d", &Quarter_2);
    
    printf("\nEnter 3rd Quarter Grade: ");
    scanf("%d", &Quarter_3);
    
    printf("\nEnter 4th Quarter Grade: ");
    scanf("%d", &Quarter_4);
    
    average = (Quarter_1 + Quarter_2 + Quarter_3 + Quarter_4) / 4.0;
    
    printf("\nStudent: %s", FullName);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    if (average >=90 && average <= 100)
        printf("Remarks: Outstanding\n");
        
    else if (average >=85 && average <= 89)
        printf("Remarks: Very Satisfactory\n");
        
    else if (average >= 80 && average <= 84)
        printf("Remarks: Satisfactory\n");
        
    else if (average >=75 && average <= 79)
    printf("Remarks: Fair\n");
    
    else
        printf("Remarks: Failed\n");
        
    
    
    return 0;
}