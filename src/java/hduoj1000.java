import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class hduoj1000{

    public static void main(String args[]){
        System.out.print("请输入内容:");

        // 获取键盘输入方法二
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        System.out.print("Input: ");
        String line;
        try {
            line = br.readLine();
            System.out.print("Show: " + line);
        } catch (IOException e) {
            e.printStackTrace();
        } finally {

        }
    }
}