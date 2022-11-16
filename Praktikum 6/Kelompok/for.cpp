#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	for(int air = 0 ; air <= 10 ; air++){
		printf("Air kolam sudah terisi sebanyak %i liter kubik\n", air);
		sleep(1);
	}
	
	cout << "\nSelesai!\a"<< endl ;
	
	cout << "\n\n======== PROGRAM INI DIDUKUNG OLEH STACKOVERFLOW ========" << endl;
	return 0;
}