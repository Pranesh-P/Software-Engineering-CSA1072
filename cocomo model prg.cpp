#include <stdio.h>
#include <math.h>

// Function to calculate the effort required in person-months
double calculateEffort(double size, double effortCoefficient, double exponent) 
{
    return effortCoefficient * pow(size, exponent);
}

// Function to calculate the development time in months
double calculateDevelopmentTime(double effort, double timeCoefficient, double exponent) 
{
    return timeCoefficient * pow(effort, exponent);
}

int main() 
{
    // Size of the software project (in KLOC - Kilo Lines of Code)
    double size = 100; // Example size
    
    // COCOMO 81 Basic parameters for organic projects
    double effortCoefficient = 2.4; // Example coefficient for organic projects
    double timeCoefficient = 2.5; // Example coefficient for organic projects
    double exponent = 1.05; // Example exponent for organic projects
    
    // Calculate effort and development time
    double effort = calculateEffort(size, effortCoefficient, exponent);
    double developmentTime = calculateDevelopmentTime(effort, timeCoefficient, exponent);
    
    printf("Estimated Effort (Person-Months): %.2lf\n", effort);
    printf("Estimated Development Time (Months): %.2lf\n", developmentTime);
    
    return 0;
}

