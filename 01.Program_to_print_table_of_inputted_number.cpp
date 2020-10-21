//////////////////////////////////////////////////////////
///  01.Write Program to print table of inputted number.
///  Input :- 5
///  Output :-
/*               5
			     10
			     15
			     20
			     25
			     30
			     35
			     40
			     45
			     50
*/
///
/////////////////////////////////////////////////////////


#include <iostream>
#include <conio.h>
using namespace std;

class TablePrint
{
	    private:
	    	    int iNo;

	    public:
	    	   TablePrint()
	    	   {
	    	   	   this->iNo = 0;
	    	   }

	    	   void GetInfo()
	    	   {
	    	   	   cout<<"\n Enter Number to Print its Table =>";
	    	   	   cin>>iNo;
	    	   }

	    	   void Display()
	    	   {
	    	   	   int i = 0;

	    	   	   for(i = 1;i <= 10;i++)
	    	   	   {
	    	   	   	    cout<<iNo<<" * "<<i<<" = "<<iNo*i<<endl;
	    	   	   } 
	    	   }

};

int main()
{
	TablePrint TPObj;

	cout<<"\n====================***Table***====================== \n\n"<<endl;

	TPObj.GetInfo();
	TPObj.Display();

	cout<<"\n====================***Table***====================== \n\n"<<endl;


    cout<<"\n\n\t Thank You.....!!!"<<endl;

	getch();
	return 0;
}