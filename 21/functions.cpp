#include "functions.h"
HANDLE c;
void menu()
{
	c = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(c, 4);
	cout << "---------------------------------" << endl;
	cout << "|\t     МЕНЮ\t\t|" << endl;
	cout << "---------------------------------" << endl;
	c = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(c, 2);
	cout << "1. Записати інформацію з файлу в динамічний символьний масив" << endl;
	cout << "2. Вивести на екран найдовше слово" << endl;
	cout << "3. Визначити кількість цифр у тексті" << endl;
	cout << "4. порахувати кількість одно-, двох- та трибуквенних слів" << endl;
	cout << "5. відсортувати символи найдовшого слова в алфавітному порядку" << endl;
	cout << "6. видалити перші 2 слова, які починаються на літеру <s>" << endl;
	cout << "7. перед словом <DUNCAN> вставити слово <ship>" << endl;
	cout << "8. зберегти виконані зміни в файлі" << endl;
}
void mass()
{
	ifstream file;
	file.open("Text.txt");
	int count = 0;
	char s;
	while (!file.eof())
	{
		file.get(s);
		count++;
	}
	file.close();
	char* ch = new char[count];
	int c = 0;
	ifstream file1("Text.txt");
	for (int i = 0; i < count; i++)
	{
		ch[i] = 0;
	}
	while (!file1.eof())
	{
		file1.get(ch[c]);
		c++;
	}
	file1.close();
	cout << endl;
	cout << ch;
	delete[]ch;
}
//void word()
//{
//	ifstream file;
//	file.open("Text.txt");
//	if (!file.is_open())
//	{
//		cout << "Error!!!";
//	}
//	else
//	{
//		char str[256];
//		while (!file.eof())
//		{
//			file >> str;
//		}
//		char* ptr = strtok(str, " .,!?");
//		char* max = ptr;
//		do {
//			if (strlen(max) < strlen(ptr))
//				max = ptr;
//		} while (ptr = strtok(NULL, " .,!?"));
//
//		cout << max << endl;
//	}
//}
void digit()
{
	ifstream file;
	file.open("Text.txt");
	if (!file.is_open())
	{
		cout << "Error!!!";
	}
	else
	{
		int k = 0;
		char str;
		while (!file.eof())
		{
			file >> str;
			if (isdigit(str))
			{
				k++;
			}
		}
		cout << endl << "Кількість цифр = " << k;
	}
}
//void DN()
//{
//	ifstream file;
//	file.open("Text.txt");
//	if (!file.is_open())
//	{
//		cout << "Error!!!";
//	}
//	else
//	{
//		char s[256];
//		while (!file.eof())
//		{
//			file.get(s);
//		}
//		for (int i = 0; i < sizeof(s); i++)
//		{
//			if (s[i] == )
//		}
//	}
//
//}