#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

// Declarations
bool isVowel(char x);
int copy_non_vowels(int num_chars, char* in_buf, char* out_buf);




bool isVowel(char x) {
	if (x == 'a' ||
	    x == 'e' ||
 	    x == 'i' ||
 	    x == 'o' ||
 	    x == 'u' ||
 	    x == 'A' ||
 	    x == 'E' ||
 	    x == 'I' ||
 	    x == 'O' ||
 	    x == 'U' ){
		return 1;
	}
		return 0;
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {

	// Variable to keep track of the index in the out_buf array
	int index = 0;
	int i;
	// Looping through the given in_buf array to find the length of the strings.	
	for (i = 0; in_buf[i] != '\0'; ++i) {
		if (!isVowel(in_buf[i])) {
			out_buf[index] = in_buf[i];
			++index;
		}
	}

	return index;
}

void disemvowel(FILE* inputFile, FILE* outputFILE) {

}

int main(int argc, char*argv[]) {
	FILE *inputFile;
	FILE *outputFile;

	disemvowel(inputFile, outputFile);

	return 0;
}
