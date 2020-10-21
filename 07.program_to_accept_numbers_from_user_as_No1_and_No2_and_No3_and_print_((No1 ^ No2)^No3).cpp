//////////////////////////////////////////////////////////
///   07.Write a program to accept numbers from user as No1 and No2 and No3 and print ((No1 ^ No2)^No3)
///  Input :- 5^3^2
///  Output :- 15625
///
/////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

class PowerFunc
{
	  private:
	  	      int iNo1,iNo2,iNo3,Pow;

	  	      int PowerLogic()
	  	      {
	  	      	  iNo2 *= iNo3;
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
	  	     	 this->iNo3 = 0;
	  	     	 this->Pow = 1;
	  	     }

	  	     void GetInfo()
	  	     {
	  	     	  cout<<"\n Enter Three Number To Find Its Power x^y^z =>";
	  	     	  cin>>iNo1>>iNo2>>iNo3;
	  	     }

	  	     void Display()
	  	     {
	  	     	  int Temp1 = iNo2,Temp2 = iNo3;
	  	     	  cout<<"\n Given Number "<<iNo1<<"^"<<Temp1<<"^"<<Temp2<<" Power is =>"<<PowerLogic();
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