#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool one_away(char [], char []);

int main()
{

bool oneaway;

oneaway= one_away("pale", "ple");

printf("One Away = %d",oneaway);

}

bool one_away(char str1[], char str2[])
{
int len1, len2, index;
len1 = strlen(str1);
len2 = strlen(str2);
int rep_flag=0;

if (len1 < len2) index = len1;
else index= len2;

if((len1-len2) > 1)
{
 return false;
}

if((len1-len2) == 0)
    {
        printf("Looking for Replacement\n");
        for(int i=0; i<len1; i++)
            {
                if(str1[i]!=str2[i])
                 {
                   rep_flag +=1;
                 }
            }
        if (rep_flag ==1)
            {
              printf("Replacement - ONE AWAY\n");
              return true;
            } 
        else return false;
        
        rep_flag=0;
}

if((len1-len2) == -1)
{
        printf("Looking for addition operation\n");
        for(int j=0; j<len1; j++)
         {
            if(str1[j]!=str2[j])
               {
                  printf("Addition - ONE AWAY\n");
                  return false;
               }
             else return true;
         }
 //return true;
}

if((len1-len2) == 1)
{
    printf("Looking for removal operation \n");
    for(int k =0; k<len2; k++)
    {
        if(str1[k] !=str2[k])
        {
           printf("Removal - ONE AWAY\n");
           return true;
        }
        else 
        {
            return false;   
        }

    }

}

}