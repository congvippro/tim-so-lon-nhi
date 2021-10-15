#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int s,max,lon_nhi,x;
	cout<<"nhap so phan tu cua mang: ";
	cin>>s;
	int a[s];
	cout<<"nhap cac phan tu: "<<endl;
	for(int i=0;i<s;i++)
	  {
	  	 cout<<"a["<<i+1<<"] :  ";
	     cin>>a[i];
	  }
	for (int i=0;i<s;i++)
	  {
	     if (a[i]>max) max=a[i];
	  } 
	x=0;
	max=max-1;
    for(;x==0;max--)
	  {
	   for(int i=0;i<s;i++)
        {
	       if (max==a[i])
		        {
		            lon_nhi=a[i];
		            x=1;
					break;
				}
	    }
	  }
	cout<<lon_nhi;
	return 0;
}
