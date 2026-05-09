#include <iostream>

using namespace std ;

class Time_converter 
{
	private :
	    int hours , minitues , seconds ;
	
	public :
		
		void setSecond_To_Time(int totalSeconds)
		{
			hours = totalSeconds/3600 ;
			minitues = (totalSeconds % 3600) / 60 ;
			seconds = totalSeconds / 60 ;
 	    
		 
		cout << "HH:MM:SS =>" 
	         <<  hours << ":" << minitues << ":" << seconds << endl ;
 		}
 		
	         
	    
		void setTime_To_Second(int h , int m , int s)
	    {
	       int totalSeconds = (h * 3600) + (m * 60) + s ;
		   
		   cout << "Total Seconds : " << totalSeconds << endl;
		}		
};


int main ()
{
    int choice ;
    
	Time_converter obj	;
	
	cout << "Wel-come to the Time-Converter Area ..." << endl << endl << "Please select your Choice :-" << endl << endl ;
	cout << "1. Convert Total-Seconds to HH:MM:SS" << endl ;
	cout << "2. Convert HH:MM:SS to Total-Seconds" << endl << endl ;
	cout << "Enter your Choice :- " ;
	cin >> choice ;
	
	if(choice == 1)
	{
		int totalSeconds ;
		cout << "Enter total-seconds : " ;
		cin >> totalSeconds ;
		obj.setSecond_To_Time(totalSeconds);
	}
	else if (choice == 2)
	{
		int h , m , s ;
		cout << "Enter hours : " ;
		cin >> h ;
		cout << "Enter minitues : " ;
		cin >> m ;
		cout << "Enter seconds : " ;
		cin >> s ;
		obj.setTime_To_Second(h , m , s);
	}
	else
	{
		cout << "Invalid Choice...!" ;
	}
	
	return 0 ;
	
}