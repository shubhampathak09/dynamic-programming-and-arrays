import java.util.ArrayList;
import java.util.*;

public class HashMapImpl {
	
	
	public static class HashMap<K,V>{
		
		
		private class HMNode{
			
			K key;
			V value;
			
			HMNode(K key,V value)
			{
				this.key=key;
				this.value=value;
			}
			
		    
			 
		}
		
		

		private int size; // n
		private LinkedList<HMNode>[] buckets;//N;
		
		public HashMap()
		{
			size=0;
			initBuckets(4);
		}
		
		private void initBuckets(int N)
		{
			buckets=new LinkedList[N];
			for(int bi=0;bi<buckets.length;bi++)
			{
				buckets[bi]=new LinkedList<>();
			}
		}
		
		public void put(K key,V value) throws Exception
		{
			
			// find key:- use HasCode to find index of bucket
			// find the value inida int hat bucket
			
			int bi=hashfn(key);
			
			int di=getIndexWithinBucket(key,bi);
			
			
			if(di!=-1)
			{
				
				HMNode node=buckets[bi].get(di);
				node.value=value;
			}
			else
			{
				//int bi=hasfn(key);
				HMNode node=new HMNode(key,value);
				buckets[bi].add(node);
				size++; // importaat step
			}
			
			double lambda=size*1.0/buckets.length;
		    
			if(lambda>2.0)
			{
				rehash();
			}
		
		}
		
		private void rehash() throws Exception
		{
			LinkedList<HMNode>[] oba=buckets;
			
		    initBuckets(oba.length*2); // Bucket[8]
			
			
		    for(int i=0;i<oba.length;i++)
		    {
		    	for(HMNode node:oba[i])
		    	{
		    	put(node.key,node.value);	
		    	}
		    }
		    
		//	n=8 & N=4  lamda<=k k=2.0
			
		}
		
		private int hashfn(K key)
		{
			// HashCode availabe in Java  not rq to think:P
			
			int hc=key.hashCode();
			return Math.abs(hc) % buckets.length;
		}
		
		
		private int getIndexWithinBucket(K key,int bi)
		{
			int di=0; 
			for(HMNode node:buckets[bi])
			{
				if(node.key.equals(key))  // use equals java
					return di;
				di++;
			}
		    return -1;
		}
		
		public V get(K key)
		{
			
			int bi=hashfn(key);
			
			int di=getIndexWithinBucket(key,bi);
			
			if(di!=-1)
			{
				return buckets[bi].get(di).value;
			}
			else
				return null;
		}
		
		public boolean ContainsKey(K key)
		{
		  	int bi=hashfn(key);
			for(HMNode node:buckets[bi])
			{
				if(node.key.equals(key))
					return true;
			}
			
			return false;
		}
		
		
		public V remove(K key)
		{
			
			int bi=hashfn(key);
			
			int di=getIndexWithinBucket(key,bi);
			
			if(di!=-1)
			{
				HMNode node=buckets[bi].remove(di);
				size--;
				return node.value;
			}
			
			return null;
		}
		
		public ArrayList<K>keyset()
		{
			ArrayList<K>temp=new ArrayList<K>();
			
			for(int bi=0;bi<buckets.length;bi++)
			{
				for(HMNode node:buckets[bi])
				{
					temp.add(node.key);
				}
			}
			
			return temp;
		}
		
		public void display()
		{
		
			System.out.println("Display begins..");
			
			for(int bi=0;bi<buckets.length;bi++)
			{
				
				for(HMNode node:buckets[bi])
				{
					System.out.println("Key -> "+node.key+" Value -> "+node.value);
				}
				System.out.println();
			}
			
		}
		
		
		
	}
	
	
	
	public static void main(String args[]) throws Exception
	{
		
	HashMap<Integer,Integer>hm=new HashMap<Integer,Integer>();
	hm.put(1, 2);
	hm.put(3, 4);
	
	hm.display();
	
	hm.put(1, 5);
	
	hm.display();	
	
	
	
	
	}

}
