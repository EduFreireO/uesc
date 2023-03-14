import java.util.*;


class map
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String name; 
        
        Map <String, Integer> m = new HashMap<>();
        
        int i = 3;
        int age;
        
        while(i > 0)
        {
            System.out.println("Digite um nome");
            name = in.nextLine(); in.nextLine(); 
            System.out.println("Digite uma Idade");
            age = in.nextInt();
            m.put(name, age);
            i--;
        }
        boolean contain_Eduardo = m.containsKey("Eduardo");
        if(contain_Eduardo)
            System.out.println(true);
        else
            System.out.println(false);

    }
}