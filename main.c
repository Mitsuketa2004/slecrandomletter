#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char mainstr[] = "HelloWorld";
int mainStrsze = sizeof(mainstr);	

void createRandomL(int *letter){
	int randnum = (rand()%(254 - 33 + 1))+33;
	*letter = randnum;
}

int checkStr(char *str1,char *str2){
	for (int i = 0; i <= mainStrsze; i++){
		if (str1[i] != str2[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	srand(time(NULL));
	char strbuf[mainStrsze];
	strbuf[0] = "H";
	while((checkStr(mainstr, strbuf))){
		for (int i = 0; i <= mainStrsze; i++){
			int ibuf = 0;
			if (strbuf[i] != mainstr[i]){
				i = ibuf;
				}
			int letBuffer;
			createRandomL(&letBuffer);
			printf("\n %s \n %i - %c", strbuf, i, letBuffer);
			strbuf[i] = letBuffer;
		}
	
	}
	printf("\n %i \n", mainStrsze);
	printf ("%s - %s", mainstr, strbuf);
return 0;
}