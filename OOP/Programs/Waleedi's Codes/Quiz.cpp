#include<iostream>
using namespace std;
class A{
	private:
		int a;
		public:
			A(int z){a=z;}
			void show(){
				cout<<a<<endl;}};
class B:public A{
	private:
		int b;
		public:
			B(int x , int m):A(m){b=x;}
			void show(){
				A::show();cout<<b<<endl;}};
class C:public B{
	private:
		int c;
		public:
			C(int y,int f , int h):B(f,h){c=y;}
			void show(){B::show();cout<<c;}};
int main(){
	C ob(12,23,34);
	ob.show();}
