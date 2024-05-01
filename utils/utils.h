#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <string.h>
void char_upperCase(char* c) {
    if (*c >= 'a' && *c <= 'z') *c -= 32;
}

void char_lowerCase(char* c) {
    if (*c >= 'A' && *c <= 'Z') *c += 32;
}

void string_lowerCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) char_lowerCase(&(str[i])); 
}

void string_upperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) char_upperCase(&(str[i])); 
}

void string_print(char* str) { printf("%s\n", str); }

int string_countWords(const char* str){  // ! Still dont understand
  int num_words = 0;
  char prev_char = ' ';
  for(int i = 0; str[i] != '\0'; i++) 
    if(str[i] != ' ' && prev_char == ' ') num_words++;

  return num_words;
}

void char_swap(char* x, char* y){
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int string_size(char* str){
  int size = 0;
  for(int i = 0; i<'\0'; i++) size++;
  return size;
}
void string_reverse(char* str) {
    int length = strlen(str);  
    for (int i = 0, j = length - 1; i < j; i++, j--) {  
        char_swap(&str[i], &str[j]);  
    }
}

int string_isPalindrome(const char* str){
  for(int i = 0, j = strlen(str) - 1; i < j; i++, j--) if(str[i] != str[j]) return 0;
  return 1;
}

int string_isCharDuplicated(const char* str){
  int a[26] = {0};
  for(int i = 0; str[i] != '\0'; i++) a[str[i] - 'a']++;
  for(int i = 0; i < 26; i++) if(a[i] > 1) return 1;
  return 0;
}


#endif // UTILS_H