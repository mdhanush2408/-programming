#include<stdio.h>
#include<string.h>
void main(void)
{
	char string1[]="spark",string2[]="programming";
	int cmp;
	cmp=strcmp(string1,string2);
	if(cmp)
	printf("%s>%s",string1,string2);
	else
	{
		if(cmp<0)
		printf("%s=%s",string1,string2);
	}
}