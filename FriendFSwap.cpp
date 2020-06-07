// C++ Program to swap two numbers using friend function 
#include <iostream> 
using namespace std; 

class Swap
 { 
	int a, b; 

public: 
	Swap(int a, int b) 
	{ 
		this->a = a; 
		this->b = b; 
	} 
	friend void swap(Swap&); 
}; 
void swap(Swap& s1) 
{ 
	cout << "\nBefore Swapping: " << s1.a << " " << s1.b; 

	// Swap operations with Swap Class variables 

	 s1.b = s1.a + s1.b;
         s1.a = s1.b - s1.a;
         s1.b = s1.b - s1.a;
	cout << "\nAfter Swapping: " << s1.a << " " << s1.b; 
}  
int main() 
{  
	Swap s(4, 6); 
	swap(s); 
	return 0; 
} 
