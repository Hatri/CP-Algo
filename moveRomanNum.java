import java.util.*;
import java.io.*;

class Main {
    private static PrintWriter pw;

    private static void ArabicToRoman(int arabic) {
        // process from larger value to smaller value
        TreeMap<Integer, String> cvt = new TreeMap<Integer, String>(Collections.reverseOrder());
        cvt.put(1000, "M");
        cvt.put(900, "CM");
        cvt.put(500, "D");
        cvt.put(400, "CD");
        cvt.put(100, "C");
        cvt.put(90, "XC");
        cvt.put(50, "L");
        cvt.put(40, "XL");
        cvt.put(10, "X");
        cvt.put(9, "IX");
        cvt.put(5, "V");
        cvt.put(4, "IV");
        cvt.put(1, "I");

        Set keys = cvt.keySet();
        for (Iterator i = keys.iterator(); i.hasNext();) {
            Integer key = (Integer) i.next();
            String value = (String) cvt.get(key);
            while (arabic >= key) {
                pw.print(value);
                arabic -= key;
            }
        }
        pw.printf("\n");
    }
}