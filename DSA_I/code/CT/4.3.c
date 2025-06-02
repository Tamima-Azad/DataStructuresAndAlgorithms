#include<stdio.h>
#include<string.h>
//#include<ctype.h>
int ChangeCaseAndReverse(char*s)
{
   for(int i=0;i<s[i]!='\0';i++){
    if(s[i]>=97&&s[i]<=122){
        strupr(s);}
    else
        strlwr(s);
   }
   strrev(s);
   return s;
   //puts(s);
}
int main()
{
    char ss[100];
    gets(ss);
    int n=strlen(ss);
    int p=ChangeCaseAndReverse(ss);
    puts(p);
}
