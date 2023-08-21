
#ifndef _STRING_H
#define _STRING_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Types.h"
#include <locale.h>

void *my_memchr(const void *StartAddress, int character, unsigned int Length,uint8 *Ret_Val);
int  my_memcmp(const void *FMemAddress, const void *SMemAddress, uint8 Length,uint8 *Ret_Val);
void *my_memcpy(void *DestAddress, const void *SrcAddress, uint8 Length,uint8 *Ret_val );
void *my_memmove(void *F_string, const void *S_string, unsigned int Length,uint8 *Ret_Val);
void *my_memset(void *StartAddress, uint8 Value, uint8 Length,uint8 *Ret_val);
char *my_strcat(char *F_string, const char *S_string,uint8 *Ret_Val);
char *my_strncat(char *DestAddress, const char *SrcAddress, unsigned int Length, uint8 *Ret_Val);
char *my_strchr(const char *String, int character, uint8 *Ret_Val);
int my_strcmp(const char *F_string, const char *S_string, uint8 *Ret_Val);
int my_strcoll(const char *F_string, const char *S_string, uint8 *Ret_Val);
char *my_strcpy(char *DestAddress, const char *SrcAddress, uint8 *Ret_Val);
char *my_strncpy(char *DestAddress, const char *SrcAddress,unsigned int Length, uint8 *Ret_Val);
int my_strlen(const char *StartAddress,uint8 *Ret_Val);
int  my_strcspn(const char *F_string, const char *S_string, uint8 *Ret_Val);
char *my_strpbrk(const char *F_string, const char *S_string, uint8 *Ret_Val);
char *my_strrchr(const char *StartAddress, int character, uint8 *Ret_Val);
int my_strspn(const char *F_string, const char *S_string, uint8 *Ret_Val);
char *my_strstr(const char *haystack, const char *needle, uint8 *Ret_Val);
int my_strxfrm(char *DestAddress, const char *SrcAddress, int Length, uint8 *Ret_Val);
int my_strncmp(const char *F_string, const char *S_string, int Length, uint8 *Ret_Val);
char *my_strtok(char *srcString, char *delim);


#endif _STRING_H

