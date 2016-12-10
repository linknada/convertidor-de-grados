#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int opci;
float fahr,cels;

int main(){
printf("***************************\n");
printf("* [1]Celsius a Fahreheit  *\n");
printf("* [2]Fahrenheit a Celsius *\n");
printf("***************************\n");
printf("   Escoge una opcion       \n");
scanf("%d",&opci);
system("cls");

if(opci==1){
printf("Escribe los grados Celsus:  ");
scanf("%f",&cels);
system("cls");
fahr=(cels*1.8)+32;
printf("Los grados Fahrenheit son:  %.2f",fahr);
}
else{
printf("Escribe los grados Fahrenheit:  ");
scanf("%f",&fahr);
system("cls");
cels=( fahr-32 ) *5/9;
printf("Los grados Celsius son:  %.2f",cels);
}

}
