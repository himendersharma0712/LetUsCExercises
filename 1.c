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

void problemC(){
    
    float percent;
    float total_marks = 0;
    float subject_marks[5]={0,0,0,0,0};

for(int i = 0; i< 5; i++)
{
    
    printf("Enter the marks for subject %d: ",i+1);
    scanf("%f",&subject_marks[i]);

}

for(int i=0; i<5; i++){
total_marks+=subject_marks[i];
}

percent = (total_marks)/500;
printf("The percentage is: %.2lf\n",percent*100);

printf("The aggregate marks are: %.2f",total_marks);

return;

}

void problemD(){

    float fahrenheit,celsius;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (5.0/9.0)*(fahrenheit-32); // 5/9 = 0 in C because of truncation in integer division

    printf("The temperature in celsius is %f",celsius);


}

void problemE(){
    float length,breadth,radius;
    float area_rect,perim_rect,area_circle,circum_circle;

    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area_rect = length*breadth;
    perim_rect = 2*(length+breadth);
    area_circle = 3.14*radius*radius;
    circum_circle = 2*3.14*radius;

    printf("The area of the circle is %.2f and circumference is %.2f.\n",area_circle,circum_circle);

    printf("The area of the rectangle is %.2f and perimeter is %.2f.\n",area_rect,perim_rect);

}

void problemF(){

/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
shorter sides. Thus paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8.
*/

int paper_size[9][2]; // paper size has two dimensions, so 2 columns in the array
paper_size[0][0] = 1189; // A0 dimensions
paper_size[0][1] = 841;  // A0 dimensions

for(int i = 0; i<9;i++)
{
    paper_size[i+1][0] = paper_size[i][1]; // copy the shorter dimension to the next size
    paper_size[i+1][1] = paper_size[i][0]/2; // copy the longer dimension and halve it
}

for(int i = 0; i<9;i++){

        printf("A%i has dimensions %d x %d. \n", i, paper_size[i][0],paper_size[i][1]);
    
}


}



int main()
{

    // problemA();

    // problemB();

    // problemC();

    // problemD();

    // problemE();

    // problemF();



}
