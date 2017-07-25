#include<stdio.h>
int main()
{
char s1[100],s2[100],i,j;
printf("enter first string:");
scanf("%s",s1);
printf("enter secondstring:");
scanf("%s",s2);
for(i=0;s1[i]!='\0';++i);
for(j=0;s2[j]!='\0';++j,++i)
{
s1[i]=s2[i];
}
s1[i]='\0';
printf("after concatenation:%s",s1);
return 0;
}
