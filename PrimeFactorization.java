import java.util.Scanner;
import java.util.ArrayList;

class PrimeFactorization{
  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("素因数分解したい整数を入力してください：");

    int input = scanner.nextInt();

    System.out.println(calc(input));
    scanner.close();
  }

  private static ArrayList<Integer> calc(int num) {
    ArrayList<Integer> factors = new ArrayList<>();
    int i = 2;
    
    while (i != num) {
      if (num % i == 0) {
        factors.add(i);
        num /= i;
        i = 2;
      } else {
        i += 1;
      }
    }
    factors.add(num);
    return factors;
  }
}