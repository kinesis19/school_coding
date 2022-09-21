package pq_122;

import java.util.Scanner;

public class Pq_122 {	
	public void run() {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("두 개의 수를 띄어쓰기하여 입력해주세요 : ");
		String num1_Input = scanner.next();
		String num2_Input = scanner.next();
		
		int num1_Int = Integer.parseInt(num1_Input);
		int num2_Int = Integer.parseInt(num2_Input);
		
		int result = num1_Int > num2_Int ? num1_Int : (num1_Int == num2_Int ? 0 : num2_Int);
		
		System.out.print("입력한 값 중 큰 수는 " + result + " 입니다.");
	}

}
