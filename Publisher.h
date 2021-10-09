#pragma once
#include "Book.h"
class Publisher :
    public Book
{
public:
    Publisher(void);//конструктор без параметров 
public:
    string pub;//атрибут грузоподъемность
    ~Publisher(void);//деструктор 
    Publisher(string,string,int,string);//конструктор с параметрами
    Publisher(const Publisher&);//конструктор копирования 
    string Get_pub(){return pub;}//модификатор
    void Set_pub(string);//селектор
    Publisher& operator=(const Publisher&);//операция присваивания
    friend istream& operator>>(istream& in, Publisher& l);//операция ввода
    friend ostream& operator<<(ostream& out, const Publisher& l); //операция вывода protected:
};

