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

MyStr::MyStr(MyStr& obj)
{
	this->size = obj.size;
	this->str = new char[size];
	strcpy_s(this->str, size, obj.str);
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


void MyStr::MyStrCpy(MyStr& obj)
{
	this->size = obj.size;
	this->str = new char[size];
	for (int i = 0; i < size; i++)
	{
		str[i] = obj.str[i];
	}
}


bool MyStr::MyStrStr(const char* str)
{
	int j = 0;
	int end = strlen(str);

	for (int i = 0; i < size; i++)
	{
		if (!end)
		{
			return true;
		}

		if (this->str[i] == str[j])
		{
			j++;
			end--;
		}
	}

	return false;
}


int MyStr::MyChr(char c)
{
	for (int i = 0; i < size; i++)
	{
		if (str[i] == c)
		{
			return i;
		}
	}

	return -1;
}


int MyStr::MyStrLen()
{
	return size;
}


void MyStr::MyStrCat(MyStr& obj)
{
	int newSize = this->size + obj.size + 1;
	char* newStr = new char[newSize];

	int j = 0;
	for (int i = 0; i < this->size; i++, j++)
	{
		newStr[j] = this->str[i];
	}

	j--;

	for (int i = 0; i < obj.size; i++, j++)
	{
		newStr[j] = obj.str[i];
	}

	this->size = newSize;
	this->str = newStr;

}


void MyStr::MyDelChr(char c)
{

	char* newStr = new char[size];

	int end = size;
	int j = 0;
	for (int i = 0; i < end; i++)
	{
		if (str[i] != c)
		{
			newStr[j] = str[i];
			j++;
		}

		else
		{
			size--;
		}

	}

	
	str = newStr;
}


int  MyStr::MyStrCmp(MyStr& obj)
{
	if (this->size > obj.size)
	{
		return 1;
	}

	else if (this->size < obj.size)
	{
		return -1;
	}

	else if (this->size == obj.size)
	{
		return 0;
	}
}


char* MyStr::GetStr()
{
	return this->str;
}


char& MyStr::operator[](const int index)
{
	return str[index];
}

int MyStr::operator()(const char index)
{
	for (int i = 0; i < size; i++)
	{
		if (str[i] == index)
		{
			return i;
		}
	}

	return -1;
}

MyStr::operator int()
{
	return --size;
}
