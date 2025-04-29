#include<iostream>
using namespace std;
template <typename T>
T findMax(T a,T b){
	return(a>b)?a:b;
}


template <typename T>
class calculator{
	T a,b;
	public:
		calculator(T x=0,T y=0):a(x),b(y){}
		T add(){
			return a+b;
		}
		T subt(){
			return a-b;
		}
		T mult(){
			return a*b;
		}
		T div(){
			try{
				if(b==0)
				  throw b;
				float r=a/b;
			}
			catch(float e){
				cout<<"\n Infinity"<<endl;
			}
		}
		void display(){
			cout<<"\n Integet opration"<<endl;
		}
};


int main(){
	cout<<"Max of 4 and 5 is"<<findMax<int>(4,5)<<endl;
	calculator<int> c1(4,5);
	cout<<"interger opration"<<endl;
	cout<<"4+5="<<c1.add()<<endl;
	cout<<"4-5="<<c1.subt()<<endl;
	cout<<"4*5="<<c1.mult()<<endl;
	cout<<"4/5="<<c1.div()<<endl;
	cout<<"------------------------"<<endl;
	
	
	calculator<float> c2(0.2,0.8);
	cout<<"float opration"<<endl;
	cout<<"0.2+0.8="<<c1.add()<<endl;
	cout<<"0.2-0.8="<<c1.subt()<<endl;
	cout<<"0.8*0.2="<<c1.mult()<<endl;
	cout<<"0.2/0.8="<<c1.div()<<endl;
	
	
	
	cout<<"------------------------"<<endl;
	
	calculator<double> c3(9.18,27.2);
	cout<<"double opration"<<endl;
	cout<<"9.18+27.2="<<c1.add()<<endl;
	cout<<"9.18-27.2="<<c1.subt()<<endl;
	cout<<"9.18*27.2="<<c1.mult()<<endl;
	cout<<"9.18/27.2="<<c1.div()<<endl;
	
	
}
