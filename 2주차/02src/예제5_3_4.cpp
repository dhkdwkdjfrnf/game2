#include <stdio.h>
#include <math.h>
#include <windows.h>
int calc_frequency(int octave, int inx);
int main(void)
{
	int index[]={7,7,9,9,7,7,4,7,7,4,4,2,7,7,9,9,7,7,4,7,4,2,4,0};
	int freq[8];
	int i;
	for(i=0;i<24;i++)
		freq[i]=calc_frequency(4, index[i]);
	for(i=0;i<=24;i++)
		Beep(freq[i],500);
	Sleep(1000);  //음간의 지연시간 1초
	return 0;
}


int calc_frequency(int octave, int inx)
{
	double do_scale=32.7032;
	double ratio=pow(2., 1/12.), temp;
	int i;
	temp=do_scale*pow(2, octave-1);
	for(i=0;i<inx;i++)
	{
		temp=(int)(temp+0.5);
		temp*=ratio;
	}
	return (int) temp;
}

