#include<iostream>
#define test
using namespace std;


#ifdef one
//convert A to a
//lets do code via funcitons
char convert(char a) {
	char ans = a - 'a' + 'A';//formula:firstly find differnce of char with a n then add to A.	remember:A=97,a=65
	return ans;
}
int main() {
	char al;
	cout << "enter alphabet:";
	cin >> al;
	cout<<convert(al);
}
#endif // one



				/////////////////////////////////////////////////////////////////////////////
					//333333333333333333333333333333333333333333333333333333333333333
#ifdef three
//can rectangle be formed by given 4 numbers.
//rectangle is one whose 2 adjacent sides are equal.
void rect(int a,int  b, int c,int  d) {
	if (a == b && c == d || a == c && b == d || b == c && a == d) {
		cout << "rectangle can be formed!";
	}
	else {
		cout << "rectangle cant be formed!.";
	}
}
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	rect(a, b, c, d);
}
#endif // three
	

