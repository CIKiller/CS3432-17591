#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').
   Zero terminators are not printable (therefore false) */
bool delim_character(char c){
	if (c == ' ' || c== '\t') {
		return true;
	}
	
	return false;
}

/* Return true (non-zero) if c is a non-whitespace
   character (not tab or space).
   Zero terminators are not printable (therefore false) */
bool non_delim_character(char c){
	if (delim_character(c) == false) {
		return true;
	}
	
	return false;
}

/* Returns a pointer to the first character of the next
   space-separated word*/
char *word_start(char* str){
	
	for (int i = 1; i < sizeof(*str); i++) {
		if (delim_character(str[i - 1])) {
			char* first = &str[i];
			
			return first;
		}
	}
	return ' ';
}

/* Returns a pointer to the first space character of the zero
terminated string*/
char *end_word(char* str){
	
}

// counts the number of words or tokens
int count_tokens(char* str){
	
	tokens = 0;
	
	for (int i = 0; i < sizeof(*str); i++) {
		if (delim_character(str[i])) {
			tokens++;
		}
	}
	return tokens;
}

/* Returns a freshly allocated zero-terminated vector of freshly allocated
   space-separated tokens from zero-terminated str.
   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string"
     tokens[3] = 0
*/
char *copy_str(char *inStr, short len){

}

char** tokenize(char* str){

}


void print_all_tokens(char** tokens){

}

main() {
  
  char input;
  
  printf("Please input a sentence.", "/n");
  
  scanf("%c", &input);
	
  char* pointer = &input;
	
  printf("There are ", count_tokens(pointer), "Tokens.");
	
}
