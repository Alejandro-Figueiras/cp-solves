import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    s.trim();
    int n = s.length();
    while (true) {
      s = s.replaceAll("(.)\\1", "");
      if (s.length() == n) {
        break;
      }
      n = s.length();
    }
    System.out.println(s);
    sc.close();
  }
}