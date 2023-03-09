#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char mainstr[] = "CAGUEI";
int mainStrsze = sizeof(mainstr);	

void createRandomL(char *letter){
	int randnum = (rand()%(254 - 33 + 1))+33;
	*letter = randnum;
}

int checkStr(char *str1,char  *str2){
	for (int i = 0; i < mainStrsze; i++){
		if (str1[i] != str2[i] ){			
			return 1;
		}
	}
	return 0;
}
int main(){
	srand(time(NULL));
	char *strbuf = malloc((mainStrsze) * sizeof(char));
	while(checkStr(mainstr, strbuf) == 1){
		int i = 0;
			while(strbuf[i] < mainStrsze){
				if (strbuf[i] == mainstr[i]){
					i++;
				}else{
					createRandomL(&strbuf[i]);
				}
				
			}
		/**for (int i = 0; i < mainStrsze; i++){
			if (i != mainStrsze && strbuf[i] != '\0'){
				if(strbuf[i] != mainstr[i]){
					createRandomL(&strbuf[i]);
				} else {
					i++;
				}
			}
		}**/
		printf (" %s - %s \n", mainstr, strbuf);
	}	
return 0;
}