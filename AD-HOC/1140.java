import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner leitor = new Scanner(System.in);
        
        String linha = leitor.nextLine();
        char flag = linha.charAt(0);
        while (flag != '*'){
            
            if (eh_Tautograma(linha)) System.out.println("Y");
            else System.out.println("N");
            
            linha = leitor.nextLine();
            flag = linha.charAt(0);
        }
    }
    
    public static boolean eh_Tautograma(String frase){
        frase = frase.toLowerCase();
        char parametro = frase.charAt(0);
        String[] palavras = frase.split(" ");
        
        for (String palavra : palavras){
            char inicio = palavra.charAt(0);
            if (parametro != inicio) return false;
        }
        
        return true;
    }
}
