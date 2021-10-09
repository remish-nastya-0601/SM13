//�������� ������
#pragma once 
#include <string>
#include <iostream> 
using namespace std; 

class Book {
//����������� ��� ���������� 
public:
Book(void);
public:
	//����������
	virtual ~Book(void);
	//���������� � �����������
		Book(string, string, int);
	//����������� ����������� 
		Book(const Book&);
		//���������
		string Get_title() { return title; } 
		string Get_type() { return type; }
		int Get_year() { return year; } 
		//������������
		void Set_title(string); 
		void Set_type(string); 
		void Set_year(int);
		//���������� �������� ������������
		Book& operator =(const Book&); 
		//���������� ���������-������� �����-������
		friend istream& operator >>(istream& in, Book& c); 
		friend ostream& operator <<(ostream& out, const Book& c);
		//�������� 
protected:
		string title; 
		string type;
		int year;

};
