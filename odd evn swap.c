#include<stdio.h>
main() 
{
char a[10];
char temp;
int i;
gets(a);

for(i=0;a[i+1]!='\0';i=i+2)
{
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
puts(a);
}
