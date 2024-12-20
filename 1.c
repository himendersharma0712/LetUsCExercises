#include <stdio.h>

// Problems from exercise F

int problemA(){

/*Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary. */


double salary;
double da=0.4, hra=0.2,gs;

printf("Enter Ramesh's basic salary: ");
scanf("%lf",&salary);

gs = salary + (salary*da) + (salary*hra);

printf("Gross salary of Ramesh is: %.2lf",gs);

return 0;



}


int main(){

problemA();



}


