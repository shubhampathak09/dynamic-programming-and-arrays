// Amazon allows you to filter products based on certain specifications
// lets create few specifications

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

enum Color
{
    RED,GREEN,BLUE
}

enum Size
{
    SMALL,MEDIUM,LARGE,HUGE
    }

class Product
{
    public String name;
    public Color color;
    public Size size;

   public Product(String name,Color color,Size size)
    {
        this.name=name;
        this.color=color;
        this.size=size;
    }




}
// filter based on color
class productFilter
{
    public Stream<Product> filterByColor(List<Product>products,Color color)
    {
        return products.stream().filter(p->p.color==color);
    }
// manager says filter by size
    public Stream<Product>filterBySize(List<Product>products,Size size)
    {
        return products.stream().filter(p->p.size==size);
    }

    // Boss says both by size and color and at same time

    public Stream<Product>fliterBySizeAndColor(List<Product>products,Size size,Color color)
    {
        return products.stream().filter(p->p.size==size&&p.color==color);
    }
}
// imagin we have 3rd criteria->7 methods for evry possible intersection

public class Open_Close {

    public static void main(String args[])
    {

        Product apple=new Product("Apple",Color.GREEN,Size.SMALL);
        Product tree=new Product("tree",Color.GREEN,Size.LARGE);
        Product house=new Product("house",Color.BLUE,Size.LARGE);

        List<Product>products= Arrays.asList(apple,tree,house);

        productFilter pf=new productFilter();

        System.out.println("Old filter");
        pf.filterByColor(products,Color.GREEN).forEach(p->System.out.println("-"+p.name+" is green"));
    }


}
