// C++ implementation of the above approach 

#include <bits/stdc++.h> 
using namespace std; 

const int M = 3; 
const int N = 3; 
void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

// Function to reverse 
// the given 2D arr[][] 
void reverseArray(int arr[M][N]) 
{  
	for (int i = 0; i < M; i++) { 
		int start = 0; 
		int end = N - 1; 

		// Till start < end, swap the element 
		// at start and end index 
		while (start < end) { 
			swap(&arr[i][start], 
				&arr[i][end]); 

			// Increment start and decrement 
			// end for next pair of swapping 
			start++; 
			end--; 
		} 
	} 

	for (int i = 0; i < M; i++) { 
		for (int j = 0; j < N; j++) { 
			cout << arr[i][j] << ' '; 
		} 
		cout << endl; 
	} 
} 
int main() 
{ 
	int arr[][3] = { { 1, 2, 3 }, 
					{ 4, 5, 6 }, 
					{ 7, 8, 9 } }; 

	// Function call 
	reverseArray(arr); 
	return 0; 
} 
