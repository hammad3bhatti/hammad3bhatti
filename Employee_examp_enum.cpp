#include<iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};	
enum week_day {monday=1,tuesday,wednesday,thursday,friday,saturday,sunday};
class dates {	
	private:
		int day, month, year;
		week_day d;
	public:
		void getDate(){
            char temp;
            int day_num;
	        cout << "Enter employee date of joining in (DD/MM/YYYY) format: ";
	        cin >> day >> temp >> month >> temp >>year;
	           cout<<"Enter the day of joining : 1=Monday 2=Tuesday 3=Wednesday 4=Thursday 5=Friday 6=Saturday 7=Sunday :"<<endl;
	           cin>>day_num;
 
 switch(day_num)
 {
 	case 1 : d=monday; break;
 	case 2 : d=tuesday; break;
 	case 3 : d=wednesday; break;
	case 4 : d=thursday; break;
	case 5 : d=friday; break;
	case 6 : d=saturday; break;
	case 7 : d=sunday; break;
	default:
	  break;  
 }
        }	
        void showDate(){
            cout << "\nEmployee date of joining: " << day << "/" << month << "/" <<year;
        }
};
class adress 
{
	int house_no;
	string area;
	string city;
	public:
		void set_adr()
		{
			cout<<"Adress of Employee"<<endl;
			cout<<"House no : " ;
			cin>>house_no;
			cout<<"Area : " ;
			cin>>area;
			cout<<"City : ";
			cin>>city;
		}
		void get_adr()
		{
			cout<<"Employee Adress : "<<"House no "<<house_no<<endl<<"Area "<<area<<endl<<"City "<<endl;
		}
};


class employee {
	private:
		int emp_num;
        float emp_comp;
        dates date1;
        etype emp;
        week_day d;
	public:
		void setData();
        void dispData();
};

void employee::setData(){
    char type;
    cout << "\nEnter employee Number: ";
	cin >> emp_num;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
    date1.getDate();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type){
        case 'l': emp = laborer; break;
        case 's': emp = secretary; break;
        case 'm': emp = manager; break;
        case 'a': emp = accountant; break;
        case 'e': emp = executive; break;
        case 'r': emp = researcher; break;
        default:
            break;
    }
 
}
 

void employee::dispData(){
    cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
    date1.showDate();
    cout << endl;
    switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
    switch(d)
	{
    	case monday:
    		cout<<"Joining date is Monday ";
    	break;
    	
		case tuesday:
			cout<<"Joining date is Tuesday ";
		break;
		
		case wednesday:
		 cout<<"Joining date is Wednesday ";
		break;
		
		case thursday:
		 cout<<"Joining date is Thursday ";
		break;
		
		case friday:
		cout<<"Joining date is Friday ";
		break;
		
		default:
		cout<<"Invalid input";
		break;  	
	}
}
    
int main(){
	
    employee emp[10];
    for(int i=0;i<=9;i++)
	{
		cout <<"\nEnter first employee details"<<i+1": \n";
	    emp[i].setData();	
	}
	for(int i=0;i<=9;i++)
	{
		cout <<"\nEnter first employee details"<<i+1<<": \n";
	    emp[i].getData();	
	}
	
	return 0;
}
