/* Muhammad Firman Yassin
   Elektronika 1B 
   C020322022
*/

#include <iostream>
using namespace std;

int main(){
	char ulang = 'y';
	int count = 0;
	
	do{
		printf("Apakah kamu ingin mengulang?\n");
		printf("Jawab (y/t): ");
		cin >> ulang;
		
		count ++; //INCREMENT
	}
	
	while(ulang == 'y');
	
	printf("Pengulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali\n", count);
	return 0;
}