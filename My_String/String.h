#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include<string.h>

using namespace std;


class MyString
{

private:
	
	char* str;

public:

	//конструктор по умолчанию str = nullptr
	MyString();

	MyString(const char* _str);

	//оператор присваивания
	MyString& operator =(const MyString& obj);

	//констурктор копирования
	MyString(const MyString& obj);

   //Конкатенация строк (объединение)
	MyString operator +(const MyString& obj);


	//вывод в консоль строки
	void Print();
	

	~MyString();
};


