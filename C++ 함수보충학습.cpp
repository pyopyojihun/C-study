//#include<iostream>
//using namespace std;
//void total(int a);
//int main()
//{
//	int b = 10;
//	
//	total(b);
//	total(100);
//	total(5);
//	return 0;
//}
//void total(int a)
//{
//	int c = 0;
//	for (int i = 1; i <= a; i++)
//	{
//		c += i;
//	}
//	cout << "total= " << c << endl;
//}

//#include<iostream>
//void swap(int a, int b);
//using namespace std;
//int main()
//{
//	int a = 1, b = 2;
//	cout << "before call: a =" << a << "   b=" << b << endl;
//	swap(a, b);
//	cout << "after call: a=" << a << "  b=" << b << endl;
//	return 0;
//}
//
//void swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int* p;
//	p = a;
//
//	cout << "\n *p: " << *p;
//	cout << "\t a[0] :" << a[0];
//
//	cout << "\n *(p+1) :" << *(p + 1);
//	cout << "\t a[1] :" << a[1];
//
//	cout << "\n *(p+2): " << *(p + 2);
//	cout << "\t a[2]: " << a[2] << "\n";
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 60,70,80,90,100 };
//	int c[5] = { 110,120,130,140,150 };
//
//	int* p[3] = { a,b,c };
//
//	
//	cout << ">> 각 1차원 배열의 첫번쨰 원소 출력<<\n";
//	cout << p[0][0] << "\t" << p[1][0] << "\t" << p[2][0] << "\n\n";
//	cout << *p[0] << "\t" << *p[1] << "\t" << *p[2] << "\n\n";
//	cout << ">> 각 1차원 배열의 두번쨰 원소 출력<<\n";
//
//	cout << p[0][1] << "\t" << p[1][1] << "\t" << p[2][1] << "\n\n";
//	cout << *(p)[1] << "\t" << (*(p + 1))[1] << "\t" << (*(p + 2))[1] << "\n\n";
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int sum(int n);
//int sum(int n, int m);
//
//int main()
//{
//	cout << "total =" << sum(5) << endl;
//	cout << "total= " << sum(1, 5) << endl;
//
//	return 0;
//}
//
//int sum(int n)
//{
//	int total = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		total += i;
//	}
//	return total;
//}
//
//int sum(int n, int m)
//{
//	int total = 0;
//	int i;
//	for (i = n; i <= m; i++)
//		total += i;
//	return total;
//}

//#include<iostream>
//using namespace std;
//
//void sum(int n)
//{
//	int total = 0;
//	for (int i = 1; i <= n; i++)
//		total = total + i;
//	cout << "total= " << total << endl;
//}
//
//int main()
//{
//	int a = 10;
//	sum(a);
//	sum(100);
//	sum(5);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int* p;
//	p = a;
//
//	cout << *p << endl;
//	cout << a[0] << endl;
//	cout << *(p + 1) << endl;
//	cout << a[1] << endl;
//	cout << *(p + 2) << endl;
//	cout << a[2] << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 60,70,80,90,100 };
//	int c[5] = { 110,120,130,140,150 };
//
//	int* p[3] = { a,b,c };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << p[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}

//#include<iostream>
//
//using namespace std;
//
//class Time {
//    int hour;
//    int min;
//    int sec;
//public:
//    Time(int h, int m, int s);
//    void ShowTime();
//    void ShowTimeSec();
//
//};
//
//Time::Time(int h, int m = 0, int s = 0) {
//    hour = h;
//    min = m;
//    sec = s;
//}
//void Time::ShowTime() {
//    cout << "hour:" << hour << endl;
//    cout << "minute:" << min << endl;
//    cout << "second:" << sec << endl;
//}
//void Time::ShowTimeSec() {
//    int second = hour * 3600 + min * 60 + sec;
//    cout << "second:" << second << endl;
//}
//
//int main() {
//    Time time1(9);
//    Time time2(9, 10);
//    Time time3(9, 10, 11);
//
//    time2.ShowTime();
//    time2.ShowTimeSec();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Time
//{
//	int hour;
//	int min;
//	int sec;
//
//public:
//	void showTime();
//	void ShowtimeinSec();
//};
//Time::Time(int h, int m, int s)
//{
//	h = hour;
//	m = min;
//	s = sec;
//}
//
//void Time::showTime()
//{
//	cout << "hour: " << hour << endl;
//	cout << "min: " << min << endl;
//	cout << "sec: " << sec << endl;
//}

//#include<iostream>
//using namespace std;
//
//class AAA
//{
//public:
//	AAA()//생성자
//	{
//		cout << "생성자 호출" << endl;
//	}
//	~AAA()//소멸자
//	{
//		cout << "소멸자 호출" << endl;
//	}
//};
//
//int main()
//{
//	AAA aaa1;
//	AAA aaa2;
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
//	Geoinfo(const char* ch, int a, int b);
//	~Geoinfo();
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//	cout << "Calling the constructor!" << endl;
//}
//
//Geoinfo::~Geoinfo()
//{
//	cout << "Calling the deconstructor!" << endl;
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
//	Geoinfo x("Geo", 10000, 20);
//	Geoinfo y("Kyung-Ho", 20000, 20);
//	x.Showinfo();
//	y.Showinfo();
//
//	Geoinfo* ptr;
//	ptr = &x;
//	ptr->Showinfo();
//	ptr = &y;
//	ptr->Showinfo();
//	cout << sizeof(ptr) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 60,70,80,90,100 };
//	int c[5] = { 110,120,130,140,150 };
//
//	
//	int* p[3] = {a,b,c};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << p[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	
//}

//#include<iostream>
//using namespace std;
//struct pyo
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(pyo temp)
//{
//	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//
//pyo structInput()
//{
//	pyo temp;
//	cout << "\n 이름을 입력하세요=>";
//	cin >> temp.name;
//	cout << "직업을 입력하세요=>;";
//	cin >> temp.job;
//	cout << "연락처를 입력하세요=>";
//	cin >> temp.tel;
//	cout << "이메일을 입력하세요=>";
//	cin >> temp.email;
//
//	return temp;
//}
//
//void main()
//{
//	pyo x, y, z;
//
//	x = structInput();
//	y = structInput();
//	z = structInput();
//
//	cout << " 이름    직업     연락처     이메일" << endl;
//	cout << "=====================================" << endl;
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << "\n======================================" << endl;
//}
//#include<iostream>
//using namespace std;
//class Account
//{
//	char accID[20];
//	char secID[20];
//	char name[20];
//	int balance;
//
//	void Deposit(int money)
//	{
//		balance += money;
//	}
//	void Withdraw(int money)
//	{
//		balance -= money;
//	}
//};
//int main()
//{
//	//Account Kim;
//	//strcpy_s(Kim.accID, 5, "1234"); 오류뜸 어떻게 해야되냐?
//	Account Kim = { "1234","23410","Geo",1000 };
//
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
//	Geoinfo(const char* ch, int a, int b);
//	void Showinfo() const;
//};
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//}
//
//void Geoinfo::Showinfo() const
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//int main()
//{
//	Geoinfo x[2] = {
//		Geoinfo("Gewo",10000,20),Geoinfo("Kyung-Ho",20000,20)
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		x[i].Showinfo();
//	}
//	return 0;


//LAb 8.2
//#include <iostream>
//
//using namespace std;
//
//class Rectangle 
//{
//    double width;
//    double length;
//public:
//    Rectangle(double a, double b);
//    double GetArea();
//    double GetGirth();
//};
//Rectangle::Rectangle(double a, double b)
//{
//    width = a;
//    length = b;
//} 
//double Rectangle::GetArea() 
//{
//    return width * length;
//}
//double Rectangle::GetGirth() 
//{
//    return 2 * (width + length);
//}
//
//class Circle
//{
//    double c;
//    double d = 3.141592;
//public:
//    Circle(double r);
//    double GetArea();  
//    double GetGirth();
//};
//Circle::Circle(double r)
//{
//    c = r;
//}
//double Circle::GetArea() 
//{
//    return d * c * c;
//}
//double Circle::GetGirth()  
//{
//    return 2 * d * c;
//}
//
//int main()
//{
//    Rectangle rec(3, 4);
//    cout << "Area:" << rec.GetArea() << endl;
//    cout << "Girth: " << rec.GetGirth() << endl;
//
//    Circle cir(5);
//    cout << "Area: " << cir.GetArea() << endl;
//    cout << "Girth: " << cir.GetGirth() << endl;
//
//    return 0;
//}
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
//	Geoinfo z(y);//복사 생성자 z.name=y.name//z.id=y.id//z.age=y.age
//
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//	return 0;
//}