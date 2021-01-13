// 
#include<bits/stdc++.h>
using namespace std;


double birthday_paradox(double p)
{
	
	return ceil(sqrt(2*365*log(1/(1-p))));
	
}

int main()
{
 
	cout<<birthday_paradox(0.70);
	
}
