#include <iostream>
using namespace std;

int main(){
	char opt = 'y';
	int count = 1 ;
	
	while(opt == 'y'){
		printf("Pengisian ke %i\n", count);
		printf("Apakah mangkok makanan sudah penuh? (y/t) : ");
		cin >> opt;
		count++;
	}
	
	printf("\nMangkok sudah penuh!\n");
	printf("Pengisian selesai!");
	return 0;
}