package pq_125;

import java.util.Scanner;

public class ForMoonNumPrinter {
	public void run() {
			
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("숫자를 입력하세요 : ");
		
		int answer_num = scanner.nextInt();
		
		for(int i = 1; i <= answer_num; i++) {
			System.out.println(i);
		}
		
		scanner.close();
	}
}
