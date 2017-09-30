#include <stdio.h>
#include <string.h>
bool starDetection(String userInput){
	Strint s, r;
	int numWilds; int j = 0;
	bool isInMiddle = true;
	if(strchr(userInput, '*') != NULL){
		numWilds++;
		s1 = strtok (userInput,'*');//yet to be fixed since there is not a split thing so I will need to make that later
		s2 = strtok(userInput, '*');
	} else {
		print("%s\n", "please input a correct string");
	if(numWilds > 0){
		 for(int i = 0; i < strlen(userInput); i++){
			 if(userInput[i] == '*'){
				 j++;
				 while (isInMiddle) {
					r = userInput[j];
					if (userInput[j+1] == '*'){
						isInMiiddle = false;
					}
				 }
			 }
			 if(r[0] != '\0'){
				 if(strcmp(r, s2) == true) {
					printf("%s\n", "This string is invalid");
					return false;
				 }
				 else {
					 printf("%s\n", "This string is valid");
					 return true;
				 }

				
					
							



