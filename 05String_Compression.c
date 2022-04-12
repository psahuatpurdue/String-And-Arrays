#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void string_comp(char []);

int main()
{

char str[]={"aaabbcddeeee"}; // Output - a3b2c1d2e4
printf("String 0 =% \n", str[0]);
string_comp(str);

return 0;

}

void string_comp(char str1[])
{
 int count[]={0};
 char compress_str[]="";
 char char_int;
 
//Brute Force
int len = strlen(str1);
char comp_str[len];
int j=0,k=0;
for (int i=0; i<len;i++)
{
  if(str1[i] == str1[i+1])
  {
      count[k]++;
  }
  else
  {  
      comp_str[j]=str1[i];
      //char_int = count; 
      //comp_str[j+1] = count;
     // strcat(comp_str, count);
     printf("% %d\n", comp_str[j],count[k]);
      j+=1;
      k++;
      //count =1;
      
  }
}
//printf("New String = %s", comp_str);
}