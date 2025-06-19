import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String a = sc.next();
    char op = sc.next().charAt(0);
    String b = sc.next();

    if (op == '*') {
      String out = "1";
      for (int i = 0; i < ((a.length() - 1) + (b.length() - 1)); i++) {
        out += "0";
      }
      System.out.println(out);
    } else if (a.length() == b.length()) {
      String out = "2";
      for (int i = 0; i < (a.length() - 1); i++) {
        out += "0";
      }
      System.out.println(out);
    } else {
      int min, max;
      if (a.length() > b.length()) {
        max = a.length() - 1;
        min = b.length() - 1;
      } else {
        max = b.length() - 1;
        min = a.length() - 1;
      }

      String out = "1";
      for (int i = 0; i < max - min - 1; i++) {
        out += "0";
      }
      out += "1";
      for (int i = max - min; i < max; i++) {
        out += "0";
      }
      System.out.println(out);
    }
    sc.close();
  }

}