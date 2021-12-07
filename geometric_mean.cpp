#include<conio.h>
#include<iostream.h>
#include<math.h>
void main(){
	
	// Clearning previous screen
	clrscr();
	
	//Declaration of x and n
	int n, x[50];
	
	//entering value of n
	cout<<"How many elements are there : ";
	cin>>n;
	
	//Entering value of x
	cout<<"Enter elements : ";
	int i;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	
	//Calculating ΣLogx
	float sum_logx=0;
	for(i=0;i<n;i++){
		sum_logx = sum_logx + log10(x[i]);
	}
	
	//Calculating Geomatric mean
	float gm = pow(10,sum_logx/n);
	cout<<"Mean is "<<gm;
	
	getch();
	
}
