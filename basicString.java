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
}