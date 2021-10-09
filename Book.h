//описание класса
#pragma once 
#include <string>
#include <iostream> 
using namespace std; 

class Book {
//конструктор без параметров 
public:
Book(void);
public:
	//деструктор
	virtual ~Book(void);
	//констрктор с параметрами
		Book(string, string, int);
	//конструктор копирования 
		Book(const Book&);
		//селекторы
		string Get_title() { return title; } 
		string Get_type() { return type; }
		int Get_year() { return year; } 
		//модификаторы
		void Set_title(string); 
		void Set_type(string); 
		void Set_year(int);
		//перегрузка операции присваивания
		Book& operator =(const Book&); 
		//глобальные операторы-функции ввода-вывода
		friend istream& operator >>(istream& in, Book& c); 
		friend ostream& operator <<(ostream& out, const Book& c);
		//атрибуты 
protected:
		string title; 
		string type;
		int year;

};
