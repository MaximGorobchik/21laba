#include "functions.h"
HANDLE c;
void menu()
{
	c = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(c, 4);
	cout << "---------------------------------" << endl;
	cout << "|\t     ����\t\t|" << endl;
	cout << "---------------------------------" << endl;
	c = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(c, 2);
	cout << "1. �������� ���������� � ����� � ��������� ���������� �����" << endl;
	cout << "2. ������� �� ����� �������� �����" << endl;
	cout << "3. ��������� ������� ���� � �����" << endl;
	cout << "4. ���������� ������� ����-, ����- �� ������������ ���" << endl;
	cout << "5. ����������� ������� ���������� ����� � ���������� �������" << endl;
	cout << "6. �������� ����� 2 �����, �� ����������� �� ����� <s>" << endl;
	cout << "7. ����� ������ <DUNCAN> �������� ����� <ship>" << endl;
	cout << "8. �������� ������� ���� � ����" << endl;
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
		cout << endl << "ʳ������ ���� = " << k;
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