#include <stdio.h> 

int stringCompare(const char *s1, const char *s2) 
{ 
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return 1;
		else if (*s1 > *s2)
			return -1;
		else
		{
			s1++;
			s2++;
		}
	}
	return 0;

} 
void stringCat(char *s1, const char *s2) 
{ 
	while (*s1)
		*s1++; //끝에다가 s2 붙여주려고
	while (*s2)
		*s1++ = *s2++; //포인터 끝까지 같이 가주고 마지막에 +1
	*s1 = '\0'; //++할 필요없이 이미 증가되어있음
} 
void stringChange(char *s, char ch, char newCh) 
{ 
	while (*s)
	{
		if (*s == ch)
			*s = newCh;
		s++;
	}
} 
int main(void) 
{ 
	char name1[20]; 
	char name2[20]; 

	printf("Enter the first name: "); 
	scanf("%s", name1); 
	printf("Enter the second name: ");
	scanf("%s", name2); 

	if (stringCompare(name1, name2) == 0) 
		printf("두개의 이름은 같다\n"); 
	else if (stringCompare(name1, name2) == 1) 
		printf("두개의 이름은 다르며 정렬되어있다\n"); 
	else 
		printf("두개의 이름은 다르며 정렬되어있지않다\n");

	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1); 
	stringChange(name1, 'u', 'x'); 
	printf("The changed name is %s\n", name1); 
}