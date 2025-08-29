import java.util.Scanner;

class FuncoesBooleanas {
    public String A;
    public String B;
    public String C;

    public FuncoesBooleanas() {
        this.A = null;
        this.B = null;
        this.C = null;
    }

}

class And extends FuncoesBooleanas {
    public int postulados(String x, String y) {
        int r;
        if(x.equals("0")) r = 0;
        else {
            if(y.equals("0")) r = 0;
            else r = 1;
        }

        return r;
    }

    public int postulados(String x, String y, String z) {
        int r;
        if(x.equals("0")) r = 0;
        else {
            if(y.equals("0")) r = 0;
            else {
                if(z.equals("0")) r = 0;
                else r = 1;
            }
        }
    }
}

class Or extends FuncoesBooleanas {

}

class Not extends FuncoesBooleanas {

}

class Main {
    public static Scanner scan = new Scanner(System.in);

    public static int algebraBooleana(int n, int[] valores,  String s) {
        
    }

    public static void main(String[] args) {
        String s;

        do{
            s = scan.nextLine();

            if(!ehFim(s)) {
                int i = a1.
            }

        }while(!ehFim(s))
    }
}