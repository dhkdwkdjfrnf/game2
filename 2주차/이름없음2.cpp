#include<stdio.h>

int main(void)
{
	int num[5];
	int x,temp;
	for(int i = 0; i < 5; i++){
		scanf("%d",&x);
		num[i]=x;
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5-i-1; j++){
			if(num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	
	for(int i=0; i<5; i++){
		printf("%d ",num[i]);
	}
}
