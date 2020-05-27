#include <iostream.h>
#include <conio.h>
#include <stdio.h>
int const n=10;
void BubbleSort(int*, int);
int main()
3
{
 int i;
 int x[n];
 for(i=0; i<n; i++){
 cout<< "x[" << i << "]= ";
 cin >> x[i];
 }
 BubbleSort(x, n);
 cout << endl;
 for(i=0; i<n; i++)
 printf("x[%d]=%d\n", i, x[i]);
 getch();
 return 0;
}
void BubbleSort(int x[], int n)
{
 int hold, j, pass;

 for(pass=0; pass<n-1; pass++){
 for(j=0; j<n-pass-1; j++)
 if(x[j]>x[j+1]){
 hold=x[j];
 x[j]=x[j+1];
 x[j+1]=hold;
 }
 }
}