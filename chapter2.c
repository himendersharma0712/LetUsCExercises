#include <stdio.h>
#include<math.h>
# define PI 3.1415926535897932384

// Exercise H

void problemA(){

/*If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’)*/

int number,d1,d2,d3,d4,d5,sum;

printf("Enter a five digit number: ");
scanf("%d",&number);

d1 = number/10000;
d2 = (number%10000)/1000;
d3 = (number%1000)/100;
d4 = (number%100)/10;
d5 = (number%10)/1;

sum = d1 + d2 + d3 + d4 + d5;

printf("The sum of the digits is : %d",sum);

}

void problemB(){
/* If a five-digit number is input through the keyboard, write a 
program to reverse the number. */

int number,d1,d2,d3,d4,d5,reversed;

printf("Enter a five digit number: ");
scanf("%d",&number);

d1 = number/10000; // dividing by 10000 leaves just the first digit
d2 = (number%10000)/1000; // the remainder of the five digit number gives us a four digit number 
d3 = (number%1000)/100;                                  // the first digit of the 4 digit number is given by / 1000
d4 = (number%100)/10;                                    // and this process continues
d5 = (number%10)/1;

reversed = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;

printf("The reversed number is : %d",reversed);

}


void problemC(){
    /*If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle. */


float a,b,c,semi_per,area;

printf("Enter side a: ");
scanf("%f",&a);
printf("Enter side b: ");
scanf("%f",&b);
printf("Enter side c: ");
scanf("%f",&c);

semi_per = (a+b+c)/2;

area = sqrtf(semi_per*(semi_per-a)*(semi_per-b)*(semi_per-c));

printf("The area is %.2f",area);


}


void problemD(){

/*Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r,phi).  
Hint:  r = sqrt ( x2 + y2 ) and tan-1 ( y / x )*/

float x,y,r,phi;

printf("Enter x: ");
scanf("%f",&x);
printf("Enter y: ");
scanf("%f",&y);

float squared_sum = x*x + y*y;

r = sqrt(squared_sum); // distance from origin 

phi = atan(y/x); // angle in rad

float phi_degrees = phi * (180.0/PI);


printf("The polar coordinates corresponding to (%.2f,%.2f) are (%.2f,%.2f).",x,y,r,phi_degrees);


}

void problemE(){

/*Write a program to receive values of latitude (L1, L2) and longitude 
(G1, G2), in degrees, of two places on the earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is: 
D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) ) */

double L1,L2,G1,G2,nautical_miles;

printf("Enter L1: ");
scanf("%lf",&L1);
printf("Enter L2: ");
scanf("%lf",&L2);
printf("Enter G1: ");
scanf("%lf",&L1);
printf("Enter G2: ");
scanf("%lf",&L2);

double L1_r,L2_r,G1_r,G2_r;

// sin and cos take values in radians

L1_r = L1*(PI/180.0);
L2_r = L2*(PI/180.0);
G1_r = G1*(PI/180.0);
G2_r = G2*(PI/180.0);

nautical_miles = 3963*acos(sin(L1_r)*sin(L2_r)+(cos(L1_r)*cos(L2_r))*cos(G2_r-G1_r));

printf("The distance is %.2lf.",nautical_miles);


}


void problemF(){
/* Wind chill factor is the felt air temperature on exposed skin due to 
wind. The wind chill temperature is always lower than the air 
temperature, and is calculated as per the following formula: 
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v^0.16 
where t is the temperature and v is the wind velocity. Write a 
program to receive values of t and v and calculate wind chill factor 
(wcf). */

// say temp is in C
// v is in m/s
float t,wcf,v;

printf("Enter t(in C): ");
scanf("%f",&t);

printf("Enter v(in m/s): ");
scanf("%f",&v);

wcf = 35.74 + (0.6125*t) + (0.4275*t - 35.75) * pow(v,0.16);

printf("The wind chill factor is %f",wcf);


}


void problemG(){

/* If value of an angle is input through the keyboard, write a program 
to print all its Trigonometric ratios. 
*/
double sine,cosine,tangent,cotan,cosecan,secan,angle;

printf("Enter angle in degrees: ");
scanf("%lf",&angle);

double ang_rad = angle*(PI/180.0);

sine = sin(ang_rad);
cosine = cos(ang_rad);
tangent = tan(ang_rad);
cosecan = 1.0/sine;
secan = 1.0/cosine;
cotan = 1.0/tangent;

printf("sin: %.2lf, cos : %.2lf, tan : %.2lf, cosec: %.2lf, sec: %.2lf, cot: %.2lf",sine,cosine,tangent,cosecan,secan,cotan);

}



void problemH(){

    /*Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D. */

int C,D,temp;
printf("Enter C and D (respectively): ");
scanf("%d %d",&C,&D);

printf("C is %d and D is %d.",C,D);

temp = C;
C = D;
D = temp;

printf("\nC is %d and D is %d.",C,D);

}



void problemI(){
/*Consider a currency system in which there are notes of seven 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N. 
*/


    int N;
    printf("Enter the amount in Rs.: ");
    scanf("%d", &N);

    int denominations[] = {100, 50, 10, 5, 2, 1};
    int num_notes[6] = {0}; // Initialize an array to store the count of each denomination

    for (int i = 0; i < 6; i++) {
        while (N >= denominations[i]) { // say 1500 >= 100 (for i = 0)
            N -= denominations[i]; // 1500 - 100 
            num_notes[i]++;  // rs 100  notes count goes up by 1
        }
    }

    printf("Minimum number of notes:\n");
    for (int i = 0; i < 6; i++) {
        if (num_notes[i] > 0) {
            printf("%d x Rs. %d\n", num_notes[i], denominations[i]);
        }
    }




}




int main(){


// problemA();

// problemB();

// problemC();

// problemD();

// problemE();

// problemF();

// problemG();

// problemH();

problemI();

}