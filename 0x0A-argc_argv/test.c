#include <stdio.h>
#include <ctype.h>
int check_alpha(char ch)
{
if (isalpha(ch))
printf("Error\n");
return (1);
}

int main(void)
{
char c, str;
str = 'A';
c = check_alpha(str);
return (0);
}
