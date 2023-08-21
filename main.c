#include <stdio.h>
#include <stdlib.h>
#include "String.h"
#include <string.h>



int main() {

/*
    // memchar test
    char str1[30] = "Mohamed Ahmed";
    char str2     = 'A';
    uint8 ret_val = 0;

    char *Ret  = (char *)my_memchr(str1,str2,30,&ret_val);
    if(Ret != NULL){
        printf("'%c' is found at position %d  \n",str2,Ret-str1+1);
    }
    else
    {
        printf("'%c' is found \n",str2);
    }
    printf("%d \n",ret_val);*/


    /*
        // memcmp test

    char str1[20] = "mohamed ahmed";
    char str2[10] = "mohamed";
    uint8 ret_val = 0;
    int ret = my_memcmp(str1, str2,7,&ret_val);

    printf("Ret     : %d\n", ret);
    printf("Ret_val : %d\n", ret_val);*/

   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   uint8 ret_val = 0;
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   my_memcpy(dest, src, strlen(src)+1,&ret_val);
   printf("After memcpy dest = %s\n", dest);
    /*
      // memmove test

   char str1[20] = "mohamed ahmed";
   char str2[10] = "Hello!";
    uint8 ret_val;


    my_memmove(str1 , str1 , 5, &ret_val);
    printf("%s\n", str1);*/


    /*
       // strcat test
    char str1[20] = "mohamed ";
    char str2[10] = "ahmed";
    uint8 ret_val;

    my_strcat(str1, str2, &ret_val);
    printf("Test case 1: %s\n", str1);

    my_strcat(str1, NULL, &ret_val);
    printf("Test case 2: %s\n", str1);

    char *str3 = NULL;
    my_strcat(str3, str2, &ret_val);
    printf("Test case 3: %s\n", str3);  */

    /*
       // strncat test
    char str1[20] = "mohamed ";
    char str2[10] = "ahmed";
    uint8 ret_val;

    my_strncat(str1, str2,15, &ret_val);
    printf("After: %s\n", str1);*/


    /*
    // strchr test

    char str1[20] = "mohamed ahmed";
    uint8 ret_val;
    char *res = my_strchr(str1, 'm', &ret_val);
    printf("After : %s\n", res);


    char *res1 = my_strchr(str1,'z', &ret_val);
    printf("Test case 2: %s\n", res1);*/

    /*
    // strcmp test
    int ret = 0;
    uint8 ret_val = 0;

    ret = my_strcmp("mhmd","mhmd",&ret_val);
    printf("Ret : %d\n",ret);

    ret = my_strcmp("mhmd","hmd",&ret_val);
    printf("Ret : %d\n",ret);

    ret = my_strcmp("ahmd","bbmha",&ret_val);
    printf("Ret : %d\n",ret);*/

    /*
    // strcoll test

    uint8 ret_val = 0;
    int Result = my_strcoll("mohamed","ahmed", &ret_val);

    printf("Result: %d, Ret_Val: %d\n", Result, ret_val);

    Result = my_strcoll("1amed","ahmed", &ret_val);

    printf("Result: %d, Ret_Val: %d\n", Result, ret_val);*/

    /*
    // strcpy test
    char src[20]  = "moahmed ahmed";
    char dest[20];
    uint8 ret_val = 0;

    my_strcpy(dest,src,&ret_val);
    printf("dest    : %s \n",dest);
    printf("ret_val : %d \n",ret_val);*/

    /*
    // strncpy test
     char dest[100];
    char src[20] = "moahmed ahmed";
    uint8 ret_val = 0;

    my_strncpy(dest, src, 10, &ret_val);

    printf("dest    : %s \n", dest);
    printf("ret_val : %d \n",ret_val);*/


    /*
    // strlen test
    uint8 ret_val = 0;

    int res = my_strlen("mohamed ahmed",&ret_val);
    printf("Lenght  : %d \n" , res);
    printf("ret_val : %d \n",ret_val);*/

    /*
    //my_strcspn test
    int len;
    const char str1[] = "ABCDEF4960910";
    const char str2[] = "013";
    uint8 ret_val = 0;

   len = my_strcspn(str1, str2,&ret_val);

   printf("First matched character is at %d\n", len + 1);*/


   /*
   // strpbrk test
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "34";
   char *ret;
    uint8 ret_val = 0;

   ret = my_strpbrk(str1, str2,&ret_val);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }*/


    /*
    //strrchr test
    int len;
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;
    uint8 ret_val = 0;


    ret = my_strrchr(str, ch,&ret_val);

    printf("String after |%c| is - |%s|\n", ch, ret);
    printf("position : %d \n",ret-str+1);
    printf("ret_val  : %d \n",ret_val);*/

/*
    //strspn test
    int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";
   uint8 ret_val = 0;
   len = my_strspn(str1, str2,&ret_val);

   printf("Length of initial segment matching %d\n", len );*/


  /*
   // my_strstr test

    const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "Point";
    char *ret;
    uint8 ret_val = 0;

    ret = my_strstr(haystack, needle,&ret_val);

    printf("The substring is: %s\n", ret);*/


/*
    // my_strxfrm test
   char dest[20];
   char src[20];
   int len;
     uint8 ret_val = 0;
   strcpy(src, "Tutorials Point");
   len = my_strxfrm(dest, src, 20,&ret_val );

   printf("Length of string |%s| is: |%d|", dest, len);*/


   /*
   // my_strncmp test
   char str1[15];
   char str2[15];
   int ret;

   uint8 ret_val = 0;
   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = my_strncmp(str1, str2, 4,&ret_val);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }*/


   /*
   my_strtok
    char str[] = "Hello, world! This is a test string.";
    char* token;
    const char* delim = " ,.!";

    token = mystrtok(str, delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = mystrtok(NULL, delim);

    }*/



    return 0;
}
