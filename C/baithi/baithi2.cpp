#include <stdio.h>
 float crystalTienDien(int soKWh) {
 	float bank;
 	if (soKWh<=50){
 		bank = soKWh *500 ;
	 }
	 else if(soKWh<=100){
	 	bank = 50 * 500 + (soKWh-50) * 700;
	 }
	 else{
	 	bank = 50 * 500 + 50 *700 + (soKWh-100) * 900;
	 }
	 return bank;
 }
 int main(){
 	int Cantra1=30,Cantra2=80,Cantra3=120;
 	printf("Electricity bill for %d kWh: %.2f VND\n", Cantra1, crystalTienDien(Cantra1));
    printf("Electricity bill for %d kWh: %.2f VND\n", Cantra2, crystalTienDien(Cantra2));
    printf("Electricity bill for %d kWh: %.2f VND\n", Cantra3, crystalTienDien(Cantra3));

    return 0;}
