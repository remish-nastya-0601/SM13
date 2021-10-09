#pragma once
#include "Book.h"
class Publisher :
    public Book
{
public:
    Publisher(void);//����������� ��� ���������� 
public:
    string pub;//������� ����������������
    ~Publisher(void);//���������� 
    Publisher(string,string,int,string);//����������� � �����������
    Publisher(const Publisher&);//����������� ����������� 
    string Get_pub(){return pub;}//�����������
    void Set_pub(string);//��������
    Publisher& operator=(const Publisher&);//�������� ������������
    friend istream& operator>>(istream& in, Publisher& l);//�������� �����
    friend ostream& operator<<(ostream& out, const Publisher& l); //�������� ������ protected:
};

