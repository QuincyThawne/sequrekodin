public class ManageMemory {
 public static void main(String[] args) {
 for (int i = 0; i < 1000; i++) {
 String str = new String("Managed memory");
 str = null; // Dereferencing unused objects
 }
 System.out.println("Memory managed efficiently.");
 }
}
