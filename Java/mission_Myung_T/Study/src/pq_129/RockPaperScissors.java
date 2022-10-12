package pq_129;

import java.util.Scanner;
import java.util.Random;

public class RockPaperScissors {

	public void run() {
		
		Scanner sr = new Scanner(System.in);
		
		int userAnswer;
		do {
			Random rand = new Random();
			int pcAnswer = rand.nextInt(3)+1;
			
			System.out.println("==========[왁파고와 대결하는 가위바위보]==========");
			
			System.out.print("숫자를 입력하세요(1:가위, 2:바위, 보:3) : ");
			userAnswer = sr.nextInt();
			
			int operResult = userAnswer - pcAnswer;
			
			if(userAnswer == 0) {
				System.out.print("프로그램을 종료합니다.");
			}else if(1<=userAnswer && userAnswer<= 3) {
				System.out.println("컴퓨터 : " + pcAnswer);
				if(userAnswer == pcAnswer) {
					System.out.println("결과 : 비김\n");
				}else if(operResult == -2 || operResult == 1) {
					System.out.println("결과 : 승\n");
				}else if(operResult == 2 || operResult == -1) {
					System.out.println("결과 : 패\n");
				}
			}else {
				System.out.println("제대로 된 숫자를 입력하세요 (1:가위, 2:바위, 보:3)\n");
			}
			
		}while(userAnswer != 0);

	}

}
