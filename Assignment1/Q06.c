/*
6. You are tasked with creating a C program to convert a given distance (in meters) to various other units
commonly used in science. Your program should prompt the user for a distance in meters and then
display a table that converts this distance into Kilometers, Centimeters, Millimeters, Feet, and Inches.
The program must satisfy the following requirements.
(a) Prompt the user to enter a distance in meters (floating-point number).
(b) Perform the necessary conversions using the following relationships:
• 1 meter = 0.001 kilometers
• 1 meter = 100 centimeters
• 1 meter = 1000 millimeters
• 1 meter = 3.28084 feet
• 1 meter = 39.3701 inches
(c) Display the conversions in a neatly aligned table using printf with appropriate format specifiers
as follows.
Enter distance in meters: 12.5
+------------------+------------------+
| Unit             | Value            |
+------------------+------------------+
| Meters           |            12.50 |
| Kilometers       |             0.01 |
| Centimeters      |          1250.00 |
| Millimeters      |         12500.00 |
| Feet             |            41.01 |
| Inches           |           492.13 |
+------------------+------------------+
*/

#include <stdio.h>

int main() {
    printf("Enter the distance in meters: ");
    float meters;
    scanf("%f", &meters);

    float kms = meters * 0.001;
    float cms = meters * 100;
    float mms = meters * 1000;
    float feets  = meters * 3.28084;
    float inches = meters * 39.3701;

    printf("+----------------------------------+\n");
    printf("| Unit            | Value          |\n");
    printf("+----------------------------------+\n");
    printf("| Meters          |%15.2f |  \n",meters);
    printf("| Kilometers      |%15.2f |  \n",kms);
    printf("| Centimeters     |%15.2f |  \n",cms);
    printf("| Millimeters     |%15.2f |  \n",mms);
    printf("| Feets           |%15.2f |  \n",feets);
    printf("| Inches          |%15.2f |  \n",inches);
    printf("+----------------------------------+\n");
}

/*
Output
Enter the distance in meters: 30
+----------------------------------+
| Unit            | Value          |
+----------------------------------+
| Meters          |          30.00 |  
| Kilometers      |           0.03 |  
| Centimeters     |        3000.00 |  
| Millimeters     |       30000.00 |  
| Feets           |          98.43 |  
| Inches          |        1181.10 |  
+----------------------------------+
*/