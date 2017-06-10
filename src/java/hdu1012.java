/**
 *
 * Problem Description
 A simple mathematical formula for e is



 where n is allowed to go to infinity. This can actually yield very accurate approximations of e using relatively small values of n.


 Output
 Output the approximations of e generated by the above formula for the values of n from 0 to 9. The beginning of your output should appear similar to that shown below.


 Sample Output
 n e
 - -----------
 0 1
 1 2
 2 2.5
 3 2.666666667
 4 2.708333333
 **/
class hud1012 {
    /**
     * 计算阶乘，注意 0 的阶乘为 1
     * @param num
     * @return
     */
    public int factorial(int num) {
        if (num == 0) {
            return 1;
        }
        int product = 1;
        return num * factorial(num - 1);
    }
    public static void main(String[] args) {
        System.out.println("n e");
        System.out.println("- -----------");
        double radioA;
        double radioB;
        double num;
        double sum = 0;
        double fact;
        hud1012 instance = new hud1012();
        for (int start = 0; start <= 9; start++) {
            sum = 0;
            fact = instance.factorial(start);
            for (int tmp = 0; tmp <= start; tmp++) {
                sum = sum + fact / instance.factorial(tmp);
            }
            String value;
            if (start < 2) {
                value = String.format("%.0f", sum/fact).toString();
            } else if (start == 2) {
                value = String.format("%.1f", sum/fact).toString();
            } else {
                value = String.format("%.9f", sum/fact).toString();
            }
            System.out.println(start+" "+value);
        }
    }
}