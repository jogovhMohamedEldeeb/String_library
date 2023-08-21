#include "String.h"


void *my_memchr(const void *StartAddress, int character,
                 unsigned int Length,uint8 *Ret_Val)
{
    unsigned char *ReturnState      = NULL;
    unsigned char *TempStartAddress = (unsigned char *) StartAddress;
    unsigned char  Tempcharacter    = (unsigned char )character;

    if(NULL == StartAddress)
    {
        *Ret_Val = 0;
    }
    else
    {
        while(Length--)
        {
            if(*TempStartAddress != Tempcharacter)
            {
                TempStartAddress++;
            }
            else
            {
                ReturnState = TempStartAddress;
                *Ret_Val = 1;
                break;
            }
        }
        if(NULL == ReturnState)
        {
            *Ret_Val = 0;
        }
    }
    return ReturnState;
}


int  my_memcmp(const void *FMemAddress, const void *SMemAddress,
               uint8 Length,uint8 *Ret_Val)
{
    uint8 Return_State     = 0;
    uint8 *TempFMemAddress = FMemAddress;
    uint8 *TempSMemAddress = SMemAddress;


    if((NULL == FMemAddress) || (NULL == SMemAddress))
    {
         *Ret_Val = 0;
    }
    else
    {
        while(Length--)
            {
            if(*TempFMemAddress != *TempSMemAddress)
                {
                  if(*TempFMemAddress < *TempSMemAddress)
                    {
                        Return_State = -1;
                    }
                    else
                    {
                        Return_State = 1;
                    }
                       *Ret_Val = 1;
                }
                    TempFMemAddress++;
                    TempSMemAddress++;
                }
                *Ret_Val = 1;
            }
    return Return_State;
}

void *my_memset(void *StartAddress, uint8 Value,
                uint8 Length,uint8 *Ret_val )
{
    uint8 *TempPtr = StartAddress;

    if(NULL == StartAddress)
    {
        Ret_val = 0;
    }
    else
    {
        while(Length--)
        {
            *TempPtr = Value;
            TempPtr++;
        }
        Ret_val = 1;
    }
    return StartAddress;
}

void *my_memcpy(void *DestAddress, const void *SrcAddress,
                 uint8 Length,uint8 *Ret_val)
{
    uint8 *TempDestAddress = DestAddress;
    uint8 *TempSrcAddress  = SrcAddress;

    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        *Ret_val = 0;/* NOK */
    }
    else
    {
        while(Length--)
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
        *Ret_val = 1; /* OK */
    }
    return DestAddress;
}

void *my_memmove(void *F_string, const void *S_string,
                 unsigned int Length, uint8 *Ret_Val)
{
    unsigned char *TempF_string       = (unsigned char *)F_string;
    const unsigned char *TempS_string = (const unsigned char *)S_string;
    void *Return_val                  = F_string;

    if((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
    }
   else
   {
      if (F_string == S_string) {
        *Ret_Val = 1;
        return Return_val;
    }

        if (F_string > S_string)
            {
            TempF_string += Length;
            TempS_string += Length;
            while (Length--) {
                 *(--TempF_string) = *(--TempS_string);
              }
            }
      else
        {
        while (Length--) {
            *(TempF_string++) = *(TempS_string++);
        }
    }
    *Ret_Val = 1;
   }

    return Return_val;
}



char *my_strcat(char *F_string, const char *S_string,uint8 *Ret_Val)
{
    unsigned char *TempF_string = F_string;
    unsigned char *TempS_string = S_string;
    unsigned char *Ret_str      = NULL;

    if((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempF_string != '\0')
        {
            TempF_string++;
        }

        while(*TempS_string != '\0')
        {
            *(TempF_string++) = *(TempS_string++);
        }
        *TempF_string = '\0';
        *Ret_Val = 1;
    }
    return F_string;
}

char *my_strncat(char *DestAddress, const char *SrcAddress,
                 unsigned int Length, uint8 *Ret_Val)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress  = SrcAddress;
    unsigned int Cnt_Dest = 0;
    unsigned int Cnt_Src  = 0;

    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempDestAddress != '\0')
        {
            TempDestAddress++;
            Cnt_Dest++;
        }

        while((Cnt_Dest < Length) && (*TempSrcAddress != '\0'))
        {
            *TempDestAddress++ = *TempSrcAddress++;
            Cnt_Dest++;
            Cnt_Src++;
        }
        *TempDestAddress = '\0';
        *Ret_Val = 1;
    }

    return DestAddress;
}

char *my_strchr(const char *String, int character, uint8 *Ret_Val)
{
    char *TempString    = String;
    char  TempCharacter = character;
    char *found         = NULL;

     if(NULL == String)
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempString != '\0')
        {
            if(TempCharacter == *TempString)
            {
                found = (char *) TempString;
                break;
            }
            TempString++;
        }
        *Ret_Val = 1;
    }

    return found;
}

int my_strcmp(const char *F_string, const char *S_string, uint8 *Ret_Val) {

    unsigned char *TempF_string = (unsigned char *) F_string;
    unsigned char *TempS_string = (unsigned char *) S_string;
    int Ret_Compare = 0;

    if ((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
    } else
    {
        while (*TempF_string != '\0' && *TempS_string != '\0')
         {
             if(*TempF_string != *TempS_string)
             {
                 break;
             }
            TempF_string++;
            TempS_string++;
        }
        if(*TempF_string > *TempS_string)
        {
            Ret_Compare = 1;
        }
        else if(*TempS_string > *TempF_string)
        {
            Ret_Compare = -1;
        }
        else
        {
            Ret_Compare = 0;
        }
        *Ret_Val = 1;
    }
    return Ret_Compare ;
}

int my_strcoll(const char *F_string, const char *S_string, uint8 *Ret_Val)
{
    setlocale(LC_COLLATE,"");
    unsigned char *TempF_string = (unsigned char *) F_string;
    unsigned char *TempS_string = (unsigned char *) S_string;
    int Ret_Compare = 0;

    if ((NULL == F_string) || (NULL == S_string) || (F_string == '\0' && S_string == '\0'))
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempF_string != '\0' && *TempS_string != '\0')
        {
            if(*TempF_string != *TempS_string)
            {
                if(*TempF_string > *TempS_string)
              {
                    Ret_Compare = 1;
                }
                else
                {
                    Ret_Compare = -1;
                }
                *Ret_Val = 1;
                break;
            }
            F_string++;
            S_string++;
        }
    }
    return Ret_Compare;
}

char *my_strcpy(char *DestAddress, const char *SrcAddress, uint8 *Ret_Val)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress  = SrcAddress;

    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempSrcAddress != '\0')
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
        *TempDestAddress = '\0';
        *Ret_Val = 1;
    }
    return DestAddress;
}

char *my_strncpy(char *DestAddress, const char *SrcAddress,
                 unsigned int Length, uint8 *Ret_Val)
{
    char *TempDestAddress = DestAddress;
    char *TempSrcAddress  = SrcAddress;
    char *Ret_str         = DestAddress;
    int counter           = 0;

    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        *Ret_Val = 0;
        Ret_str = DestAddress;
    }
    else
    {
        while(*TempSrcAddress != '\0' && counter < Length)
        {
            *TempDestAddress++ = *TempSrcAddress++;
            counter++;
        }
        *TempDestAddress = '\0';
        *Ret_Val = 1;
    }
    return DestAddress;
}

int my_strlen(const char *StartAddress,uint8 *Ret_Val)
{
    char *TempStartAddress = StartAddress;
    int counter            = 0;
    if(NULL == StartAddress)
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempStartAddress != '\0')
        {
            *TempStartAddress++;
            counter++;
        }
        *Ret_Val = 1;
    }
    return counter;
}

int my_strcspn(const char *F_string, const char *S_string, uint8 *Ret_Val)
{
    unsigned char *TempF_string = F_string;
    unsigned char *TempS_string = S_string;
    int counter                 = 0;

    if((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
         counter = 0;
    }
    else
    {
        while(*TempF_string != '\0')
        {
            if(*TempF_string == *TempS_string)
            {
                break;
            }
            else
            {
                counter++;
            }
            *TempF_string++;
        }

        *Ret_Val = 1;
    }
    return counter;
}

char *my_strpbrk(const char *F_string, const char *S_string, uint8 *Ret_Val)
{
    const unsigned char *TempF_string = (const unsigned char *)F_string;
    const unsigned char *TempS_string;
    char *Ret_chr = NULL;

    if ((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
        return NULL;
    }

    *Ret_Val = 0;

    while (*TempF_string != '\0')
    {
        TempS_string = (unsigned char *)S_string;
        while (*TempS_string)
        {
            if (*TempF_string == *TempS_string)
            {
                Ret_chr = (char *)TempF_string;
                *Ret_Val = 1;
                break;
            }
            TempS_string++;
        }
        if (*Ret_Val)
        {
            break;
        }
        TempF_string++;
    }

    return Ret_chr;
}

char *my_strrchr(const char *StartAddress, int character, uint8 *Ret_Val)
{
    unsigned char *TempStartAddress = StartAddress;
    char *Ret_chr                   = NULL;

    if(NULL == StartAddress)
    {
        *Ret_Val = 0;
    }
    else
    {
        while(*TempStartAddress != '\0')
        {
            if(*TempStartAddress == character)
            {
                Ret_chr = (char *)TempStartAddress;
            }
            *TempStartAddress++;
        }
        if(character == '\0')
        {
            Ret_chr = (char *)TempStartAddress;
        }
        *Ret_Val = 1;
    }
    return Ret_chr;
}

int my_strspn(const char *F_string, const char *S_string, uint8 *Ret_Val)
{
    unsigned char *TempF_string = F_string;
    unsigned char *TempS_string = S_string;
    int counter                 = 0;


    if((NULL == F_string) || (NULL == S_string))
    {
        *Ret_Val = 0;
         counter =0;
    }
    else
    {
        while(*TempF_string != '\0')
        {
            if(*TempF_string == *TempS_string)
            {
                counter++;
            }
            *TempF_string++;
            *TempS_string++;
        }
        *Ret_Val = 1;
    }
    return counter;
}

char *my_strstr(const char *haystack, const char *needle, uint8 *Ret_Val)
{
    unsigned char *Temp_haystack = haystack;
    unsigned char *Temp_needle   = needle;
    unsigned char *Ret_str       = NULL;

    if((NULL == haystack) || (NULL == needle))
    {
        *Ret_Val = 1;
        *Ret_str = NULL;
    }
    else
    {
        while(*Temp_haystack != '\0')
           {Ret_str;
            if(*Temp_haystack == *Temp_needle)
            {
                Ret_str = Temp_haystack;
                while((*Temp_haystack == *Temp_needle) && (*Temp_needle != '\0'))
                {
                    Temp_haystack++;
                    Temp_needle++;
                }
                if(*Temp_needle == '\0')
                {
                    *Ret_Val = 0;
                    break;
                }
                else
                {
                    Temp_haystack = Ret_str + 1;
                    Temp_needle = (unsigned char*) needle;
                }
            }
            else
            {
                Temp_haystack++;
            }
         }
    }
    return (char*)Temp_haystack;
}

int my_strxfrm(char *DestAddress, const char *SrcAddress, int Length, uint8 *Ret_Val) {
    char *TempDestAddress = DestAddress;
    const char *TempSrcAddress  = SrcAddress;
    int cnt_1 = 0;
    int conv;

    if ( (NULL == DestAddress) || (NULL == SrcAddress))
    {
        *Ret_Val = 0;
    }
    else{
        while (TempSrcAddress[cnt_1] != '\0' && cnt_1 < Length - 1)
        {
            conv = toupper((unsigned char) TempSrcAddress[cnt_1]);
            TempDestAddress[cnt_1] = conv;
            cnt_1++;
        }
        TempDestAddress[cnt_1] = '\0';
        *Ret_Val = 1;
    }

    return cnt_1;
}


int my_strncmp(const char *F_string, const char *S_string, int Length, uint8 *Ret_Val)
{
    unsigned char *TempF_string = F_string;
    unsigned char *TempS_string = S_string;
    int Return_State            = 0;


    if((NULL == F_string) || (NULL == S_string))
    {
         *Ret_Val = 0;
         Return_State = 0;
    }
    else
    {
      while(Length--)
            {
            if(*TempF_string != *TempS_string)
                {
                  if(*TempF_string < *TempS_string)
                    {
                        Return_State = -1;
                    }
                    else
                    {
                        Return_State = 1;
                    }
                       *Ret_Val = 1;
                }
                    TempF_string++;
                    TempS_string++;
            }
            *Ret_Val = 1;
    }
    return Return_State;
}




unsigned int is_delim(char c, char *delim)
{
    while(*delim != '\0')
    {
        if(c == *delim)
            return 1;
        delim++;
    }
    return 0;
}
char *my_strtok(char *srcString, char *delim)
{
    static char *backup_string;
    unsigned char *Temp_srcString = srcString;

    if(!srcString)
    {
        srcString = backup_string;
    }
    if(!srcString)
    {
        return NULL;
    }
    while(1)
    {
        if(is_delim(*srcString, delim))
        {
            srcString++;
            continue;
        }
        if(*srcString == '\0')
        {
            return NULL;
        }
        break;
    }
    char *ret = srcString;
    while(1)
    {
        if(*srcString == '\0')
        {
            backup_string = srcString;
            return ret;
        }
        if(is_delim(*srcString, delim))
        {
            *srcString = '\0';
            backup_string = srcString + 1;
            return ret;
        }
        srcString++;
    }
}
