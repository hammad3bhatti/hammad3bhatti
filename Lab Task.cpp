#include<iostream>
using namespace std;
class cube
{
	private:
		double lenght;
		double width;
		double height;
	public:
		cube()
		{
			cout<<"Default constructor"<<endl;
		}
		cube(double lenght, double width, double height)
		{
			this->lenght=lenght;
			this->width=width;
			this->height=height;
		}
		void display()
		{
			cout<<"Lenght of Cube: "<<lenght<<endl;
			cout<<"Width of Cube: "<<width<<endl;
			cout<<"Height of Cube: "<<height<<endl;
			
		}
		cube operator + (cube ca)
		{
			
			double result1=lenght+ca.lenght;
			double result2=width+ca.width;
			double result3=height+ca.height;
			cube result(result1, result2, result3);
			return result;
		}
		cube operator - (cube cb)
		{
		    double result1=lenght-cb.lenght;
			double result2=width-cb.width;
			double result3=height-cb.height;
			cube result(result1, result2, result3);
			return result;
		}
			cube operator * (cube cc)
		{
			double result1=lenght*cc.lenght;
			double result2=width*cc.width;
			double result3=height*cc.height;
			cube result(result1, result2, result3);
			return result;
			
		}
		
			cube operator / (cube cd)
		{
			double result1=lenght/cd.lenght;
			double result2=width/cd.width;
			double result3=height/cd.height;
			cube result(result1, result2, result3);
			return result;
		}
			void operator = (cube ce)
		{
			lenght=ce.lenght;
			width=ce.width;
			height=ce.height;
		}
		bool operator == (cube cf)
		{
			if(lenght==cf.lenght && width==cf.width && height==cf.height){
			
			return 1;
		}
			else 
			return 0;
		}
				
};
int main()
{
	cube cub1(1,2,3),cub2(4,5,6),Result;
	Result=cub1+cub2;
	Result.display();
	Result=cub1-cub2;
	Result.display();
	Result=cub1*cub2;
	Result.display();
	Result=cub1/cub2;
	Result.display();
	bool res;
	res= cub1==cub2;
	cout<<res;

	return 0;
	
}
