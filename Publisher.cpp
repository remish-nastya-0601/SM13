#include "Publisher.h" //����������� ��� ����������

Publisher::Publisher(void) :Book()
{
	pub = "";
}

//���������
Publisher::~Publisher(void){ }

//����������� � �����������
Publisher::Publisher(string M, string C, int P, string G):Book(M, C, P)
{
	pub = G;
}

//����������� �����������
Publisher::Publisher(const Publisher& L)
{
	title = L.title;
	type = L.type;
	year = L.year;
	pub = L.pub;
}

//�����������
void Publisher::Set_pub(string G)
{
	pub = G;
}

//������� ������������
Publisher& Publisher::operator=(const Publisher& l)
{
	if (&l == this)  return *this; 
	title = l.title; 
	year = l.year; 
	type = l.type;
	pub = l.pub;
	return *this;
}

//�������� �����
istream& operator>>(istream& in, Publisher& l)
{
	cout << "\nTitle of the book: "; 
	in >> l.title; 
	cout << "Type:"; 
	in >> l.type; 
	cout << "Year of publication:";
	in >> l.year;
	cout << "Publisher:"; 
	in >> l.pub; 
	return in;
}

//�������� ������
ostream& operator<<(ostream& out, const Publisher& l)
{
	out << "\nTitle of the book: " << l.title; 
	out << "\nType: " << l.type; 
	out << "\nYear of publication: " << l.year; 
	out << "\nPublisher: " << l.pub; 
	out << "\n";
	return out;
}
