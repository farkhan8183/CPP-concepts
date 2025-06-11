#define four
#include<iostream>
using namespace std;

//pointers:
/*these are used to store adress of variables.


*/
#ifdef one

int main() {
	int a = 5;
	int* ptr;
	ptr = &a;	//referncing,storing variable a adress in ptr(&)

	
	cout << ptr << endl;	//adress of a
	cout << *ptr << endl;	//dereferncing, printing value stored at adress of pointer(*).>is adress py jo variable ha uski value

	
}
#endif // one

//arrays n pointers,relation:

#ifdef two
{
	int main() {
		int arr = { 3,2,5,2,5,25 };
	//we can access this array elememnts using pointers.
		int* ptr = arr; //store adreess of array in pointer ptr

		for (int i = 0;i < 5;i++) {

			cout << "value at" << i << "=" << *(ptr + i);	//dereferncing
/*here:
arr[i]      ===   *(ptr + i)
arr[1]     ===   *(ptr + 1)
They are the same thing!
*/
	}

}
#endif //two

			//pointers can be made for pointers too using **.i.e for ptr,	int** ptr=&ptr;


#ifdef three

//passing pointers to functions.
	// when we are passing variables to functions, only there values are passed, not the actal variables or there adresses.
	//thats why if we try to do the below code without passing by refernce,i.e pass by value it wont increment the orignal value 
//	stored in orignal variable.
	
	//pass by value
	//the passed value was incrememnted but orignal value of a remains same.
	void inc(int b) {
		
		b++;
		cout << b << endl;	
	}

	int main()
	{
		int a = 2;
		inc(a);
		cout << a;
	}

	
	

#endif // three
	//solution:pass by refernce:
#ifdef four
	void inc(int* b) {	//b here is a pointer that stores adress of a,not just value

		(*b)++;		//b is  pointer,*b is value at that pointer..
		cout << *b << endl;
	}

	int main()
	{
		int a = 2;
		inc(&a);
		cout << a;
	}
#endif // four
