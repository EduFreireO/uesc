import java.util.Arrays;

class Box
{
    int[] sizes = new int[3];

    Box(int l1, int l2, int l3)
    {
        sizes[0] = l1; sizes[1] = l2; sizes[2] = l3;
        Arrays.sort(sizes);
    } 
}

class Object extends Box 
{
    boolean 
}