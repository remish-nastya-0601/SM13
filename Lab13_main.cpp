#include <iostream> 
#include "Book.h" 
#include "Publisher.h" 
using namespace std; // ���������� ������� 

void f1(Book&c)
{
c.Set_title("Pride and prejudice");
cout << c;
}

Book f2()
{
	Publisher l("The old man and the sea", "Electronic book", 2006, "ACT");
	return l;
}

int main()
{
	setlocale(LC_ALL,"Russian");
	//������ � ������� Book 
	Book a;
	cin >> a;
	cout << a;
	Book b("Harry Potter", "Printed book", 2015); cout << b;
	a = b;
	cout << a;

	//������ � ������� Publisher 
	Publisher c;
	cin >> c;
	cout << c; //������� �����������

	f1(c);//�������� ������ ������ Publisher 
	a=f2();//������� � ������� ������ ������ Publisher 
	cout<<a;

}


