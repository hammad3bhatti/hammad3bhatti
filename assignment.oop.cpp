#include <iostream>
using namespace std;
class cricketer{
	protected:
		string name;
		int shirt_no;
		string dob;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int start_year;
		public:
		cricketer ()
		{
			cout<<"Cricketer countructor called "<<endl;
		}
		cricketer (string name, int shirt_no, string dob, int odi_rating, int test_rating, int t20_rating, int start_year)
		{
			this->name=name;
			this->shirt_no=shirt_no;
			this->dob=dob;
			this->odi_rating=odi_rating;
			this->test_rating=test_rating;
			this->t20_rating=t20_rating;
			this->start_year=start_year;
		}
		int calculate_age()
		{
			return 0;
		}
		int calculate_experience()
		{
			return 0;
		}
		void changeODI_rating()
		{
			
		}
		void changeTest_rating()
		{
			
		}
		void changeT20_rating()
		{
			
		}
		~cricketer()
		{
			cout<<"Cricketer Destructor Called "<<endl;
		}
		
};
class batsman : public cricketer
{
	private:
	string bat_type;
	int total_runs;
	int match_played;
	int best_score;
	public:
		batsman()
		{
			cout<<"Batsman Constructor Called "<<endl;
		}		
		batsman(string bat_type, int total_runs, int match_played, int best_score):cricketer(name, shirt_no, dob, odi_rating, test_rating, t20_rating, start_year )
		{
			this->bat_type=bat_type;
			this->total_runs=total_runs;
			this->match_played=match_played;
			this->best_score=best_score;
		}
		int calculateBat_Avg()
		{
			return 0;
		}
		void update_matches()
		{
			
		}
		void update_runs()
		{
			
		}
		~batsman()
		{
			cout<<"Batsman Destructor Called ";
		}
};
class bowler : public cricketer
{
	private:
		string bal_type;
		int total_wickets;
		int match_played;
	public:
		bowler()
		{
			cout<<"Bowler Constructor called ";
		}
	  	bowler(string bal_type, int total_wickets, int match_played):cricketer(name, shirt_no, dob, odi_rating, test_rating, t20_rating, start_year )
	  	{
	  		this->bal_type=bal_type;
	  		this->total_wickets=total_wickets;
	  		this->match_played=match_played;
		}
		int calculateBowl_Avg()
		{
			return 0;
		}
		void update_matches()
		{
			
		}
		void updated_wickets()
		{
			
		}
		~ bowler()
		{
			cout<<"Bowler Destructor called ";
		}
	
};
class all_rounder:public batsman,bowler
{
	public:
		all_rounder()
		{
			cout<<"All_rounder constructor Called ";
		}
		~all_rounder()
		{
			cout<<"All_rounder Destructor Called ";
		}
};
int main()
{
	cricketer c1;
	batsman b1	
}