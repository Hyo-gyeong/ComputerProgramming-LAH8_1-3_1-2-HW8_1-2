#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int sumUpData(int *, int);  
void printData(int *, int); 
int maxData(int *, int); 

void main() 
{ 
	int k; 
	int *p; 
	int sum; 

	int data[10];  // ��� ���࿡ ����� ���� ���� 

	p = data; //Ȥ�� p = &data[0]  
	srand(time(NULL));  // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο� 

	for (k = 0; k < 10; k++) // Index 0..9���� 
		*p++ = rand() % 100; // ������ �ʱ�ȭ. 0���� 99������ Random ���� ���.

	sum = sumUpData(data, 10);   
	printf("������Ʈ�� ���� %d\n", sum); 

	printf("������Ʈ���� "); 
	printData(data, 10); 

	printf("\n������Ʈ�� �� ���� ū���� %d \n", maxData(data, 10)); 
} 
int sumUpData(int *p, int size) // int p[]�� �ᵵ �ȴ� 
{ 
	int sum = 0;
	int i = 0;

	while (i < size)
	{
		sum += *p;
		p++;
		i++;
	}
	return sum;

} 
void printData(int *p, int size) // int p[]�� �ᵵ �ȴ� 
{ 
	int i = 0;

	while (i < size)
	{
		printf("%d ", *p++);
		i++;
	}
} 
int maxData(int *p, int size) // int p[]�� �ᵵ �ȴ� 
{ 
	int i = 0;
	int best = -100;

	while (i < size)
	{
		if (*p > best)
			best = *p;
		p++;
		i++;
	}
	return best;
}