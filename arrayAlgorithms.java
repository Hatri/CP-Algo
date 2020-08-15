import java.util.*;

class team implements Comparable<team> {
    private int id, solved, penalty;

    public team(int i, int solved, int penalty) {
        this.id = id;
        this.solved = solved;
        this.penalty = penalty;
    }

    public int compareTo(team o) {
        if (solved != o.solved)
            return o.solved - solved;
        else if (penalty != o.penalty)

            return penalty - o.penalty;
        else
            return id - o.id;

    }

    public String toString() {
        return "id: " + id + ", solved: " + solved + ", penalty: " + penalty;
    }
}

class arrayAlgorithms {
    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();

        v.add(10);
        v.add(7);
        v.add(2);
        v.add(15);
        v.add(4);

        // sort descending with vector
        Collections.sort(v);
        // if we want to modify comparison function, use the overloaded method:
        // Collections.sort(List list, Comparator c);
        Collections.reverse(v);

        System.out.println(v);
        System.out.printf("==================\n");

        // shuffle the content again
        Collections.shuffle(v);
        System.out.println(v);
        System.out.printf("==================\n");

        // sort ascending
        Collections.sort(v);
        System.out.println(v);
        System.out.printf("==================\n");

        ArrayList<team> nus = new ArrayList<>();
        nus.add(new team(1, 1, 10));
        nus.add(new team(2, 3, 60));
        nus.add(new team(3, 1, 20));
        nus.add(new team(4, 3, 60));

        // without sorting, they will be ranked like this:
        for (int i = 0; i < 4; ++i)
            System.out.println(nus.get(i));

        Collections.sort(nus); // sort using a comparison function
        System.out.printf("==================\n");
        // after sorting using ICPC rule, they will be ranked like this:
        for (int i = 0; i < 4; ++i)
            System.out.println(nus.get(i));
        System.out.printf("==================\n");

        int pos = Collections.binarySearch(v, 7);
        System.out.println("Trying to search for 7 in v, found at index = " + pos);

        pos = Collections.binarySearch(v, 77);
        System.out.println("Trying to search for 77 in v, found at index = " + pos);
    }

}