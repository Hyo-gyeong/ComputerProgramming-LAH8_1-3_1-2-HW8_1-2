#include <stdio.h> 
int stringEqual(const char *s1, const char *s2) 
{ 
	/*int i, count = 0;

	for (i = 0; *s1 != '\0'; i++) {
		if (*s1 != *s2)
			return 1;
		s1++;
		s2++;
		count++;
	}
	for (i = 0; i < count; i++){
		if (*s1 != *s2)
			return 1;
		s1++;
		s2++;
	}
	return 0;*/

	//-----------------------------------------------------밑에가 위에보다 새련된 코드!


	//int i;

	//for (i = 0; *s1 != '\0' || *s2 != '\0'; i++) { // && 이면 두 문자의 길이가 다를때를 고려하지 못하게됨.
	//	if (*s1 != *s2)
	//		return 1;
	//	s1++;
	//	s2++;
	//}
	//return 0;
		
	//------------------------------------------------ 밑에가 위에보다 새련된 코드!

	while(*s1 || *s2)
	{
		if (*s1 != *s2)
			return 1;
		else 
		{
			s1++;
			s2++;
		}
	}
	return 0;

}
void main() 
{ 
	char string1[50]; 
	char string2[50]; 

	printf("Enter the first string:"); 
	scanf("%s", string1); 
	printf("Enter the second string:"); 
	scanf("%s", string2); 

	if (stringEqual(string1, string2) == 0)
		printf("두개의 문자열은 같다\n"); 
	else 
		printf("두개의 문자열은 다르다\n"); 
} 