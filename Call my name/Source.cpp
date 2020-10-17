#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char name[99999], surname[99999];
	scanf("%s %s", name, surname);
	if (name[0] >= 'a' && name[0] <= 'z')	name[0] -= 32;
	if (surname[0] >= 'a' && surname[0] <= 'z')	surname[0] -= 32;
	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z' && i != 0)	name[i] += 32;
		printf("%c", name[i]);
	}
	printf(" ");
	for (int i = 0; i < strlen(surname); i++)
	{
		if (surname[i] >= 'A' && surname[i] <= 'Z' && i != 0)	surname[i] += 32;
		printf("%c", surname[i]);
	}
	printf("\n");
	printf("%c.%c.", name[0], surname[0]);
	return 0;
}