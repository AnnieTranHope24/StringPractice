#include "ourstrings.h"
#include <stdio.h>
void copy (char src[], char dest[]) {
	int i;
	i=0;
	while((dest[i] = src[i]) != '\0'){
		++i;
	}
}
int strlength(char str[]){
	int i;
	i=0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}
int replace (char str[], char original[], char replacement[]){
	if(strlength(original) != strlength(replacement) ){
		return -1;
	}
	else{
		int i, j, count;
		i=0;		
		count = 0;
		while(str[i] !='\0'){
			j=0;
			while(original[j] !='\0'){
				if(str[i] == original[j]){
					str[i] = replacement[j];
					++count;
				}
				++j;
			}
			++i;
		}
		return count;		
	}
}
void strtolower (char input[]){
	 int i;
	 i = 0;
	 while(input[i] != '\0'){
		 if(input[i]>=65 && input[i]<=90){
			 input[i] = input[i] + 32;
		 }
		 ++i;
	 }
	 
 }
int strcompare(char str1[], char str2[]){
	int i;
	i = 0;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] > str2[i]){
			return 1;
		}
		else if(str1[i] < str2[i]){
			return -1;
		}
		i++;
	}
	if(str1[i] == '\0' && str2[i] == '\0'){
		return 0;
	}
	else{
		if(str1[i] != '\0'){
			return 1;
		}
		else if(str2[i] != '\0'){
			return -1;
		}
	}
}