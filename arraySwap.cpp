#include <iostream>
using namespace std;
// newList is the reversal of list 
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void fswap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void reverse(int * list, int *newList, int size)
{
	 for (int i = 0, j = size - 1; i < size; i++, j--)
	 {
		newList[j] = list[i];
	 }
}

void printArray(int *list, int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}
void doubleIt(int x, int* p)
{
	*p = 2 * x;
}

int main()
{
	//double
	int c = 16;
	doubleIt(9, &c); // passing the address of the integer and reading it in through a point variable *p in doubleIt()
	cout << c << endl;


	//test swap;
	int a = 2, b = 3;
	cout << "before calling function a= " << a << " b= " << b<<endl;
	fswap(a, b);
	cout << "after calling function fswap a= " << a << " b= " << b << endl;
	swap(a, b);
	cout << "after calling function swap using reference a= " << a << " b= " << b << endl;
	swap(&a, &b);
	cout << "after calling function swap using pointer a= " << a << " b= " << b<<endl;
	
	//reverse array
	const int SIZE = 6; 
	int list[] = { 1, 2, 3, 4, 5, 6 };
	int newList[SIZE];
    reverse(list, newList, SIZE);
	cout << "The original array: ";
	printArray(list, SIZE);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList, SIZE);
	cout << endl;
	return 0;
}
