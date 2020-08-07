import jdk.internal.org.jline.utils.InputStreamReader;
import jdk.internal.util.StaticProperty;
import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out))); // = fast IO

        int caseNo = 0;
        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int bills = Integer.parseInt(st.nextToken());
            int friends = Integer.parseInt(st.nextToken());
            if (bills == 0 && friends == 0)
                break;

            BigInteger sum = BigInteger.ZERO;

            for (int i = 0; i < bills; ++i){
                BigInteger VV = new BigInteger(br.readLine());
                sum = sum.add(V);
            }

            pw.printf("Bill #%d costs ", ++caseNo);
            pw.printf(sum.toString());
            pw.printf(": each friend should pay ");
            pw.printf(sum.divide(BigInteger.valueOf(friends)).toString());
            pw.printf("\n\n");                        
          }

          pw.close();

        }

    }

}