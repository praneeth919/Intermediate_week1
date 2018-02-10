#include<iostream>

using namespace std;

int main()
{
  int rows,cols,a[100][100],temp;
  
  cin>>rows>>cols;
  temp=cols;
  
  for(int i=0; i<rows; i++)
  {
  	
  	if(i%2!=0)
  	   {
  	   	 cols=cols-1;
		 }
	
  	for(int j=0; j<cols; j++)
  	{
  		
  		cout<<a[i][j];
  		
  	}
  	
  	cols=temp;
  	
    cout<<"\n";
}

return(0);
}
