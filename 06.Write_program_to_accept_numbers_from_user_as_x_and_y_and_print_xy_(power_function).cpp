//////////////////////////////////////////////////////////
///  06.Write program to accept numbers from user as x and y and print xy (power function).
///  Input :- 5^3
///  Output :- 125
///
/////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

class PowerFunc
{
	  private:
	  	      int iNo1,iNo2,Pow;

	  	      int PowerLogic()
	  	      {
	  	          for (;iNo2 > 0;iNo2--)
	  	           {
	  	           	  /* code */
	  	           	  Pow = Pow * iNo1;
	  	           } 

	  	           return Pow;
	  	      }

	  public:
	  	     PowerFunc()
	  	     {
	  	     	 this->iNo1 = 0;
	  	     	 this->iNo2 = 0;
	  	     	 this->Pow = 1;
	  	     }

	  	     void GetInfo()
	  	     {
	  	     	  cout<<"\n Enter Two Number To Find Its Power x^y =>";
	  	     	  cin>>iNo1>>iNo2;
	  	     }

	  	     void Display()
	  	     {
	  	     	  int Temp = iNo2;
	  	     	  cout<<"\n Given Number "<<iNo1<<"^"<<Temp<<" Power is =>"<<PowerLogic();
	  	     }

	  	     ~PowerFunc()
	  	     {
	  	     	 //Destructor
	  	     }

};

int main()
{
	 PowerFunc PFObj;
     
	 PFObj.GetInfo();
	 system("cls");

	 cout<<"\n==============***Power Function x^y***================= \n\n"<<endl;

	 PFObj.Display();

	 cout<<"\n\n==============***Power Function x^y***================= \n\n"<<endl;

	  cout<<"\n\n\t Thank You.....!!!"<<endl;

	 getch();
	 return 0;
}