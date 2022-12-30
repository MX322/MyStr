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
	~MyStr();

	void Input();
	void Output();
	static void ShowCounterObj();

};

