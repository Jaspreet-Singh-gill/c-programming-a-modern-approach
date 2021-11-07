#include<stdio.h>
#include<string.h>
void reverse_name(char *name);
int main()
{
  char a[] = "jaspreet singh";
  reverse_name(a);
   return 0;
  
}
void reverse_name(char *name)
{
  char *p;
  int len = strlen(name);
  for(p = name+len-1; p > name;p--)
  {
    if(*p==' ' || *p ==',')
    {
      printf("%s,",p);
      *p = '\0';
    }
  }
  puts(name);
  printf("\n");
}
