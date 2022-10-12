package pq_131;

import java.util.Scanner;
import java.util.Random;


public class PcVsPerson {

	public void run() {
		Random rand = new Random();
		Scanner sr = new Scanner(System.in);
		
		int pcChoose = rand.nextInt(5)+1;
		int tryCount = 0;
		int userAnswer;
		
		do {
			System.out.print("컴퓨터가 생각하는 수를 입력하세요 : ");
			userAnswer = sr.nextInt();
			tryCount++;
			if(userAnswer == pcChoose) System.out.print("축하합니다 " + tryCount + "만에 맞췄습니다.");
		}while(userAnswer != pcChoose);

	}

}
