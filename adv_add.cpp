#include<iostream>


using namespace std;

class Pizza{
		int bacon;
		string cheese;
		float pork;
	public:
	    Pizza(int x,string y, float z){
	    	setA(x);
	    	setB(y);
	    	setC(z);
		} 	
		
		void setA(int a)
		{
			bacon=a;
		}
		
		void setB(string b)
		{
			cheese=b;
		}
		
		void setC(float c)
		{
			pork=c;
		}
		
		int getA(){
			return bacon;
		}

		string getB(){
			return cheese;
		}

		float getC(){
			return pork;
		}
};

int main(){

  Pizza pi(2, "pepper", 4.21);
  
  cout <<pi.getA()<<" "<<pi.getB()<<" "<<pi.getC();


return(0);
}
