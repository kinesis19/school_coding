package com.internetbank.datadollstudio;

import java.util.Scanner;

public class InternetBank {

	public static void main(String[] args) throws Exception{
		
		boolean run = true;
		Scanner sc = new Scanner(System.in);
		
		long userMoney = 0; // 사용자의 잔고 
		
		while(run) {
			System.out.print("\n\n");
			System.out.println("--------------------------------------");
			System.out.println("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료.");
			System.out.println("--------------------------------------");
			System.out.print("선택> ");
			
			// Scanner-nextInt()로 받는 로직.
			int userAnswer = sc.nextInt();
			
			switch(userAnswer) {
			case 1:
				System.out.print("예금액> ");
				long deposit = sc.nextLong();
				userMoney = userMoney + deposit;
				System.out.print("예금 성공.");
				continue;
			case 2:
				System.out.print("출금액> ");
				long withdraw  = sc.nextLong();
				if(0 <= userMoney - withdraw) {
					userMoney = userMoney - withdraw ;
					System.out.print("출금 성공.");
				}else {
					System.out.print("출금 금액 부족.");
				}
				continue;
			case 3:
				System.out.print("잔고>" + userMoney);
				continue;
			case 4:
				System.out.print("프로그램 종료");
				run = false;
				break;
			default:
				continue;
			}
			
			
			// 문제에서 제시한 Scanner의 nextLine()를 사용한 로직.
//			String userAnswer = sc.nextLine();
//			switch(userAnswer) {
//			case "1":
//				System.out.print("예금액> ");
//				int deposit = Integer.parseInt(sc.nextLine());
//				 /* [기존]
//				  * 1. '선택' 에서 원하는 번호(1) 입력 후 엔터.
//				  * 2. 예금액을 '123'으로 입력 후 엔터.
//				  * 3. userMoney에 2에서 입력한 '123'이 들어가고 "예금 성공." 출력됨.
//				  * 4. 2에서 '123'을 입력하고 남은 엔터가 '선택'의 값으로 받음.
//				  * 5. 따라서 엔터를 값으로 받은 '선택'이 한번 호출되고,
//				  * 이때, 엔터의 값은 switch ~ case, default 문에서 처리되므로 또 한번 호출됨.
//				  * 
//				  * [해결 방안]
//				  * 입금액, 출금액에서 Scanner-nextLint()으로 입력 받을 때, 
//				  * 바깥 쪽에 Integer.parseInt()로 묶어서 받음.
//				  * 
//				  * [결과]
//				  * 
//				  * <기존>의 실행결과 '5'와 같이 '선택' 메시지가 2번 호출 되지 않고,
//				  * 프로그래머가 기획한 바와 같이 1번 호출되므로 정상작동 됨.
//				  * 
//				  * 
//				  * */
//				userMoney = userMoney + deposit;
//				System.out.println("예금 성공.");
//				continue;
//			case "2":
//				System.out.print("출금액> ");
//				int withdraw  = Integer.parseInt(sc.nextLine());
//				if(0 <= userMoney - withdraw) {
//					userMoney = userMoney - withdraw ;
//					System.out.println("출금 성공.");
//				}else {
//					System.out.println("출금 금액 부족.");
//				}
//				continue;
//			case "3":
//				System.out.print("잔고>" + userMoney);
//				continue;
//			case "4":
//				System.out.println("프로그램 종료");
//				run = false;
//				break;
//			default:
//				continue;
//			}
			
		}
		
		sc.close();
	}

}
