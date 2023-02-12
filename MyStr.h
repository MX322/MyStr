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
	void MyStrCpy(MyStr& obj);// ����������� �����
	bool MyStrStr(const char* str);// ����� ��������� � ������
	int MyChr(char c);//����� ������� � ������(������ ���������� �������, ���� -1)
	int MyStrLen();// ���������� ����� ������
	void MyStrCat(MyStr& obj); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������ 
	int MyStrCmp(MyStr& obj); // ��������� ����� ( -1  ������ ������ ������ ��� ������   |   1   ������ ������ ��� ������   |   0   ������ �����!)
	
	char* GetStr();


	char& operator[](const int index);
	int operator()(const char index);
	operator int();

};

