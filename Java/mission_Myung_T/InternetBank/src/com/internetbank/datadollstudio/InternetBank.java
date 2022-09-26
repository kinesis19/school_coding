package com.internetbank.datadollstudio;

import java.util.Scanner;

public class InternetBank {

	public static void main(String[] args) throws Exception{
		
		boolean run = true;
		Scanner sr = new Scanner(System.in);
		
		int userMoney = 0; // 사용자의 잔고 
		
		while(run) {
			System.out.println("--------------------------------------");
			System.out.println("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료.");
			System.out.println("--------------------------------------");
			System.out.print("선택> ");
			
			int userAnswer = sr.nextInt();
			
			switch(userAnswer) {
			case 1:
				
			}
			
			break;
		}
		
		sr.close();
	}

}
