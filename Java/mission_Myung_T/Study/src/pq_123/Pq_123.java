package pq_123;

import java.util.Scanner;

public class Pq_123 {

	public void run() {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("0~100 사이의 학점을 입력하세요 : ");
		
		int score = scanner.nextInt();
		
		char grade = (score >= 90 ? 'A' : score >=80 ? 
				'B' : score >= 70 ? 'C' : score >= 60 ? 
						'D' : 'F');
		
		System.out.println("학점 (" + score +")은 " + grade + "입니다.");
		
		scanner.close();
	}
	
}
