#pragma once
class MyStr
{
private:
	char* str;
	int size;
	static int counter;

public:
	MyStr();
	MyStr(int size);
	MyStr(const char* str);
	MyStr(MyStr& obj);
	~MyStr();

	void Input();
	void Output();
	static void ShowCounterObj();
	void MyStrCpy(MyStr& obj);// копирование строк
	bool MyStrStr(const char* str);// поиск подстроки в строке
	int MyChr(char c);//поиск символа в строке(индекс найденного символа, либо -1)
	int MyStrLen();// возвращает длину строки
	void MyStrCat(MyStr& obj); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ 
	int MyStrCmp(MyStr& obj); // сравнение строк ( -1  первая строка меньше чем вторая   |   1   первая больше чем вторая   |   0   строки равны!)
	
	char* GetStr();


	char& operator[](const int index);
	int operator()(const char index);
	operator int();

};

