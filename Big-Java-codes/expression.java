class expression{

public static void main(String[] args)
{

// a == "1"
// a == null
// a.equals("")
// a == b
// x == y
// x-y ==null
// x.equals(y)

// find which of the floowing is correct ?
// synctatically coorect  but logically questionalble
// synctactically incorrect


// application of comapring two objects lecture
// == checks if it object refernces are same or not
//
double r=Math.sqrt(2);

double d=(r*r)-2;

// round of error because they are not same

final double epsilion=1E-14;

if(d <= epsilion)
{
    System.out.println("equal");
}
else{
    System.out.println(d);
}


}
// epsilion


}