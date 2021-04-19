// union and find knaive 

int _find(int parent[],int i)
{
	
	if(parent[i]==-1)
	return i;
	return find(parent,parent[i]);
	
}

void _union(int parent[],int x,int y)
{
	int xset=find(parent,x);
	int yset=find(parent,y);
	
	parent[xset]=yset;
}

// trees created can get skewed and time complexisty becomes linear
//o(n)

