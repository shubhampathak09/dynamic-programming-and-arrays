class Strings
{

public static void main(String[] args)
{

// to compare Strings use equals
// == checks if two strings have same memory location, so is not useful
// compareTo checks strings in Lexicographic manner
// if string1.compareTo(string2)=> string1 come before string2 in dictionay
//

String s=null;
System.out.println(s+"null");

String temp=s.substring(0, 1);

System.out.println(temp);// null pointer exception

}

}