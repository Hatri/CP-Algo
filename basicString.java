import java.util.*;
import java.io.*;

class basicString {
    static int isVowel(char ch) {
        String vowel = "aeiou";
        for (int j = 0; j < 5; j++)
            if (vowel.charAt(j) == ch)
                return 1;
        return 0;
    }

    public static void main(String[] args) throws Exception {
        int i, pos, digits, alphas, vowels, consonants;
        String str = "";

        Boolean first = true; // technique to differentiate first line with the other lines
        Boolean prev_dash = false, this_dash = false; // to differentiate whether the previous line contains a dash or
                                                      // not

        Scanner sc = new Scanner(new File("basic_string_in.txt"));
        while (sc.hasNextLine()) {
            String line = sc.nextLine();
            if (line.equals(".......")) break;
            if (line.charAt(line.length() - 1) == '-') {
              line = line.substring(0, line.length() - 1); // if the last character is '-', delete it
              this_dash = true;
            }
    }
}