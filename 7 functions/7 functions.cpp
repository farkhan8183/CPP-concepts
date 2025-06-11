#define test
#include<iostream>
using namespace std;

#ifdef one

int sum(int a, int b) {		//function returning value of int type,here has 2 paramters read as,sum of __? of a and b.
	int add = a + b;
	cout << "sum is:" << add;
	return add;
}
void show() {
	cout <<endl<< "we are learnig about functions in cpp n this is function returning no values n just displaying.";
}
int main() {
	int n, p;
	cin >> n >> p;
	sum(n, p);	//function calling: n and p are passed as arguments to sum function.
	show();
}
#endif // one

#ifdef two

int prime(int n) {
	if (n<2)
	{
		cout << "not a prime no.";
			return 1;
	}
	for (int i = 2;i < n;i++) {
		if (n % i == 0) {
			cout << "no is not prime";
			return 1;
		}
	}
	cout << "no is prime.";
}
int fact(int n) {
	int ans = 1;
	for (int i=1;i <= n;i++) {
		ans = ans * i;
	}
	cout<<"factorial is:"<<ans;
	return 1;
}
int main()
{
	int num;
	cout << "enter number for prime:";
	cin >> num;
	prime(num);
	cout << endl;
	fact(num);
}

#endif // two

//default parameter:
#ifdef three
int add(int n=5 ) {	//default paramter,which ll run if nothing is passed in calling
	int ans = n + n;
	cout << ans;
	return 1;
}
int main() {
	int num;
	cin >> num;
	add();	
}
#endif //three



// examples for pass by refernece and pass by value(normal)

#ifdef four
void inc(int &i) {	//we need to pass by reference or else it ll only inc i but not a.
	i++;			//aslo we used void here bcs we r simply incrementing num n not expecting any integer or truth value(bool)in return.
 }

int main() {
	int a;
	cout << "enter value to increment:";
	cin >> a;
	inc(a);
	cout << a;
}
#endif // four



#ifdef five

void swap(int& a, int& b) {	//pass by ref n also used void cos only swapping not expecting any int or bool in return.
	int c;
	c = a;
	a = b;
	b = c;

}

int main() {
	int a, b;
	cout << "enter numbers to swap:";
	cin >> a >> b;
	swap(a,b);
	cout << "swapped numbers are:" << a << b;
}
#endif // five

//function overloading is a property that tackles the functions having same names but differnet parameters(number n types)
//so functions can have same names but should have differnet paramters.

//some functions r inbuilt(non user defined) like swap(a,b) in cpp n can be used for calculations.


#ifdef test


int sum(int a,int c) {
	int sum = a + c;
	return sum;
}

int main() {
	int n,b; 
	cout << "enter num:";
	cin >> n;
	cin >> b;
	
	cout << "sum is" << sum(n, b);
}
#endif // test
