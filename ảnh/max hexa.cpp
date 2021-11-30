// Max Hexa
#include<iostream>
#include<string.h>
using namespace std;
//convert hexadecimal to decimal
int convert(char num[]) {
   int len = strlen(num);
   int base = 1;
   int temp = 0;
   for (int i=len-1; i>=0; i--) {
      if (num[i]>='0' && num[i]<='9') {
         temp += (num[i] - 48)*base;
         base = base * 16;
      }
      else if (num[i]>='A' && num[i]<='F') {
         temp += (num[i] - 55)*base;
         base = base*16;
      }
   }
   return temp;
}
int main() {
   char num[8];
   cin>> num;
   cout<<num<<" after converting to deciaml becomes : "<<convert(num)<<endl;
	char num1[8];
   cin>> num1;
   cout<<num1<<" after converting to deciaml becomes : "<<convert(num1)<<endl;
   char num2[8];
   cin>> num2;
   cout<<num2<<" after converting to deciaml becomes : "<<convert(num2)<<endl;
   int a=convert(num);
   int b=convert(num1);
   int c=convert(num2);
   cout <<a<<"\t"<<b<<"\t"<<"\t"<<c<<"\n";
   int max=a;
   if(b > max){
        max = b;
    }
 
    else if(c > max){
        max = c;
    }
    else 
    cout<<max<<endl;
    if(max==a)
    	cout<<num<<" la so lon nhat";
    if(max==b)
    	cout<<num1<<" la so lon nhat";
    if(max==c)
    	cout<<num2<<" la so lon nhat";
   return 0;
}
