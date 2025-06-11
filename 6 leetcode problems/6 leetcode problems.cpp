
#define two
#include<iostream>
using namespace std;


//is year leap.
//for year to be a leap,it must be divided by 400,if not then must be divided by 4 n at same time,not by 100.
#ifdef two
int main() {
    int n;
    cout << "enter year:";
    cin >> n;
    if (n % 400 == 0)
    {
        cout << "year is a leep year";
    }
    else if(n%4==0 &&n%100!=0){
        cout << "year is  a leep year";
    }
    else {
        cout << "year is not a leep year";
    }
}
#endif // two

#ifdef three
//code to reverse numbers.
int main() {
    int n;
    int ans = 0;
    cout << "enter the no to reverse:";
    cin >> n;

    while (n != 0)      //jb tk values 'khatam(0)' na ho jyn i.e n/10 becomes = to zero.
    {
        int rem = n % 10;   //deletes last value.
        n /= 10;            //contain all values except last.
        ans = ans * 10 + rem;  //formula to reverse on each iteration.
    }
    cout << "reverse of " << n << "is:" << ans;
}
//dry run it n remember that 1%10(rem of 1/10) is 1 ,not zero.
#endif // three


#ifdef four
//to handle big numbers,bcs sometimes reversing can require more space than required.
int main() {
    long long int n;  // Use long long to handle larger numbers
    cout << "Enter number to reverse: ";
    cin >> n;
    long long int ans = 0;
    while (n != 0) {
        int rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    cout << "Answer is: " << ans;
}

#endif // four

#ifdef five
//is given number power of 2 or not?
//it is not a powr of 2 if its not divisible to 2 or its a negative number,else it is a power of 2.
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    if (n < 1 )
    {
        cout << "number is not a power of 2";
        return 1;
    }
    else if (n % 2 == 1) {
            cout << "number is not a power of 2 ";
            return 1;
        }
    else {
        cout << "number is a power of 2";
    }
}
#endif // five

//or

#ifdef six
//is given number power of 2 or not?
int main() {
    int n;
    cout << "enter number";
    cin >> n;

    if (n < 1 || n % 2 == 1)
    {
        cout << "number is not a power of 2";
        return 1;
    }

    else {
        cout << "number is a power of 2";
    }
}
#endif // six

#ifdef seven
//to check wheter no is palindrome or not.
int main() {
    int n;
    int ans = 0;
    cout << "enter number  to be checeked:";
    cin >> n;
   int  temp = n;       //we gonna store initial value of n to temp bcs till line 146,n will become zero.

    while (n != 0) {
        int rem = n % 10;
        n = n / 10;
        ans = ans * 10 + rem;
    }
    cout << "reverse of number is:" << ans << endl;
    if (temp == ans) //line 146
    {
        cout << "so number is palindrome" << endl;
    }
    else {
        cout << "so number is not a palindrome" << endl;
    }
}
#endif // seven

