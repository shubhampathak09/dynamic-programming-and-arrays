
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};	
	
	
	
	
	int rowStart=0;
	int colStart=3;
	
	int i=-1;
	int j=-1;
	
	int key=29;
	
	while(rowStart<4&&colStart>0)
	{
		
		
		if(mat[rowStart][colStart]==key)
		{
			i=rowStart;
			j=colStart;
			break;
		}
		else if(mat[rowStart][colStart]<key)
		{
			rowStart++;  // Element row as before vlues will be less
		}
		else  // mat[rowStart][colStart]>key => means current values greater the key eleminate col
		{
			colStart--;
		}
	}
	
	
	cout<<i<<" "<<j;
	
	
}
	

	
	
	// trick
	
	// 
