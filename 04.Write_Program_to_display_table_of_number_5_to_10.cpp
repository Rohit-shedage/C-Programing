//////////////////////////////////////////////////////////
///  04.Write Program to display table of number 5 to 10.
///  Input :- 
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
//#include <cstdio.h>
#include <iomanip>
#include <conio.h>
using namespace std;

class TablePrintRange
{
	    public:
	    	   void TableRangeDisplay()
	    	   {
	    	   	   int i = 0,j = 0;

	    	   	   cout<<"\n Table Range From 5 to 10 are =>\n"<<endl;

	    	   	   for(i = 1;i <= 10;i++)
	    	   	   {
	    	   	   	    for(j = 5;j <= 10;j++)
	    	   	   	    {
	    	   	   	    	   //printf(" %3d ",i*j);
	    	   	   	    	   cout<<" \t"<<setw(3)<<i*j;
	    	   	   	    }
	    	   	   	    cout<<endl;
	    	   	   } 
	    	   }

	    	  
};

int main()
{
	 TablePrintRange TPRObj;

	 TPRObj.TableRangeDisplay();

	 cout<<"\n\n\t Thank You.....!!!"<<endl;

	 getch();
	 return 0;
}