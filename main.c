#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int createRandomL(){
	int randnum = rand() % 63;
	return randnum;
}
int checkStr(char* str1, char* str2){
	int i;
	for (i = 0; i <= sizeof(str1); i++){
		if (str1[i] != str2[i]){
			return 1;
		}
	}
	return 0;
}
int main(){
	srand(time(NULL));
	char *strToF = "Hello World", *strFin;
	
	while((checkStr(strToF, strFin))){
		for (int i = 0; i <= sizeof(strToF); i++){
			int ibuf;
			strFin[i] = createRandomL();
			if (strFin[i] != strToF[i]){
				i = ibuf;
			}
		}
	}
	printf ("%s -%s", strToF, strFin);

return 0;
}