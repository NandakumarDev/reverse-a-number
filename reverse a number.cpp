#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0){
		n=n%10;
		sum+= n;
		n=n/10;
	}
	printf("The reversed number is %d",sum);
	return 0;
	
}
