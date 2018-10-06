package palindromo2.pkg1;
import java.util.Scanner;

public class Palindromo21 {
      public static boolean Palindromo(String palabra){
    if(palabra.length() <= 1){
        return true;
    }else{
        if(palabra.charAt(0) == palabra.charAt(palabra.length() - 1)){
            return Palindromo(palabra.substring(1,palabra.length() - 1 ) );
        }else{
            return false;
        }
    }   
}
      
    public static void main(String[] args) {

        Scanner Sc = new Scanner (System.in);
        String palab;
        String palabr;
        
        System.out.println("Ingresa la palabra: " );
        palab = Sc.nextLine();
        palabr = palab;
        palab = palab.replace(" ", "");
        
        if(Palindromo(palab) != true){
            System.out.println("Palabra; ''" +palabr+ "'' No es un palindromo");
        }else{
            System.out.println("Palabra; ''" +palabr+ "'' Es un palindromo");
        }
    
    }
}
    
