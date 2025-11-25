#include <iostream>
#include <windows.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char old[60];
	puts("Сколько тебе лет? ");
	gets_s(old);
	printf("Ого, всего лишь %s\n",old);
}
