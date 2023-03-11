#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char mainstr[] = "lelé da cuca";
int mainStrsze = sizeof(mainstr);	

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
	for (int i = 0; i < mainStrsze; i++){
		if (str1[i] != str2[i] ){			
			return 1;
		}
	}
	return 0;
}
/**void enterstr(){
	char *enredstr = malloc(1000000);
	printf("entered input = %s \nsize = %d", enredstr, sizeof(enredstr));
	if(fgets (enredstr, 5, stdin) != NULL){
		printf("entered input = %s \nsize = %d", enredstr, strlen(enredstr));
	}else{
		printf("Error, enter a phrase please!");
		enterstr();
	}
}**/

int main(){
	srand(time(NULL));
	//enterstr();
	char *strbuf = malloc((mainStrsze) * sizeof(char));
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