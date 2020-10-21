//////////////////////////////////////////////////////////
///  02.Write program to print table of inputted number in reverse order
///  Input :- 5
///  Output :-
/*               50
				 45
				 40
				 35
				 30
				 25
				 20
				 15
				 10
				 5

*/
///
/////////////////////////////////////////////////////////


#include <iostream>
#include <conio.h>
using namespace std;

class TablePrintReverse
{
	    private:
	    	    int iNo;

	    public:
	    	   TablePrintReverse()
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

	    	   	   cout<<"\n Given Number Reverse Table is =>"<<endl;

	    	   	   for(i = 10;i >= 1;i--)
	    	   	   {
	    	   	   	    cout<<" "<<iNo<<" * "<<i<<" = "<<iNo*i<<endl;
	    	   	   } 
	    	   }

	    	   ~TablePrintReverse()
	    	   {
	    	   	   /// Destructor
	    	   }

};

int main()
{
	TablePrintReverse TPRObj;

	cout<<"\n====================***Table Reverse***====================== \n\n"<<endl;


	TPRObj.GetInfo();
	TPRObj.Display();

	cout<<"\n====================***Table Reverse***====================== \n\n"<<endl;

	cout<<"\n\n\t Thank You....!!!"<<endl;


	getch();
	return 0;
}