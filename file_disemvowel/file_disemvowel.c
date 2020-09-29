#include <stdbool.h>
#include <stdio.h>

#define BUF_SIZE 1024

// Declarations
bool isVowel(char x);
int copy_non_vowels(int num_chars, char* in_buf, char* out_buf);




bool is Vowel(char x) {
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

}

