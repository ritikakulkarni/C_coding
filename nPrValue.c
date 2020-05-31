#include<stdio.h> 
#include<conio.h>  
int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*fact(n-1); 
} 
  
int nPr(int n, int r) 
{ 
    return fact(n)/fact(n-r); 
} 
  
void main() 
{ 
    int n, r; 
    printf("Enter the value n\n"); 
    scanf("%d", &n); 
  
    printf("Enter the value r\n"); 
    scanf("%d", &r); 
  
    printf("%dP%d is %d", n, r, nPr(n, r)); 
  
    getch(); 
}