#include <stdio.h>
int stringLength (const char *s)
{
	int count = 0;

	while (*s){
		count++;
		s++;
	}

	return count;
}
void stringCopy (char *s1, const char *s2)// *s2�� �ٲ��������Ƿ� const�� ���ϼ� 
{ 
	while (*s2) 
	{ 
		*s1= *s2; 
		s1++; s2++; 
	} 
	*s1 = '\0'; 
} 
int main(void) 
{ 
	char copied[500]; 
	char data1[] = "abcde";  
	char data2[] = "ABCDEFGH"; 

	stringCopy(copied, data1); 
	printf("ù��° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied); 
	stringCopy(copied, data2);  
	printf("�ι�° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied); 
} 