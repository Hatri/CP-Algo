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

}