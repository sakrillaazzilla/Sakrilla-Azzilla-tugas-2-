#include <stdio.h>
#include <math.h>

int main (){
	float alas, tinggi, miring;
	
	
	printf("masukkan panjang alas segitiga: ");
	scanf("%f", &alas);
	
	printf("masukkan panjang tinggi segitiga: ");
	scanf("%f", &tinggi);
	
	
	miring = sqrt(alas*alas + tinggi*tinggi);
	
	
	
	printf("panjang isi miring segitiga adalah: %.2f cm\n", miring);
	
	return 0;
}
