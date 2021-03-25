#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define MAX 10000
int global;

int getInput() {
	printf("Enter your input\n");
	scanf("%d",&global);
	return global;
}

int main() {
		int input;
		char *buffer;
    input = getInput();
    if(input > 0) {
    	buffer = (char*)malloc(input * sizeof(char*));
    	for(int i = 0; i < input; i++){
    		printf("Arbitrary code \n");
    	}    
    }
    
    return 0;
}
