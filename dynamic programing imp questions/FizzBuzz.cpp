#include<bits/stdc++.h>
using namespace std;


vector<string> fizzbuzz(int n)
{
	
	vector<string>res;
	
	// multiples of 3 store fizz
	//multiples of 5 store Buzz
	//both 3 and 5 fizz buzz
	
	for(int i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)
		{
			res.push_back("FizzBuzz");
		}
		else if(i%5==0)
		{
			res.push_back("Buzz");
		}
		else if(i%3==0)
		{
			res.push_back("Fizz");
		}
		else
		res.push_back(to_string(i));
	}
	
	return res;
}


int main()
{

int n=8;

vector<string>ans=fizzbuzz(n);

for(auto x:ans)
{
	cout<<x<<endl;
	}	
	
	return 0;
}

 
