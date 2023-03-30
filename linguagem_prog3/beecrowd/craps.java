import java.util.*;
public class craps {    
    
    public static void main(String[] args)
    {   
        Scanner in = new Scanner(System.in);
        
        
        int
        play = 2,
        dice1 = (int) (Math.random() * (6 - 1)) + 1,
        dice2 = (int) (Math.random() * (6 - 1)) + 1, result = dice1 + dice2;
        
        boolean 
        lose = (result == 2 || result == 3 || result == 3), 
        win = (result == 7 || result == 11);
        
        System.out.println("Dado 1: " + dice1 + " Dado 2: " + dice2 + "\nponto: " + result);
        in.nextLine();
        
        if(win)
            System.out.println("Voce venceu resultado foi 7\n");
        else if(lose)
            System.out.println("Voce Perdeu. O resultado foi: " + result);
        else
        {
            while(true)
            {
                
                dice1 = (int) (Math.random() * (6 - 1)) + 1;
                dice2 = (int) (Math.random() * (6 - 1)) + 1;
                System.out.println("Jogada: " + play++ + "Dado: " + dice1 + dice2 + "\n");
                in.nextLine();
                
                if(dice1 + dice2 == result)
                {
                    System.out.println("Jogador Venceu. a soma foi: " + result);
                    break;
                }
                else if(dice1 + dice2 == 7)
                {
                    System.out.println("Voce Perdeu. No estagio 2\n");
                    break;
                }
            }

        }  
        
        
               
    }
    
    
    
}   
