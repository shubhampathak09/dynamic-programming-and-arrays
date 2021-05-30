

import java.util.*;

public class BreadthFirstSearch {
	
	public static class Vertex
	{
		
		private String name;
		
		public String getName() {
			return name;
		}
		public void setName(String name) {
			this.name = name;
		}
		public boolean isVisited() {
			return visited;
		}
		public void setVisited(boolean visited) {
			this.visited = visited;
		}
		public List<Vertex> getAdjacencyList() {
			return adjacencyList;
		}
		 public void addNeighbour(Vertex v)
		 {
			 this.adjacencyList.add(v);
		 }
		private boolean visited;
		
		private List<Vertex>adjacencyList;
		
		public Vertex(String name)
		{
			
			this.name=name;
			this.adjacencyList=new ArrayList<>();
			
		}
		@Override
		public String toString()
		{
			return this.name;
		}
	}
	
	
	public static class BFS
	{
		
		public void traverse(Vertex src)
		{
			
			Queue<Vertex> queue=new LinkedList<>();
			src.setVisited(true);
			
			queue.add(src);
			
			while(!queue.isEmpty())
			{
				
				 Vertex currV=queue.remove();
				 
				 System.out.println(currV.name+" ");
				 
				 for(Vertex v:currV.getAdjacencyList())
				 {
					 if(v.isVisited()==false)
					 {
						 v.setVisited(true);
						 queue.add(v);
					 }
				 }
				
			}
			
		}
		
	}

	public static void main(String args[])
	{
	
		
		BreadthFirstSearch bf=new BreadthFirstSearch();
		
		Vertex a=new Vertex("A");

		Vertex b=new Vertex("B");

		Vertex c=new Vertex("C");

		Vertex d=new Vertex("D");

		Vertex e=new Vertex("E");

		Vertex f=new Vertex("F");

		Vertex g=new Vertex("G");
		
		Vertex h=new Vertex("H");
		
		a.addNeighbour(b);
		a.addNeighbour(f);
		a.addNeighbour(g);
		
		b.addNeighbour(a);
		b.addNeighbour(c);
		b.addNeighbour(d);
		
		
		c.addNeighbour(b);
		
		d.addNeighbour(b);
		d.addNeighbour(e);
		
		f.addNeighbour(a);
		
		g.addNeighbour(a);
		g.addNeighbour(h);
		
		h.addNeighbour(g);
		
		
		 
	
		
		
	}
	
	


}