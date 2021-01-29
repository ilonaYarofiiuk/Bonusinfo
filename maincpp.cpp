#include <iostream>

using namespace std;

void print(int a);
void print(float a);
void print(double a);
void print(char a);
void print(bool p);
void print(char* str);

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int fib(int n) {
	if (n <= 1)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
int main() {
	for (int i = 1; i <= 20; i++){
		cout << fib(i) << " ";
	}	

	cout << fact(4);
	print(1); // int func
	print(10.0); // double func
	print(20.0f); // float
	print('A'); // char
	print(false); //bool
	char str[] = "It rains today"; 
	print(str); // char *str

	return 0;
}

void print(int a)
{
	cout << "This cout from print(int a) func, a = " << a << endl;
}

void print(float a)
{
	cout << "This cout from print(float a) func, a = " << a << endl;
}

void print(double a)
{
	cout << "This cout from print(double a) func, a = " << a << endl;
}

void print(char a)
{
	cout << "This cout from print(char a) func, a = " << a << endl;
}

void print(bool p)
{
	cout << "This cout from print(bool p) func, p = " << p << endl;
}

void print(char* str)
{
	cout << "This cout from print(char *str) func, str = " << str << endl;
}
