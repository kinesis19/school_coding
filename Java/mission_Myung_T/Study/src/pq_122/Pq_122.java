package pq_122;

import java.util.Scanner;

public class Pq_122 {	
	public void run() {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("두 개의 수를 띄어쓰기하여 입력해주세요 : ");
		int num1_Input = scanner.nextInt();
		int num2_Input = scanner.nextInt();
		
		
		int result = num1_Input > num2_Input ? num1_Input : (num1_Input == num2_Input ? 0 : num2_Input);
		
		System.out.print("입력한 값 중 큰 수는 " + result + " 입니다.");
		
		scanner.close(); // scanner 메모리 회수
	}

}
