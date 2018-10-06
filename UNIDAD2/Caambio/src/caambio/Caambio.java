package caambio;
import java.util.Scanner;

public class Caambio {
   public long Cambio(int num){
    if(num<2){
        return num;}
    else{
        return num%2+Cambio(num/2)*10;
        }
 }
   
    public static void main(String[] args) {
        Caambio Cm=new Caambio();
        Scanner Sc= new Scanner (System.in);
        int numero;
        
        System.out.println("Ingrese un número de base 10: ");
        numero = Sc.nextInt();
        
        System.out.println("El resultado es: "+ Cm.Cambio(numero));
        
    }

}
