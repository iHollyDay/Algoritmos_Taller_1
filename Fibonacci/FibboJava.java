public class Main {
    static void fibo (int n){
        long  a;
        long  b=1;
        long  f=0;
        for (int i=0;i<n;i++){
            a=b;
            b=f;
            f = a + b ;
            System.out.println(f+"\t"+ (i+2));

        }
    }
    public static void main(String[] args) {
        fibo(200);
    }
}
