//LAB 8.1
#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time(int h, int m, int s);
	void ShowTime();
	void ShowTimeSec();


};

Time::Time(int h, int m = 0, int s = 0)
{
	hour = h;
	min = m;
	sec = s;
}
void Time::ShowTime()
{
	cout << "Hour:" << hour << endl;
	cout << "Min:" << min << endl;
	cout << "second:" << sec << endl;
}
void Time::ShowTimeSec()
{
	int second = hour * 3600 + min * 60 + sec;
	cout << "second:" << second << endl;
}

int main()
{
	Time time1(9);
	Time time2(9, 10);
	Time time3(9, 10, 11);

	time2.ShowTime();
	time2.ShowTimeSec();
	return 0;
}



//E.g 10.6
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	Time operator-(const Time& t);
	Time operator*(double mult);
	void Show();
};
Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time& t)
{
	Time diff;
	int tol1, tol2;
	tol1 = t.minutes + 60 * t.hours;
	tol2 = minutes + 60 * hours;
	diff.minutes = (tol2 - tol1) % 60;
	diff.hours = (tol2 - tol1) / 60;
	return diff;
}
Time Time::operator*(double mult)
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
void Time::Show()
{
	cout << hours << "�ð�," << minutes << "��";
}

int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time=";
	planning.Show();
	cout << endl;

	cout << "coding time=";
	coding.Show();
	cout << endl;

	cout << "fixing time=";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	cout << "coding+fixing= ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "More fixing time=";
	morefixing.Show();
	cout << endl;

	total = morefixing.operator+(total);//�Լ� ǥ��
	cout << "morefixing.operator+(total)= ";
	total.Show();
	cout << endl;
	return 0;
}
#LAB8.2 �簢���� ���� �оƿ� �ѷ� ���ϱ�

#include<iostream>
using namespace std;

class Rectangle {
	double width;
	double length;
public:
	Rectangle(double wid, double len);
	double GetArea();
	double GetGirth();
};

Rectangle::Rectangle(double wid, double len)
{
	width = wid;
	length = len;
}

double Rectangle::GetArea()
{
	return width * length;
}
double Rectangle::GetGirth()
{
	return 2 * (width + length);
}

class Circle
{
	double radius;
public:
	const int pi = 3.141592;
	Circle(double r);
	double GetArea();
	double GetGirth();
};
Circle::Circle(double r)
{
	radius = r;
}

double Circle::GetArea()
{
	return pi * radius * radius;
}
double Circle::GetGirth()
{
	return pi * 2 * radius;
}

int main()
{
	Rectangle rec(3, 4);
	cout << "Area:" << rec.GetArea() << endl;
	cout << "Girth:" << rec.GetGirth() << endl;

	Circle cir(5);
	cout << "Area:" << cir.GetArea() << endl;
	cout << "Girth:" << cir.GetGirth() << endl;

	return 0;
}
#include<iostream>
using namespace std;

struct sungjuck
{
	char name[16];
	int kor, eng, math, tot;
	float avg;

};

void calc(sungjuck* arr)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i].tot = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].avg = arr[i].tot / 3.0;
	}
}
void prn(sungjuck* arr)
{

	cout << "===========================================\n";
	cout << "�̸�\t����\t����\t����\t����\t���\n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].name << "\t" << arr[i].kor << "\t" << arr[i].eng << "\t" << arr[i].math << "\t" << arr[i].tot << '\t' << arr[i].avg << '\n';
	}
}

void init(sungjuck* arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "�̸��� �Է��Ͻÿ�->";
		cin >> arr[i].name;
		cout << "���� ������ �Է��ϼ���->";
		cin >> arr[i].kor;
		cout << "���� ������ �Է��ϼ���->";
		cin >> arr[i].eng;
		cout << "���� ������ �Է��ϼ���->";
		cin >> arr[i].math;
	}
}

int main()
{
	sungjuck s[5];
	init(s);
	calc(s);
	prn(s);
}

�� ���Ҽ��� ���ϴ� ����Լ� �ۼ��ϱ�

#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex Sum(Complex rightHand);
};

void Complex::ShowComplex()
{
	cout << "(" << real << "+" << image << "i)" << endl;
}

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}
Complex Complex::Sum(Complex rightHand)
{
	Complex res;
	res.real = this->real + rightHand.real;
	res.image = this->image + rightHand.image;
	return res;
}

int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;
	z = x.Sum(y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
	return 0;
}
���� Ŭ���� ����
#include<iostream>

using namespace std;

//Random Class
class Random //Random Ŭ���� ����
{
private: //private ���� ������ ����
   // 10 random numbers from constructors
    int ranNum[10]; //������ ���� �迭 ũ�Ⱑ 10�� ranNum ����

public: //���� ������ public ����
   // Default constructor with no arguments
    Random(); //�ڷ��� ����Լ� ����(1~10���� ������ ����� �Լ�)
    // Constructor with arguments
    Random(int fromNum, int toNum); //�ڷ��� ����Լ� (�� ���� �Է� �޾Ƽ� �� ���̿��� ���� ����� �Լ�)
    // show all numbers in ranNum[10]
    void ShowNumbers(); //�ڷ��� ����Լ� ����(���� ������ ����� �Լ�)
    // show minimum number in ranNum[10]
    void ShowMinNumber(); //�ڷ��� ����Լ� ����(�ּڰ��� ���ϰ� ����� �Լ�)
    // show maximum number in ranNum[10]
    void ShowMaxNumber(); //�ڷ��� ����Լ� ����(�ִ��� ���ϰ� ����� �Լ�)
    //show most frequent numbers in ranNum[10]
    void FindMostFreqNumber(); //�ڷ��� ����Լ�(�ֺ��� ���ϰ� ����� �Լ�)
};


Random::Random() //���λ��� ����(1~10���� ������ ����� �Լ�)
{
    for (int i = 0; i < 10; i++) //10�� �ݺ��ؼ�
    {
        ranNum[i] = rand() % 10 + 1; //1~10���� ���� �߻��ؼ� ranNum�迭�� ����
    }
}

Random::Random(int fromNum, int toNum)//���λ��� ���� (�� ���� �Է� �޾Ƽ� �� ���̿��� ���� ����� �Լ�)
{
    int left = fromNum;
    int right = toNum + 1; //1�� ���ؼ� �� �� ���̿��� ���� �� �ְ� ����
    for (int i = 0; i < 10; i++) //10�� �ݺ��ؼ�
    {
        ranNum[i] = rand() % (right - left) + left; //�Էµ� �� �� ���̿��� ���� ���
    }
}

void Random::ShowNumbers() //���λ��� ���� (���� ������ ����� �Լ�)
{
    cout << " Ramdom numbers are as follows: "; //���� ���ڿ� ���
    for (int i = 0; i < 10; i++) { //10�� �ݺ��ؼ�
        cout << "  " << ranNum[i]; //�� ���� ���
    }
    cout << endl; //�� �ٲ�
}

void Random::ShowMinNumber() //���λ��� ���� (�ּڰ��� ���ϰ� ����� �Լ�)
{
    int min = ranNum[0]; //ranNum�迭�� 1��° ���� min���� �ϸ鼭 �ּڰ��� ���� ����min ����
    for (int i = 0; i < 10; i++) { //10�� �ݺ��ؼ�
        if (ranNum[i] < min) min = ranNum[i]; //�迭 I��° ���� �۴ٸ� �� ���� min���� ����. �̸� ����ؼ� �ݺ��ؼ� �ּڰ� ���ϱ�
    }
    cout << "Minimum number : " << min << endl; //�ּڰ� ���
}

void Random::ShowMaxNumber() //���λ��� ���� (�ִ��� ���ϰ� ����� �Լ�)
{
    int max = ranNum[0];//ranNum�迭�� 1��° ���� max�� �ϸ鼭 ���ÿ� �ִ��� ���� ����min ����
    for (int i = 0; i < 10; i++) { //10�� �ݺ��ؼ�
        if (ranNum[i] > max) max = ranNum[i];//�迭 I��° ���� ũ�ٸ� �� ���� max���� ����. �̸� ����ؼ� �ݺ��ؼ� �ּڰ� ���ϱ�
    }
    cout << "Maximum number : " << max << endl;//�ִ� ���
}

void Random::FindMostFreqNumber() //���λ��� ���� (�ֺ��� ���ϰ� ����� �Լ�)
{
    int i, j, mode, freq, count = 1; //�ֺ��� ���ϴµ� �ʿ��� ���� ����
    for (i = 0; i < 10; i++) //10�� �ݺ��ؼ�
    {
        freq = 1;
        for (j = i + 1; j < 10; j++)
            if (ranNum[i] == ranNum[j]) //���� ���Ƹ�
                freq += 1; //�󵵼� ���� freq�� 1�� ����.
        if (freq >= count)
        {
            mode = ranNum[i]; //�ֺ� ����
        }
    }
    cout << "Most occurred number : " << mode << endl; //�ֺ� ���
}

int main()
{
    //create random object which random integers from 1 to 10
    Random a; //�������� ���� �Լ� ����
    a.ShowNumbers();
    a.ShowMinNumber();
    a.ShowMaxNumber();
    a.FindMostFreqNumber();

    cout << endl; //�� �ٲ�

    //create random object which random integers from 40 to 45
    Random b(40, 45); //40���� 45�� �������ڸ� �޾� �Լ� ����
    b.ShowNumbers();
    b.ShowMinNumber();
    b.ShowMaxNumber();
    b.FindMostFreqNumber();

    return 0;
}



1��
#include<iostream>
using namespace std;

int prnMaxNum(int num[10], int size)
{
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	cout << "TheMaximum number is" << max << endl;
	return max;
}

int countOddNumber(int num[10], int b)
{
	int odd = 0;
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 1)
		{
			odd = odd + 1;
		}
	}
	return odd;
}

int main()
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(num) / sizeof(int);
	prnMaxNum(num, size);
	int oddNum = countOddNumber(num, size);
	cout << "Number of odd number is" << oddNum<< endl;
	return 0;
}

#include<iostream>
using namespace std;

class Record
{
private:
	float s1[2];
	float s2[2];
	float sum = 0;
	float kor=0, mat=0, eng=0;
public:
	Record(float k, float m , float e );
	Record(float st1[2], float st2[2]);
	void Sum();
	void Avg();
};

Record::Record(float k, float m, float e)
{
	kor = k;
	mat = m;
	eng = e;
}

Record::Record(float st1[2], float st2[2])
{
	s1[2] = st1[2];
	s2[2] = st2[2];
}
void Record::Sum()
{
	cout << "����:" << kor + mat + eng << endl;
}
void Record::Avg()
{
	cout << "���:" << (kor+mat+eng) / 3 << endl;
}

int main()
{
	Record student[2] = {
		Record(65.0,70.0,55.0),
		Record(75.0,85.0,79.0)
	};
	
	student[0].Sum();
	student[0].Avg();
	student[1].Sum();
	student[1].Avg();

	return 0;
//}

#include <iostream>
using namespace std;

class Square {
	int w, h;
public:
	Square(int w, int h) { this->w = w; this->h = h; }
	int getArea() { return w * h; }
};


class Cube {
private:
	int a;
	int b;
	int c;
	int hhh;
public:
	Cube(int A, int B, int C);
	int getVolume();
};
Cube::Cube(int A, int B, int C)
{
	a = A;
	b = B;
	c = C;
}
int Cube::getVolume()
{
	hhh = a * b * c;
	return hhh;
}


int main()
{
	Cube box(5, 5, 5);
	cout << box.getVolume() << endl;
	return 0;
}
#include <iostream>
using namespace std;

int summation_1(int(*output)[3], int elNum) {//�Լ� ���� , 2���� �迭�� �ּҰ��� ����
    int sum = 0;
    for (int i = 0; i < elNum; i++) {
        //cout << *(*output + i) <<endl;
        sum += *(*output + i);
        // ù��° �ּҿ� ����, �������������ڸ� �� �� ����Ͽ� ������ �迭�� ���� �����´�. 
        //for���� �ѹ� �̿��ϰ� ������ ������ �迭�� ����� �������� �������鼭 ������ ����Ѵ�.
    }
    return sum; // sum ��ȯ
}

int summation_2(int output[][3], int elNum) {
    //�Լ� ����, �Լ��� �Ű������μ� ������ �迭�� �ּҸ� �޴´�. input�̶�� ���ڸ� �޴� �Ű������μ� output���� ����. 
    int sum = 0;
    for (int i = 0; i < elNum; i++) {
        cout << *(*output + i) << endl;
        sum += *(*output + i);
    }
    return sum;
}

int main()
{
    int input[2][3];
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 3; k++) {
            cout << "input " << "[" << i << "]" << "[" << k << "]" << endl;
            cin >> input[i][k];
        }
    }
    int size = sizeof(input) / sizeof(int); //�迭�� ũ��
    int total = 0;
    total = summation_2(input, size);//�Լ��� ȣ���� ��, ���ڴ� �迭�� �̸��� ũ��� �ؾ� �Ѵ�. 
    cout << total << endl;
    return 0;
}
#include<iostream> 
using namespace std;
int get_num();
int main() {
	int sum = 0;
	int nums[5];

	for (int i = 0; i < 5; i++) {
		nums[i] = get_num();
		sum = sum + nums[i];
	}
	cout << "5�� ���� ����" << sum << endl;
}
int get_num() {
	int a;
	cout << "�����Է�: ";
	cin >> a;
	return a;
}

2���� �迭�� ����ؼ� ���� ���ϱ�
#include<iostream>
#define ROW 3
#define COL 5
using namespace std;
int main()
{

	int a[ROW][COL] = { 0, };
	int r, c;

	for (r = 0; r < ROW; r++)
	{
		a[r][0] = r + 1;
		cout << "#" << a[r][0] << "��° �л��� �̸��� �Է��ϼ���\n";
		for (c = 1; c <= COL - 2; c++)
		{
			cout << c << "���� ����";
			cin >> a[r][c];
		}
	}
	for (r = 0; r < ROW; r++)
	{
		for (c = 1; c <= COL - 2; c++)
		{
			a[r][COL - 1] += a[r][c];
		}
	}
	cout << "\n \t\t** ��°�� **";
	cout << "\n---------------------------";
	cout << "\n\t��ȣ\t����\t����\t����\t����";
	cout << "\n---------------------------\n";
	for (r = 0; r < ROW; r++)
	{
		for (c = 0; c < COL; c++)
			cout << "\t" << a[r][c];
		cout << "\n";
	}
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
class vector
{
	double x;
	double y;
	double dis;
	double angle;
public:
	vector(double _x = 0, double _y = 0) { x = _x; y = _y; };
	vector operator+(const vector& v);
	vector operator-(const vector& v);
	vector operator*(const vector& v);
	friend vector operator*(double m, const vector& v);
	friend ostream& operator<<(ostream& os, const vector& o);
	friend istream& operator>>(istream& is, vector& i);
};

vector vector::operator+(const vector& v)
{
	vector cal;
	cal.x = x + v.x;
	cal.y = y + v.y;
	return cal;
}
vector vector::operator-(const vector& v)
{
	vector cal;
	cal.x = x - v.x;
	cal.y = y - v.y;
	return cal;
}

vector vector::operator*(const vector& v)
{
	vector cal;
	cal.x = x * v.x;
	cal.y = y * v.y;
	return cal;
}
vector operator*(double m, const vector& v)
{
	vector cal;
	cal.x = v.x * m;
	cal.y = v.y * m;
	return cal;
}

ostream& operator<<(ostream& os, const vector& o)
{
	os << "<" << o.x << "," << o.y << ">" << endl;
	os << "distance = " << sqrt(o.x * o.x + o.y * o.y) << " , angle = " << atan2(o.y, o.x) << endl;
	return os;
}
istream& operator>>(istream& is, vector& i)
{
	cout << "x,y ���� �Է��Ͻÿ�" << endl;
	is >> i.x;
	cout << endl;
	is >> i.y;
	cout << endl;
	return is;
}


int main()
{
	vector a(1, 2);
	cout << " a = " << a << endl;
	vector b(3, 4);
	cout << "b = " << b << endl;
	cout << "a+b = " << a + b << endl;

	vector c;
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a-c = " << a - c << endl;
	cout << "-1.1*a = " << -1.1 * a << endl;
	return 0;
}
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void genRanNumber(float* num);
float sumNumber(float* num);
float calMean(float num, int cnt);

int main()
{
	float ranNum[10] = { 0.0 }; //{0.0}�� ���� �迭�� �ʱ�ȭ�Ѵ�.
	float avg;
	float sum;

	genRanNumber(ranNum);
	
	cout << "Random numbers are as follows: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << ranNum[i] << endl; //random���� ���� ���� for�� ���� �����ش�.
	}

	cout << endl;
	
	sum = sumNumber(ranNum);
	cout << "Total sum: "<<sum<< endl;

	int size = sizeof(ranNum) / sizeof(int); //ranNum�� ũ�Ⱑ 40 �̰� int�� 4byte�̹Ƿ� �����ָ� size�� 10�� �ȴ�.
	avg = calMean(sum, size);
	cout << "Average: " << avg << endl;
}

void genRanNumber(float* num)
{
	float random;
	srand(time(NULL));//�ð� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		random =(rand() % 101/10.0); //�Ҽ��� ù° �ڸ����� ���ϱ� ���� 0.1�� ���� 
		* (num + i) = random;	//�ּҰ��� i�� �����ָ鼭 random�� �迭�� ����
	}
}
float sumNumber(float* num)
{
	float total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + *(num+i); // num+i �ּҿ� �ִ� ������ *�� �����ϸ鼭 ������
		
	}
	return total;
}

float calMean(float num, int cnt)
{
	float avg;
	avg = num / cnt; 
	return avg;
}
#include<iostream>

using namespace std;

void greaterNum(int a, int b);
int pow(int c, int d);

int main()
{
	int num1, num2;
	cout << "Enter two numbers:";
	cin >> num1>> num2;

	cout << "\n";
	greaterNum(num1, num2); 

	cout << " " << num1 << "^" << num2 << "=" << pow(num1, num2) << endl;
}

void greaterNum(int a, int b)
{
	if (a > b) // a�� b���� Ŭ�� ���
		cout << a << "is greater than " << b << endl;
	else if (a < b)// b�� a���� Ŭ�� ���
		cout << b << "is greater than " << a << endl;
	else//b=a�ϋ� ���
		cout << "a=b";
}

int pow(int c, int d)
{
	int result = 1;
	for (int i = 1; i <= d; i++)
		result *= c;//c�� �ݺ��ؼ� �����ش�.
	return result;
//}
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void genRanNumber(float* num);
float sumNumber(float* num);
float calMean(float num, int cnt);

int main()
{
	float ranNum[10] = { 0.0 }; //{0.0}�� ���� �迭�� �ʱ�ȭ�Ѵ�.
	float avg;
	float sum;

	genRanNumber(ranNum);
	
	cout << "Random numbers are as follows: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << ranNum[i] << endl; //random���� ���� ���� for�� ���� �����ش�.
	}

	cout << endl;
	
	sum = sumNumber(ranNum);
	cout << "Total sum: "<<sum<< endl;

	int size = sizeof(ranNum) / sizeof(int); //ranNum�� ũ�Ⱑ 40 �̰� int�� 4byte�̹Ƿ� �����ָ� size�� 10�� �ȴ�.
	avg = calMean(sum, size);
	cout << "Average: " << avg << endl;
}

void genRanNumber(float* num)
{
	float random;
	srand(time(NULL));//�ð� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		random =(rand() % 101/10.0); //�Ҽ��� ù° �ڸ����� ���ϱ� ���� 0.1�� ���� 
		* (num + i) = random;	//�ּҰ��� i�� �����ָ鼭 random�� �迭�� ����
	}
}
float sumNumber(float* num)
{
	float total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + *(num+i); // num+i �ּҿ� �ִ� ������ *�� �����ϸ鼭 ������
		
	}
	return total;
}

float calMean(float num, int cnt)
{
	float avg;
	avg = num / cnt; 
	return avg;
}