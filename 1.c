#include <stdio.h>

// Problems from exercise F

int problemA()
{

    /*Ramesh’s basic salary is input through the keyboard. His dearness
    allowance is 40% of basic salary, and house rent allowance is 20% of
    basic salary. Write a program to calculate his gross salary. */

    double salary;
    double da = 0.4, hra = 0.2, gs;

    printf("Enter Ramesh's basic salary: ");
    scanf("%lf", &salary);

    gs = salary + (salary * da) + (salary * hra);

    printf("Gross salary of Ramesh is: %.2lf", gs);

    return 0;
}


void problemB(){
    /*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance in 
meters, feet, inches and centimeters. */

double distance;
double meter,feet,inches,cm;

printf("Enter the distance betwixt two cities(in km): ");
scanf("%lf",&distance);

// 1 feet = 30.48cm = 0.3048m
// 1 inch = 2.54cm

meter = distance*1000;
feet =  (distance*1000)/0.3048;
inches = (distance*1000*100)/2.54;
cm = distance*1000*100;

printf("The distance in meter is: %.3lf\n",meter);
printf("The distance in feet is: %.2lf\n",feet);
printf("The distance in inches is: %.2lf\n",inches);
printf("The distance in centimeters is: %.2lf\n",cm);



}

int main()
{

    problemA();

    problemB();
}
