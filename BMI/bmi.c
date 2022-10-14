
#include<stdio.h>


int main()
{
float weight, height, heigh, BMI;
printf("Enter your weight in kg: ");
scanf("%f", &weight); 
printf("\nEnter your height in meter: ");
scanf("%f", &height);
printf("\nYour Weight for BMI is: %f", weight);
heigh = height*height;
printf("\nYour height for BMI is: %f",heigh);

BMI = weight/(heigh);
printf("\nYour BMI is: %f",BMI);

if(BMI<15){
    printf("\nYou are in starvation category.");
}
else if(BMI>=15.1 && BMI <= 17.5){
    printf("\nYou are in Anorexic category.");
}
else if(BMI>=17.6 && BMI<=18.5){
    printf("\nYou are in Underweight category.");
}else if(BMI>=18.6 && BMI<= 24.9){
    printf("\nYou are in Ideal category.");
}else if(BMI>=25 && BMI<= 25.9){
    printf("\nYou are in Overweight category.");
}else if(BMI>=30 && BMI <=30.9){
    printf("\nYou are in Obese category.");
}else if(BMI >= 40){
    printf("\nYou are in Morbidly obese.");
}else{
    printf("\n Wrong inputs.");
}
return 0;
}
