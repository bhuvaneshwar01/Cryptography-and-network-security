import java.math.BigInteger;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Scanner;


class sha256Gen {
	public static byte[] getSHA(String input) throws NoSuchAlgorithmException
	{
		
		MessageDigest md = MessageDigest.getInstance("SHA-256");

		return md.digest(input.getBytes(StandardCharsets.UTF_8));
	}
	
	public static String toHexString(byte[] hash)
	{
		
		BigInteger number = new BigInteger(1, hash);


		StringBuilder hexString = new StringBuilder(number.toString(16));

	
		while (hexString.length() < 64)
		{
			hexString.insert(0, '0');
		}

		return hexString.toString();
	}


	public static void main(String args[])
	{
        Scanner sc = new Scanner(System.in);
		try
		{
			System.out.println("[+] Enter message : ");

			String s1 = sc.nextLine();
			System.out.println("\n" + s1 + " - SHA256 : " + toHexString(getSHA(s1)));

            String s2 = sc.nextLine();
            if(s2 == toHexString(getSHA(s1)))
                System.out.println("Match");
            else
                System.out.println("No Natcj");
        }
		
		catch (NoSuchAlgorithmException e) {
			System.out.println("Exception thrown for incorrect algorithm: " + e);
		}
	}
}
