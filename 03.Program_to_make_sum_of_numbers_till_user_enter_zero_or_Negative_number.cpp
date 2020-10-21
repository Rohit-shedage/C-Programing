//////////////////////////////////////////////////////////
///  03. Write Program to make sum of numbers till user enter zero/-ve number.
///      (Use break/continue & unconditional loop).
///  Input :- 25
///			  30
///           30
///            0
///  Output :- 85
///
/////////////////////////////////////////////////////////

#include <iostream>
#include <conio.h>
using namespace std;

class SumNumber
{
	    private:
	    	    int iNo,iSum;

	    public:

	    	   SumNumber()
	    	   {
	    	   	   this->iNo = 0;
	    	   	   this->iSum = 0;
	    	   }

	    	  
	    	   void SumDisplay()
	    	   {
	    	   	   cout<<"\n Enter Number To Print Sum Of Number & Enter Zero Or Negative Number To Stop =>"<<endl;

	    	   	   while(1)
	    	   	   {
	    	   	      cin>>iNo; 

	    	   	      if(iNo <= 0)
	    	   	      {
	    	   	      	  break;
	    	   	      } 

	    	   	      iSum += iNo;
	    	   	   }

	    	   	   cout<<"\n Sum of Given Numbers are =>"<<iSum<<"."<<endl;
	    	   }

	    	   ~SumNumber()
	    	   {
	    	   	   // Destructor
	    	   }
};

int main()
{
	 SumNumber SNObj;

	 cout<<"\n==============***Sum Of Number Untill Zero Or Negative***================= \n\n"<<endl;

	 SNObj.SumDisplay();

	 cout<<"\n==============***Sum Of Number Untill Zero Or Negative***================= \n\n"<<endl;


	 cout<<"\n\n\t Thank You......!!!"<<endl;

	 getch();
	 return 0;
}