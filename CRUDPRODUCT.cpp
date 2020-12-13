#include<iostream>
#include<stdlib.h>
using namespace std;
class SANPHAM
{
 int SP_ID;
 char SP_NAME[20];
 char SP_PRI[20];
 char SP_SL[20];
 public:
 	int Insert(SANPHAM *p,int n)
	{
	 cout<<"Enter ID: ";
	cin>>p[n].SP_ID;
	cout<<"Enter Name: ";
	cin>> p[n].SP_NAME;
	cout<< "Enter PRICE: ";
	cin>> p[n].SP_PRI;
	cout<<"Enter SO LUONG: ";
	cin>> p[n].SP_SL;
	cout<<"\nRECORD INSERTED...\n";
	n++;
	return n;
	}
	void Search(SANPHAM *p,int ID,int n)
	{
	int i=0;
	for( i=0;i<n;i++)
	{
	   if(p[i].SP_ID==ID)
    		{
		cout<<"ID\tNAME\tPRIC\tSL\n==============================================\n";
	    	cout<<SP_ID<<"\t"<<SP_NAME<<"\t"<<SP_PRI<<"\t"<<SP_SL<<"\n";
		break;
    		}
	}
	if(p[i].SP_ID!=ID)
	{
	cout<<"\nRECORD NOT FOUND.\n";
	}

    }

	void Display(){
	cout<<SP_ID<<"\t"<<SP_NAME<<"\t"<<SP_PRI<<"\t"<<SP_SL<<"\n";
	}
	int Del(SANPHAM *p,int n,int ID)
	{
		int j=0,k,flag=0;
		for(j=0;j<n;j++)
		{
			if(p[j].SP_ID==ID)
            {
                flag=1;
                break;
            }
		}
        if(flag==1)
        {
            for(k=j;k<n;k++)
            {
            p[k]=p[k+1];
            }
            cout<<"\nRECORD DELETED.\n";
            return n-1;
        }
			else
			{
				cout<<"\nRecord Not Found\n";
				return n;
			}
	}
	int Update(SANPHAM *p,int ID,int n)
	{
		int i,ch1;
		for(i=0;i<n;i++)
		{
		if(p[i].SP_ID==ID)
    		{
    			while(1){
    			cout<<"\n!!===OPTIONS IN UPDATE===!!\n";
    			cout<<"\n 1. Update NAME";
    			cout<<"\n 2. Update PRICE";
   				cout<<"\n 3. Update SO LUONG";
   				cout<<"\n 4. Return to main Menu";
   				cout<<"\n\n Enter Your Choice:";
   				cin>>ch1;    				
				switch(ch1){
    				case 1: cout<<"Section:";
    						cin>>p[i].SP_PRI;
    						cout<<"Record Updated...\n";
    						break;
   					case 2: cout<<"DEPT:\t";
   							cin>>p[i].SP_SL;
   							cout<<"Record Updated...\n";
   							break; 					
					case 3: cout<<"Section:";
							cin>>p[i].SP_PRI;
							cout<<"DEPT:\t";
							cin>>p[i].SP_SL;
							cout<<"Record Updated...\n";
							break;
					case 4: return n;
					default: cout<<"!! Wrong Key !!";
							break;
					}
				}
			break;
    		}
		}
    		if(p[i].SP_ID!=ID)
		{
    		cout<<"\nRecord Not Found\n\n";
		}
	}
};
int main()
{
 SANPHAM o[10];
 int i=0,ch,j,ID;
 while(1)
  {
   cout<<"\n!!===PRODUCT MANAGMENT SYSTEM===!!";
   cout<<"\n";
   cout<< "\n 1.INSERT";
   cout<< "\n 2.SEARCH";
   cout<< "\n 3.DISPLAY";
   cout<< "\n 4.DELETE";
   cout<< "\n 5.UPDATE";
   cout<< "\n 6.EXIT";
   cout<< "\n\n ENTER YOUR CHOICE:";
   cin>> ch;
   switch(ch){
     case 1: i=o[0].Insert(o,i);
               break;
     case 3: cout<<"ID\tNAME\tPRI\tSL\n==============================================\n";
		for(j=0;j<i;j++){
		o[j].Display();
		}
		break;
     case 2:
		cout<<"Enter the ROLL for Search:";
		cin>> ID;

		o[0].Search(o,ID,i);

		break;
	 case 4:
		cout<<"Enter the ID to Delete:";
		cin>> ID;
		i=o[0].Del(o,i,ID);
		break;
	 case 5:
	 	cout<<"Enter the ID For Data Update:";
		cin>> ID;
		i=o[0].Update(o,ID,i);
		break;
	 default: cout<<"Wrong Key!!";
	 		break;
     case 6: exit(0);
    }
  }

 }
