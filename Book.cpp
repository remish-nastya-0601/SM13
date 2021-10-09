#include "Book.h" //����������� ��� ����������

Book::Book(void)
{
	title = ""; 
	type = ""; 
	year = 0;
}

//����������
Book::~Book(void) {}

//����������� � �����������
Book::Book(string M, string C, int P)
{
	title = M;
	type = C;
	year = P;
}

//����������� �����������
Book::Book(const Book& Book)
{
	title = Book.title;
	type = Book.type;
	year = Book.year;
}

//������������
void Book::Set_type(string C)
{
	type = C;
}

void Book::Set_title(string M)
{
	title = M;
}

void Book::Set_year(int P)
{
	year = P;
}

//���������� �������� ������������
Book& Book::operator=(const Book& c)
{
	if (&c == this)return *this; 
	title = c.title; 
	type = c.type;
	year = c.year; 
	return *this;
}

//���������� ������� ��� ����� 
istream& operator>>(istream&in,Book&c)
{
	cout << "Title of the book:"; 
	in >> c.title;  
	cout << "Type:";
	in >> c.type;
	cout << "Year of publication:";
	in >> c.year;
	return in;
}

//���������� ������� ��� ������
ostream& operator<<(ostream& out, const Book& c)
{
	out << "\nTitle of the book: " << c.title; 
	out << "\nType : " << c.type; 
	out << "\nYear of publication : " << c.year; 
	out << "\n";
	return out;
}