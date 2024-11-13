public class MemoryLeak {
 public static void main(String[] args) {
 for (int i = 0; i < 1000; i++) {
 String str = new String("Memory leak"); // Objects created without dereferencing
 }
 System.out.println("Potential memory leak.");
 }
}
