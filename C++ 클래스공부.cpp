//#include<iostream>
//using namespace std;
//class Account 
//{
//public:
//	char accID[20];
//	char secID[20];
//	char name[20];
//	int balance;
//
//	void  Deposit(int money)
//	{
//		balance += money;
//	}
//
//	void Withdraw(int money)
//	{
//		balance -= money;
//	}
//};
//	
//
//int main()
//{
//	Account kim = { "1234","2341","Geo",1000 };
//	cout << "���¹�ȣ: " << kim.accID << endl;
//	cout << "��й�ȣ: " << kim.secID << endl;
//	cout << "��  ��: " << kim.name << endl;
//	cout << "��    ��: " << kim.balance << endl;
//} 
//
//#include<iostream>
//using namespace std;
//
//class Account
//{
//private:
//	char accID[20];
//	char secID[20];
//	char name[20];
//	int balance;
//
//public:
//	void initMembers(const char* acc,const char* sec, const char* n, int bal);
//
//	void Deposit(int money);
//
//	void Withdraw(int money);
//
//	void showinfo();
//};
//
//void Account::initMembers(const char* acc, const char* sec, const char* n, int bal)
//{
//	strcpy_s(accID, 20, acc);
//	strcpy_s(secID, 20, sec);
//	strcpy_s(name, 20, n);
//	balance = bal;
//}
//
//void Account::Deposit(int money)
//{
//	balance += money;
//}
//
//void Account::Withdraw(int money)
//{
//	balance -= money;
//}
//
//void Account::showinfo()
//{
//	cout << "���¹�ȣ: " << accID << endl;
//	cout << "��й�ȣ: " << secID << endl;
//	cout << "��   ��: " << name << endl;
//	cout << "��   ��:" << balance << endl;
//}
//
//int main()
//{
//	Account kim;
//	kim.initMembers("12234", "2341", "Geo",1000);
//	kim.showinfo();
//}

// Eg.8.1.1
//
//#include <iostream>
//using namespace std;
//const int SIZE = 20;
//
//class Geoinfo
//{
//public:
//	char name[SIZE]; 
//	int id;
//	int age;
//public:
//	void Showinfo();
//	//void SetData(const char*_name,int _id,int_age);
//};
//
//void Geoinfo::Showinfo()
//{
//	cout << "name :" << name << endl;
//	cout << "id: " << id << endl;
//	cout << "age: " << age << endl;
//}
//
//int main()
//{
//	Geoinfo p = {"Kim",200227,20 };
//	// ���� �ٿ����� ��������� private�� �����Ǿ� �ֱ� ������ 
//	//main�Լ����������������� ������ �� ���� �����̴�.
//	//Geoinfo p;
//	// p.SetData{"Kim",200227,20};
//
//	p.Showinfo();
//
//	return 0;
//}
////������ ���� ��???
//#include <iostream>
//using namespace std;
//const int SIZE = 20;
//
//class Geoinfo
//{
//public:
//	char name[SIZE];
//	int id;
//	int age;
//public:
//	void Showinfo();
//	void SetData(const char*_name,int _id,int _age);
//};
//
//void Geoinfo::Showinfo()
//{
//	cout << "name :" << name << endl;
//	cout << "id: " << id << endl;
//	cout << "age: " << age << endl;
//}
//void Geoinfo::SetData(const char* _name, int _id, int _age)
//{
//	strcpy_s(name, 20, _name);
//	id = _id;
//	age = _age;
//}
//
//
//int main()
//{
//	
//
//	Geoinfo p;
//	p.SetData("Kim",200227,20);
//
//	p.Showinfo();
//
//	return 0;
//}
//Ŭ������ ��ü ���� �� �ʱ�ȭ�� �ؾ��Ѵ�.
//�̋� ����� �Լ��� SetData�� ���ʷ� ���Ѵ�.

//#include <iostream>
//using namespace std;
//
//class AAA
//{
//	int i, j;
//public:
//	AAA()
//	{
//		cout << "������ ȣ��" << endl;
//		i = 10, j = 20;
//	}
//	void ShowData()
//	{
//		cout << i << " " << j << endl;
//	}
//};
//
//int main()
//{
//	AAA aaa;
//	aaa.ShowData();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Geoinfo
//{
//private:
//	char name[20];
//	int id;
//	int age;
//public:
//	Geoinfo(const char*ch,int a,int b);
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo(const char*ch,int a,int b)
//{
//	strcpy_s(name, 20, "Geo");
//	id = a;
//	age = b;
//}
//
//void Geoinfo::Showinfo()
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	Geoinfo x("Geo", 11111, 20);
//	Geoinfo y("Kyungho",22222, 20);
//	x.Showinfo();
//	y.Showinfo();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point()
//	{
//		x = y = 0;
//	}
//	Point(int _x, int _y)
//	{
//		x = _x, y = _y;
//	}
//	void ShowData()
//	{
//		cout << x << ' ' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(10, 20);
//
//	p1.ShowData();
//
//	Point p2;
//	p2.ShowData();
// 
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Geoinfo
//{
//private:
//	char name[20];
//	int id;
//	int age;
//public:
//	Geoinfo();
//	Geoinfo(const char* ch, int a, int b);
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo()
//{
//	strcpy_s(name, 20, "undefined");
//	id = 0;
//	age = 1;
//}
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//}
//
//void Geoinfo::Showinfo()
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	Geoinfo x("Geo", 100000, 20);
//	Geoinfo y("Kyung-Ho", 200000, 20);
//	Geoinfo z;
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//	return 0;
////}
//#include<iostream>
//using namespace std;
//class Geoinfo
//{
//private:
//	char name[20];
//	int id;
//	int age;
//public:
//	Geoinfo();
//	Geoinfo(const char* ch, int a, int b);
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo()
//{
//	strcpy_s(name, 20, "undefined");
//	id = 0;
//	age = 1;
//}
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//}
//void Geoinfo::Showinfo()
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	Geoinfo x;
//	Geoinfo y("geo", 20000, 20);
//	Geoinfo z(y);//���� ������ z.name=y.name//z.id=y.id//z.age=y.age
//
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//	return 0;
//}

//���� �������� �ٸ�����
//#include<iostream>
//using namespace std;
//class Geoinfo
//{
//private:
//	char name[20];
//	int id;
//	int age;
//public:
//	Geoinfo();
//	Geoinfo(const char* ch, int a, int b);
//	void Showinfo();
//	Geoinfo(const Geoinfo& p);
//};
//
//Geoinfo::Geoinfo()
//{
//	strcpy_s(name, 20, "undefined");
//	id = 0;
//	age = 1;
//}
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//}
//Geoinfo::Geoinfo(const Geoinfo& p)
//{
//	strcpy_s(name, 20, p.name);
//	id = p.id;
//	age = p.age;
//}
//void Geoinfo::Showinfo()
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	Geoinfo x;
//	Geoinfo y("geo", 20000, 20);
//	Geoinfo z(y);//���� ������ z.name=y.name//z.id=y.id//z.age=y.age
//	
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Geoinfo
//{
//private:
//	char* pname;
//	int id;
//	int age;
//	int length;
//public:
//	Geoinfo();
//	Geoinfo(const char* ch, int a, int b);
//	~Geoinfo();
//	Geoinfo(const Geoinfo& obj);
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo()
//{
//	length = 1;
//	pname = new char[length];
//	strcpy_s(pname, 20, "");
//	id = 0;
//	age = 1;
//}
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	length = strlen(ch) + 1;
//	pname = new char[length];
//	strcpy_s(pname, length, ch);
//	id = a;
//	age = b;
//}
//Geoinfo::~Geoinfo()
//{
//	delete[] pname;
//	length = 0;
//	pname = NULL;
//}
//Geoinfo::Geoinfo(const Geoinfo& obj)
//{
//	length = obj.length;
//	pname = new char[length];
//	strcpy_s(pname, length, obj.pname);
//	id = obj.id;
//	age = obj.age;
//}
//void Geoinfo::Showinfo()
//{
//	cout << pname << endl;
//	cout << id << endl;
//	cout << age << endl;
//	cout << endl << endl;
//}
//
//int main()
//{
//	Geoinfo x("Geo KIm", 10000, 20);
//	Geoinfo y("Kyungho", 10000, 20);
//	Geoinfo z(x);
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//	return 0;
//}


