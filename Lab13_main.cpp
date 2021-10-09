#include <iostream> 
#include "Book.h" 
#include "Publisher.h" 
using namespace std; // глобальные функции 

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
	//работа с классом Book 
	Book a;
	cin >> a;
	cout << a;
	Book b("Harry Potter", "Printed book", 2015); cout << b;
	a = b;
	cout << a;

	//работа с классом Publisher 
	Publisher c;
	cin >> c;
	cout << c; //принцип подстановки

	f1(c);//передаем объект класса Publisher 
	a=f2();//создаем в функции объект класса Publisher 
	cout<<a;

}


