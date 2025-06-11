#define test
#include<iostream>
using namespace std;

//to print 100 to 200
#ifdef one
int main() {
	for (int i = 100;i <= 200;i++)
		cout << i << " ";
}
#endif // one

//to print a to z
#ifdef two
int main() {
	for (char name = 'a';name <= 'z';name++)
		cout << name << endl;
}
#endif // two

//to print 100 to 1(reverse)
#ifdef three
int main() {
	for (int first = 100; first >= 1;first--)
		cout << first << endl;
}
#endif // three

//to print 1 to 100 with difference=3:
#ifdef four
int main() {
	for (int i = 1;i <= 100;i = i + 3)
		cout << i << " ";
}
#endif // four
// multiplication table
#ifdef five
int main() {
	int a = 5;
	for (int b = 1;b <= 10;b++) {
		int result = a * b;
		cout << a<< "*" << b << "=" << result << endl;
	}
}
#endif // five

//power of numbers from 1 to 20
#ifdef six
int main() {
	for (int a =1;a<=20;a++)
	{
		cout << a * a << " ";
	}
}
#endif // six

//sum of n natural numbers.
#ifdef seven
int main() {
	int n = 5;
	int sum = 0;
	for (int i = 1;i <= n;i++){
		sum = sum + i;
	}
	cout << "sum of n numbers is:" << sum;
}
#endif // seven

//sum of square of n natural number:
#ifdef eight
int main() {
	int n = 5;
	int sum = 0;
	for (int i = 1;i <= n;i++) {
		int square = i * i;
		sum = sum + square;
	}
	cout << "sum of square of first five number is:" << sum;
}
#endif // eight

//check whehther number is prime or not:
// for a no to be prime, it must:
	//greater than 2
	//should not be divisible by any value till it,after 2.(except by itself)
#ifdef nine
int main() {
	int n;
	cout << "enter n:";
	cin >> n;
	if (n < 2)
	{
		cout << "not a prime number";
		return 0; //dont proceed anythin more in this main funciton.
	}
	for (int i = 2; i < n;i++) {
		if (n % i == 0) {
			cout << "no is not prime";
			return 0;
		}
}
	cout << n << "is prime";

}
#endif // nine

#ifdef test
int main() {
	int a;
	cout << "enter num";
	cin >> a;

	if (a < 2) {
		cout << "not a prime number.";
		return 0;
	}
	for (int i = 2;i < a;i++)
	{
		 if (a % i == 0) {
			cout << "not prime";
			return 0;
		}
	}
	cout << "number is prime";


}
#endif // test



	 