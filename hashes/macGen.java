import java.security.Key;
import java.security.SecureRandom;
import java.util.Scanner;

import javax.crypto.KeyGenerator;
import javax.crypto.Mac;

public class macGen {
    public static void main(String args[]) throws Exception {

        KeyGenerator keyGen = KeyGenerator.getInstance("DES");

        Scanner sc = new Scanner(System.in);
        SecureRandom secRandom = new SecureRandom();

        
        keyGen.init(secRandom);

        
        Key key = keyGen.generateKey();
        Mac mac = Mac.getInstance("HmacSHA256");
        mac.init(key);
        System.out.print("[+]\tEnter plain text :\t");
        String input = sc.nextLine();
        String msg = new String(input);
        byte[] bytes = msg.getBytes();
        byte[] macResult = mac.doFinal(bytes);

        System.out.println("Messafe Digest : ");
        System.out.println(new String(macResult));

    }
}