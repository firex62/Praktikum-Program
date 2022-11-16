#include <iostream>
using namespace std;

int main(){
	char lap = 't';
	int count = 1 ;
	
	do{
		printf("Apakah jendela anda sudah bersih? (y/t) : ");
		cin >> lap;
		count++;
	}
	
	while(lap == 't');
	
	printf("\nJendela sudah bersih!\n");
	printf("Anda membersihkan jendela sebanyak %i kali\n", count);
	return 0;
}