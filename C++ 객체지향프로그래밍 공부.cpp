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
	cout << hours << "시간," << minutes << "분";
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

	total = morefixing.operator+(total);//함수 표기
	cout << "morefixing.operator+(total)= ";
	total.Show();
	cout << endl;
	return 0;
}
#LAB8.2 사각형과 원의 넓아와 둘레 구하기

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
	cout << "이름\t국어\t영어\t수학\t총점\t평균\n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].name << "\t" << arr[i].kor << "\t" << arr[i].eng << "\t" << arr[i].math << "\t" << arr[i].tot << '\t' << arr[i].avg << '\n';
	}
}

void init(sungjuck* arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "이름을 입력하시오->";
		cin >> arr[i].name;
		cout << "국어 점수를 입력하세요->";
		cin >> arr[i].kor;
		cout << "영어 점수를 입력하세요->";
		cin >> arr[i].eng;
		cout << "수학 점수를 입력하세요->";
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

두 복소수를 더하는 멤버함수 작성하기

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
난수 클래스 구현
#include<iostream>

using namespace std;

//Random Class
class Random //Random 클래스 선언
{
private: //private 접근 지정자 설정
   // 10 random numbers from constructors
    int ranNum[10]; //난수를 담을 배열 크기가 10인 ranNum 생성

public: //접근 지정자 public 설정
   // Default constructor with no arguments
    Random(); //자료형 멤버함수 선언(1~10에서 난수를 출력할 함수)
    // Constructor with arguments
    Random(int fromNum, int toNum); //자료형 멤버함수 (두 값을 입력 받아서 그 사이에서 난수 출력할 함수)
    // show all numbers in ranNum[10]
    void ShowNumbers(); //자료형 멤버함수 선언(얻은 난수를 출력할 함수)
    // show minimum number in ranNum[10]
    void ShowMinNumber(); //자료형 멤버함수 선언(최솟값을 구하고 출력할 함수)
    // show maximum number in ranNum[10]
    void ShowMaxNumber(); //자료형 멤버함수 선언(최댓값을 구하고 출력할 함수)
    //show most frequent numbers in ranNum[10]
    void FindMostFreqNumber(); //자료형 멤버함수(최빈값을 구하고 출력할 함수)
};


Random::Random() //세부사항 제공(1~10에서 난수를 출력할 함수)
{
    for (int i = 0; i < 10; i++) //10번 반복해서
    {
        ranNum[i] = rand() % 10 + 1; //1~10까지 난수 발생해서 ranNum배열에 저장
    }
}

Random::Random(int fromNum, int toNum)//세부사항 제공 (두 값을 입력 받아서 그 사이에서 난수 출력할 함수)
{
    int left = fromNum;
    int right = toNum + 1; //1을 더해서 두 값 사이에서 나올 수 있게 조정
    for (int i = 0; i < 10; i++) //10번 반복해서
    {
        ranNum[i] = rand() % (right - left) + left; //입력된 두 값 사이에서 변수 출력
    }
}

void Random::ShowNumbers() //세부사항 제공 (얻은 난수를 출력할 함수)
{
    cout << " Ramdom numbers are as follows: "; //옆에 문자열 출력
    for (int i = 0; i < 10; i++) { //10번 반복해서
        cout << "  " << ranNum[i]; //얻어낸 난수 출력
    }
    cout << endl; //줄 바꿈
}

void Random::ShowMinNumber() //세부사항 제공 (최솟값을 구하고 출력할 함수)
{
    int min = ranNum[0]; //ranNum배열의 1번째 값을 min으로 하면서 최솟값을 담을 변수min 생성
    for (int i = 0; i < 10; i++) { //10번 반복해서
        if (ranNum[i] < min) min = ranNum[i]; //배열 I번째 값이 작다면 그 값을 min으로 저장. 이를 계속해서 반복해서 최솟값 구하기
    }
    cout << "Minimum number : " << min << endl; //최솟값 출력
}

void Random::ShowMaxNumber() //세부사항 제공 (최댓값을 구하고 출력할 함수)
{
    int max = ranNum[0];//ranNum배열의 1번째 값을 max로 하면서 동시에 최댓값을 담을 변수min 생성
    for (int i = 0; i < 10; i++) { //10번 반복해서
        if (ranNum[i] > max) max = ranNum[i];//배열 I번째 값이 크다면 그 값을 max으로 저장. 이를 계속해서 반복해서 최솟값 구하기
    }
    cout << "Maximum number : " << max << endl;//최댓값 출력
}

void Random::FindMostFreqNumber() //세부사항 제공 (최빈값을 구하고 출력할 함수)
{
    int i, j, mode, freq, count = 1; //최빈값을 구하는데 필요한 변수 선언
    for (i = 0; i < 10; i++) //10번 반복해서
    {
        freq = 1;
        for (j = i + 1; j < 10; j++)
            if (ranNum[i] == ranNum[j]) //값이 같아면
                freq += 1; //빈도수 변수 freq를 1을 더함.
        if (freq >= count)
        {
            mode = ranNum[i]; //최빈값 결정
        }
    }
    cout << "Most occurred number : " << mode << endl; //최빈값 출력
}

int main()
{
    //create random object which random integers from 1 to 10
    Random a; //전달인자 없이 함수 실행
    a.ShowNumbers();
    a.ShowMinNumber();
    a.ShowMaxNumber();
    a.FindMostFreqNumber();

    cout << endl; //줄 바꿈

    //create random object which random integers from 40 to 45
    Random b(40, 45); //40부터 45인 전달인자를 받아 함수 실행
    b.ShowNumbers();
    b.ShowMinNumber();
    b.ShowMaxNumber();
    b.FindMostFreqNumber();

    return 0;
}



1번
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
	cout << "총합:" << kor + mat + eng << endl;
}
void Record::Avg()
{
	cout << "평균:" << (kor+mat+eng) / 3 << endl;
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

int summation_1(int(*output)[3], int elNum) {//함수 정의 , 2차원 배열의 주소값을 받음
    int sum = 0;
    for (int i = 0; i < elNum; i++) {
        //cout << *(*output + i) <<endl;
        sum += *(*output + i);
        // 첫번째 주소에 접근, 간접참조연산자를 두 번 사용하여 이차원 배열의 값을 가져온다. 
        //for문을 한번 이용하고 각각의 이차원 배열에 저장된 정수값을 가져오면서 총합을 계산한다.
    }
    return sum; // sum 반환
}

int summation_2(int output[][3], int elNum) {
    //함수 정의, 함수의 매개변수로서 이차원 배열의 주소를 받는다. input이라는 인자를 받는 매개변수로서 output으로 지정. 
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
    int size = sizeof(input) / sizeof(int); //배열의 크기
    int total = 0;
    total = summation_2(input, size);//함수를 호출할 때, 인자는 배열의 이름과 크기로 해야 한다. 
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
	cout << "5개 숫자 합은" << sum << endl;
}
int get_num() {
	int a;
	cout << "숫자입력: ";
	cin >> a;
	return a;
}

2차원 배열을 사용해서 성적 구하기
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
		cout << "#" << a[r][0] << "번째 학생의 이름을 입력하세요\n";
		for (c = 1; c <= COL - 2; c++)
		{
			cout << c << "번쨰 과목";
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
	cout << "\n \t\t** 출력결과 **";
	cout << "\n---------------------------";
	cout << "\n\t번호\t국어\t영어\t수학\t총점";
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
	cout << "x,y 값을 입력하시오" << endl;
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
	float ranNum[10] = { 0.0 }; //{0.0}을 통해 배열을 초기화한다.
	float avg;
	float sum;

	genRanNumber(ranNum);
	
	cout << "Random numbers are as follows: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << ranNum[i] << endl; //random으로 뽑은 수를 for을 통해 보여준다.
	}

	cout << endl;
	
	sum = sumNumber(ranNum);
	cout << "Total sum: "<<sum<< endl;

	int size = sizeof(ranNum) / sizeof(int); //ranNum의 크기가 40 이고 int가 4byte이므로 나눠주면 size는 10이 된다.
	avg = calMean(sum, size);
	cout << "Average: " << avg << endl;
}

void genRanNumber(float* num)
{
	float random;
	srand(time(NULL));//시간 초기화
	for (int i = 0; i < 10; i++)
	{
		random =(rand() % 101/10.0); //소수점 첫째 자리까지 구하기 위해 0.1을 곱함 
		* (num + i) = random;	//주소값에 i를 더해주면서 random을 배열에 저장
	}
}
float sumNumber(float* num)
{
	float total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + *(num+i); // num+i 주소에 있는 값들을 *로 추출하면서 더해줌
		
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
	if (a > b) // a가 b보다 클떄 출력
		cout << a << "is greater than " << b << endl;
	else if (a < b)// b가 a보다 클떄 출력
		cout << b << "is greater than " << a << endl;
	else//b=a일떄 출력
		cout << "a=b";
}

int pow(int c, int d)
{
	int result = 1;
	for (int i = 1; i <= d; i++)
		result *= c;//c를 반복해서 곱해준다.
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
	float ranNum[10] = { 0.0 }; //{0.0}을 통해 배열을 초기화한다.
	float avg;
	float sum;

	genRanNumber(ranNum);
	
	cout << "Random numbers are as follows: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << ranNum[i] << endl; //random으로 뽑은 수를 for을 통해 보여준다.
	}

	cout << endl;
	
	sum = sumNumber(ranNum);
	cout << "Total sum: "<<sum<< endl;

	int size = sizeof(ranNum) / sizeof(int); //ranNum의 크기가 40 이고 int가 4byte이므로 나눠주면 size는 10이 된다.
	avg = calMean(sum, size);
	cout << "Average: " << avg << endl;
}

void genRanNumber(float* num)
{
	float random;
	srand(time(NULL));//시간 초기화
	for (int i = 0; i < 10; i++)
	{
		random =(rand() % 101/10.0); //소수점 첫째 자리까지 구하기 위해 0.1을 곱함 
		* (num + i) = random;	//주소값에 i를 더해주면서 random을 배열에 저장
	}
}
float sumNumber(float* num)
{
	float total = 0;
	for (int i = 0; i < 10; i++)
	{
		total = total + *(num+i); // num+i 주소에 있는 값들을 *로 추출하면서 더해줌
		
	}
	return total;
}

float calMean(float num, int cnt)
{
	float avg;
	avg = num / cnt; 
	return avg;
}