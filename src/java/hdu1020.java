/**
 * Problem Description
 Given a string containing only 'A' - 'Z', we could encode it using the following method:

 1. Each sub-string containing k same characters should be encoded to "kX" where "X" is the only character in this sub-string.

 2. If the length of the sub-string is 1, '1' should be ignored.


 Input
 The first line contains an integer N (1 <= N <= 100) which indicates the number of test cases. The next N lines contain N strings. Each string consists of only 'A' - 'Z' and the length is less than 10000.


 Output
 For each test case, output the encoded string in a line.


 Sample Input
 2
 ABC
 ABBCCC


 Sample Output
 ABC
 A2B3C
 **/
import java.util.Scanner;
public class hdu1020 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int caseCount = sc.nextInt();
        String str;
        String outStr;
        String currentChar;
        int currentCount;
        for (int i = 0; i < caseCount; i++) {
            outStr = "";
            str = sc.next();
            String[] strArr = str.split("");

            for (int j = 0; j < strArr.length; j++) {
                currentChar = strArr[j];
                currentCount = 1;
                while (j + 1 < strArr.length && currentChar.equals(strArr[j+1])) {
                    currentCount = currentCount + 1;
                    j = j + 1;
                }
                if (currentCount > 1) {
                    outStr = outStr+String.valueOf(currentCount)+currentChar;
                } else {
                    outStr = outStr+currentChar;
                }
            }
            System.out.println(outStr);
        }
    }
}