#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').
   Zero terminators are not printable (therefore false) */
bool delim_character(char c){
	
	return (c == ' ' || c== '\0'); 
	
}

/* Return true (non-zero) if c is a non-whitespace
   character (not tab or space).
   Zero terminators are not printable (therefore false) */
bool non_delim_character(char c){
	
	return (!delim_character(c));
}

/* Returns a pointer to the first character of the next
   space-separated word*/
char *word_start(char* str){
	
	for (int i = 1; i < sizeof(str); i++) {
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
	
	int i = 0;
	
	while (str[i] != '\t') {
		i++;
		
		if (str[i] == '\t') {
			printf("Found the end of the string at i = %d", i);
		}
	}
	
	
		
}

// counts the number of words or tokens
int count_tokens(char* str){
	
	int tokens = 0;
	
	int i = 0;
	
	while (str[i] != ('\0' || '\t')) {
		printf("%d", *str[i]);
		
		i++;
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
	
  char input[100];
	
  printf("Enter a string: \n");
	
  scanf("%[^\n]%*c", input);
	
  printf("You input: %s. \n", input);
	
  char* str = input;
	
  /*char* let = word_start(str);
	
  printf("%c", *let);*/
	
  char wor[] = ("Hello beautiful world");
	
  char* word = wor;
	
  int tokens = count_tokens(word);
	
  printf("Tokens: %d",tokens);
	
  //char* end = end_word(str);
	
}
