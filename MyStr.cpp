#include "MyStr.h"
#include <iostream>

MyStr::MyStr()
{
	this->size = 80 + 1;
	this->str = new char[this->size];
	counter++;
}


MyStr::MyStr(int size)
{
	this->size = size + 1;
	this->str = new char[this->size];
	counter++;
}


MyStr::MyStr(const char* str)
{
	this->size = strlen(str) + 1;
	this->str = new char[size];
	strcpy_s(this->str, size, str);
	counter++;
}


MyStr::~MyStr()
{
	delete[] str;
}


void MyStr::Input()
{
	std::cout << "Enter string: ";
	std::cin >> this->str;
}


void MyStr::Output()
{
	std::cout << this->str << std::endl;
}


int MyStr::counter = 0;
void MyStr::ShowCounterObj()
{
	std::cout << counter;
}


int main()
{
	MyStr MyString = "Some text...";
	MyString.Output();
	MyStr::ShowCounterObj();
}