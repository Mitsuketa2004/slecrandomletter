#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char *mainstr, *enredstr;


void createRandomL(char *letter){
	for(int i = 0; i <= 1 ; i++){
		int randnum = rand()% 254;
		*letter = randnum;
		if(randnum > 1 && randnum < 31){
			i = 0;
		}else{
			i = 2;
		}
	}
}

int checkStr(char *str1,char  *str2){
	for (int i = 0; i < strlen(str1); i++){
		if (str1[i] != str2[i] ){			
			return 1;
		}
	}
	return 0;
}

void enterstr(){
	enredstr = malloc(100 * sizeof(char*));
	if(fgets (enredstr, 100, stdin) != NULL){
		int enredlen = strlen(enredstr);
		int i = 0;
		enredstr[enredlen-1] = '\0';
		mainstr = malloc (enredlen * sizeof(char*));
		strcpy(mainstr, enredstr);
		printf("%s", mainstr);
	}else{
		printf("Error, enter a phrase please!\n");
		enterstr();
	}
}

int main(){
	srand(time(NULL));
	printf("Enter a phrase or a word, limit 100 char's")
	enterstr();
	int mainStrsze = strlen(mainstr);
	char *strbuf = malloc(mainStrsze * sizeof(char*));
	while(checkStr(mainstr, strbuf) == 1){
		int i = 0;
		for (i = 0; i < mainStrsze; i++){
				if(strbuf[i] != mainstr[i]){
					createRandomL(&strbuf[i]);					
				}
		printf("\n %s - %s", mainstr, strbuf);
		}
	}
return 0;
}