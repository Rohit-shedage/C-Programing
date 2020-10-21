//////////////////////////////////////////////////////////
///  05.Write Program to display table of numbers of any given range.
///  Input :- 5  10
///  Output :-
/*            
             5       6       7       8       9       10
			 10      12      14      16      18      20
			 15      18      21      24      27      30
			 20      24      28      32      36      40
			 25      30      35      40      45      50
			 30      36      42      48      54      60
			 35      42      49      56      63      70
			 40      48      56      64      72      80
			 45      54      63      72      81      90
			 50      60      70      80      90      100
*/
///
/////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
using namespace std;

class TablePrintRange
{
	    private:
	    	    int iStart,iEnd;
	    public:
	    	   TablePrintRange()
	    	   {
	    	   	   this->iStart = 0;
	    	   	   this->iEnd = 0;
	    	   }

	    	   void GetInfo()
	    	   {
	    	   	    Up:
	    	   	    cout<<"\n Enter Start Number and End Number to Print Table =>";
	    	   	    cin>>iStart>>iEnd;

	    	   	    if (iStart > iEnd)
	    	   	    {
	    	   	    	cout<<"\n Given Number is Invalid Enter Valid Number..!!"<<endl;
	    	   	    	goto Up;
	    	   	    }
	    	   }
	    	   void Display()
	    	   {
	    	   	   int i = 0,j = 0;

	    	   	   cout<<"\n Table Range From "<<iStart<<" to "<<iEnd<<" are =>\n"<<endl;

	    	   	   for(i = 1;i <= 10;i++)
	    	   	   {
	    	   	   	    for(j = iStart;j <= iEnd;j++)
	    	   	   	    {
	    	   	   	    	   //printf(" %3d ",i*j);
	    	   	   	    	   cout<<" \t"<<setw(3)<<i*j;  // stew() :- is Used For Formatted Output
	    	   	   	    }
	    	   	   	    cout<<endl;
	    	   	   } 
	    	   }

	    	   ~TablePrintRange()
	    	   {
	    	   	   //Destructor
	    	   }

	    	  
};

int main()
{
	 TablePrintRange TPRObj;

	 TPRObj.GetInfo();
     system("cls");

     cout<<"\n====================***Table Range***====================== \n\n"<<endl;

	 TPRObj.Display();

	 cout<<"\n====================***Table Range***====================== \n\n"<<endl;


	 cout<<"\n\n\t Thank You.....!!!"<<endl;

	 getch();
	 return 0;
}