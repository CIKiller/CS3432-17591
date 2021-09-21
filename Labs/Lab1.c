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
	
	for (int i = 1; i < strlen(str); i++) {
		if (delim_character(str[i - 1])) {
			char* first = &str[i];
			
			return first;
		}
	}
}

/* Returns a pointer to the first space character of the zero
terminated string*/
char *end_word(char* str){
	
	int i = 0;
	
	char* end;
	
	while (str[i] != '\0') {
		i++;
	}
	
	while (str[i - 1] != ' ') {
		i--;
	}
	
	end = &str[i];
	
	return end;
}

// counts the number of words or tokens
int count_tokens(char* str){
	
	int tokens = 1;
	
	int i = 0;
	
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			tokens++;
			
		}
		
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
	
	char cop[100];
	
	int i = 0;
	
	while (i < len) {
		cop[i] = inStr[i];
		i++;
	}
	
	char* copy = cop;
	
	return copy;
}

char** tokenize(char* str){
	
	int tok = count_tokens(str);
	
	char** tokens = (char**) malloc(tok * sizeof(char*));
	
	int i = 1;
	
	char* k = str;
	
	tokens[0] = (char*) malloc(20 * sizeof(char));
	
	tokens[0] = k;
	
	printf("%c \n", *k);
	
	while (i < tok) {
		tokens[i] = (char*) malloc(20 * sizeof(char));	
		
		k = word_start(k);
		
		tokens[i] = k;

		printf("%c \n", *k);

		i++;
	}
		
	return tokens;
}


void print_all_tokens(char** tokens){
	
	printf("Token[0]: %s \n", tokens[0]);
	
	for (int i = 0; i < 4 /*count_tokens(tokens[0])*/; i++) {
		
		printf("Token[%d]: ", i);
		
		char* j = tokens[i];

		while (*j != ' ') {
			printf("%c", *j);
			j++;
		}
		printf("\n");
	}
	
	
}

main() {
	
  char input[] = {"Hello Beautiful Wonderful Owl"};
	
  printf("Enter a string: \n");
	
  //scanf("%[^\n]%*c", input);
	
  printf("Your input: %s. \n", input);
	
  char* str = input;
	
  int tokens = count_tokens(str);
	
  printf("Tokens: %d \n",tokens);
	
  char* end = end_word(str);
	
  printf("First letter of the final word: %c \n", *end);
	
  char* copy = copy_str(str, ' ');
	
  printf("Copy of String: %s \n", copy);
	
  char** tokenized = tokenize(str);
	
  print_all_tokens(tokenized);
	
}
