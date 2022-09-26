package com.internetbank.datadollstudio;

import java.util.Scanner;

public class InternetBank {

	public static void main(String[] args) throws Exception{
		
		boolean run = true;
		Scanner sr = new Scanner(System.in);
		
		int userMoney = 0; // 사용자의 잔고 
		
		while(run) {
//			System.out.print("\n");
			System.out.println("\n--------------------------------------");
			System.out.println("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료.");
			System.out.println("--------------------------------------");
			System.out.print("선택> ");
			
			String userAnswer = sr.nextLine();
			
//			switch(userAnswer) {
//			case 1:
//				System.out.print("예금액> ");
//				int deposit = sr.nextInt();
//				userMoney = userMoney + deposit;
//				System.out.print("예금 성공.");
//				continue;
//			case 2:
//				System.out.print("출금액> ");
//				int withdraw  = sr.nextInt();
//				if(0 <= userMoney - withdraw) {
//					userMoney = userMoney - withdraw ;
//					System.out.print("출금 성공.");
//				}else {
//					System.out.print("출금 금액 부족.");
//				}
//				continue;
//			case 3:
//				System.out.print("잔고>" + userMoney);
//				continue;
//			case 4:
//				System.out.print("프로그램 종료");
//				run = false;
//				break;
//			default:
//				continue;
//			}
			
			switch(userAnswer) {
			case "1":
				System.out.print("예금액> ");
				int deposit = sr.nextInt();
				userMoney = userMoney + deposit;
				System.out.println("예금 성공.");
				continue;
			case "2":
				System.out.print("출금액> ");
				int withdraw  = sr.nextInt();
				if(0 <= userMoney - withdraw) {
					userMoney = userMoney - withdraw ;
					System.out.println("출금 성공.");
				}else {
					System.out.println("출금 금액 부족.");
				}
				continue;
			case "3":
				System.out.print("잔고>" + userMoney);
				continue;
			case "4":
				System.out.println("프로그램 종료");
				run = false;
				break;
			default:
				continue;
			}
			
		}
		
		sr.close();
	}

}
