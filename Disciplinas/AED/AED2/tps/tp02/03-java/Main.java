import java.util.Scanner;

class Main {
    public static Scanner scan = new Scanner(System.in);

    public static boolean ehFim(String str) {
        boolean fim = false;
        if(str.length() == 3 && str.charAt(0) == 'F' && str.charAt(1) == 'I' && str.charAt(2) == 'M') fim = true;

        return fim;
    }

    public static String inverteString(String s, int n) {
        String in = "";
        for(int i = n-1; i >= 0; i--) {
            in += s.charAt(i);
        }

        return in;
    }

    public static void main(String[] args) {
        String s;

        do{
            s = scan.nextLine();
            if(!ehFim(s)) {
                System.out.println(inverteString(s, s.length()));
            }
        }while(!ehFim(s));
    }
}