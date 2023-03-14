import java.util.ArrayList;
import java.util.Collections;
import java.util.Map;

class Box
{
    public ArrayList <Integer> sizes = new ArrayList<>();

    public Box(int s1, int s2, int s3)
    {
        sizes.add(s1);
        sizes.add(s2);
        sizes.add(s3);
        Collections.sort(sizes);
    }
};

class Special_box extends Box
{
    public Special_box(int s1, int s2, int s3)
    {
        super(s1, s2, s3);
    }
    
    public boolean is_valid(Box stock_box)
    {
        boolean valid_size1 = this.sizes.get(0) > stock_box.sizes.get(0); 
        boolean valid_size2 = this.sizes.get(1) > stock_box.sizes.get(1);
        boolean valid_size3 = this.sizes.get(2) > stock_box.sizes.get(2);
        
        if(valid_size1 && valid_size2 && valid_size3)
            return true;
        return false;    
    }
};

class Main
{
    public static void main(String[] args)
    {
        
    }
}