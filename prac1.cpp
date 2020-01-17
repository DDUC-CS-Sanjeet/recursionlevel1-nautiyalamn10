#include<iostream>
using namespace std;
void power(int n,int m);
int pow(int n, int m){
	if(m==0)
	return 1;
	else 
	return(n*pow(n,m-1));
}
void factorial(int no){
	int fact=1;
	cout<<"\nFactorial of number";
	for(int i=no; i>0; i--)
	fact*=i;
	cout<<" "<<no<<"! is = "<<fact;
	return;
}
int fact(int no){
	if(no<=1)
	return 1;
	else 
	return no*fact(no-1);
}
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int gcd1(int a, int b){
  
    
    
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;



}
void fibbonacci(int num){
	int s1=0,s2=1,s3=0;
	cout<<s1<<" "<<s2<<" ";
	for(int i =0; i<num-2; i++){
		s3=s1+s2;
		cout<<s3<<" ";
		s1=s2;
		s2=s3;
	}
	return;
}
void fibo(int s1, int s2,int num,int count){
	int s3=0;
	count++;
	
	s3=s1+s2;
	cout<<s3<<" ";
	s1=s2;
	s2=s3;
	if(num<=2||count>num)
	return;
	else 
	return fibo(s1,s2,num,count);
}
int main(){
	int n,m,no,num,a,b;
	int count=3,p=1;
	cout<<"Enter your base number = ";
	cin>>n;
	cout<<"Enter your power = ";
	cin>>m;
    cout<<"\nPower function using iteration = ";
	 power(n,m);
	cout<<"\nPower function using recursion  = "<<pow(n,m);
	cout<<"\nEnter your number to find its factorial = ";
	cin>>no;
	cout<<"\nFactorial using iteration = ";
	factorial(no);
	cout<<"\nFactorial using recursion = "<<fact(no)<<endl;
	cout<<"\nEnter your numbers to get GCD = ";
	cin>>a>>b;
	cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   int result = gcd1(a,b);
   cout<<endl<<"by using while loop GCD is = "<<result<<endl;
   cout<<"Enter number of terms you want to print in fibo = ";
	cin>>num;
	
	int s1=0,s2=1;
	count=3;
	cout<<s1<<" "<<s2<<" ";
	fibo(s1,s2,num,count);
	cout<<"\nFibonacci iterative series = ";
	fibbonacci( num);
	return 0;
}
void power(int n,int m){
	int p=1;
	cout<<"n^m = "<<n<<"^"<<m<<" = ";
	for(int i=1;i<=m;i++)
	p*=n;
	cout<<p<<endl;
	return;
}
