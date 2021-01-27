#include<iostream>
#include<conio.h>
#include<iomanip>
#include<climits>
#include<cfloat>

using namespace std;

int main(){
	
	cout<<"bool : "<<sizeof(bool)*8<<" bits : "<<endl<<endl;

	cout<<"char : "<<sizeof(char)*8<<" bits : "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
	cout<<"unsigned char : "<<sizeof(unsigned char)*8<<" bits : 0 to "<<UCHAR_MAX<<endl;
	cout<<"wchar_t : "<<sizeof(wchar_t)*8<<" bits : "<<WCHAR_MIN<<" to "<<WCHAR_MAX<<endl<<endl;
	//cout<<"char16_t : "<<sizeof(char16_t)*8<<" bits : "<<endl;
	//cout<<"char32_t : "<<sizeof(char32_t)*8<<" bits : "<<endl<<endl;


	cout<<"short : "<<sizeof(short)*8<<" bits : "<<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
	cout<<"unsigned short : "<<sizeof(unsigned short)*8<<" bits : "<<0<<" to "<<USHRT_MAX<<endl<<endl;

	cout<<"int : "<<sizeof(signed int)*8<<" bits : "<<INT_MIN<<" to "<<INT_MAX<<endl;
	cout<<"unsigned int : "<<sizeof(unsigned int)*8<<" bits : "<<0<<" to "<<UINT_MAX<<endl<<endl;
		
	cout<<"long : "<<sizeof(long)*8<<" bits : "<<LONG_MIN<<" to "<<LONG_MAX<<endl;
	cout<<"unsigned long : "<<sizeof(unsigned long)*8<<" bits : "<<0<<" to "<<ULONG_MAX<<endl<<endl;

	cout<<"long long : "<<sizeof(long long)*8<<" bits : "<<LLONG_MIN<<" to "<<LLONG_MAX<<endl;
	cout<<"unsigned long long : "<<sizeof(unsigned long long)*8<<" bits : "<<0<<" to "<<ULLONG_MAX<<endl<<endl;
	
	cout<<"float : "<<sizeof(float)*8<<" bits : "<<FLT_MIN<<" to "<<FLT_MAX<<endl;
	cout<<"double : "<<sizeof(double)*8<<" bits : "<<DBL_MIN<<" to "<<DBL_MAX<<endl;
	cout<<"long double : "<<sizeof(long double)*8<<" bits : "<<LDBL_MIN<<" to "<<LDBL_MAX<<endl;
	
	
	
	_getch();
}
