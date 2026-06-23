// Task = Display some text
#include <stdio.h> 
#include <string.h>
#include <math.h>
#include <stdlib.h>
// %s skips whitespace(at the time of I/P when we press enter key means \n char. used) and reads the next word.(It ignores the \n)
// fgets() does not skip whitespace and reads \n
int main() 
{
  char c,s[100],sen[100];
  scanf("%c",&c);
  scanf("%s",s);
  scanf(" %[^\n]%*c", sen);//This is also correct
  printf("%c\n%s\n%s",c,s,sen);
    
}
