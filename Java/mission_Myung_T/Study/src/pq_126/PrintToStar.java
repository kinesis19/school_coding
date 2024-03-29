package pq_126;

/* 제시된 출력 결과 : y축이 1, 3, 5, 7, 9 일 때 별 찍기
 * 별의 갯수는 y축의 값과 같음. ex) y = 1, 출력 별 : 1. y = 3, 출력 별 : 3.
 */

public class PrintToStar {
	
	public void run() {
		
		
		
		for(int y = 1; y <= 9; y++) { // y축
			for(int x = 1; x <= 9; x++) { // x축
				if(y == 1) System.out.print(x == 5 ? "*" : " "); //y축이 1일때,  
				if(y == 3) System.out.print(4 <= x && x <= 6 ? "*" : " ");
				if(y == 5) System.out.print(3 <= x && x <= 7 ? "*" : " ");
				if(y == 7) System.out.print(2 <= x && x <= 8 ? "*" : " ");
				if(y == 9) System.out.print(1 <= x && x <= 9 ? "*" : " "); //y축이 9일때, 
				if(y == 2 || y == 4 || y == 6 || y == 8){ /*y축이 2, 4, 6, 8일 때는 별을 출력하지 않음.*/
					System.out.print("\n\n"); /*출력 결과에 알맞게 문단 넘기기*/
					break; /*문단 넘기기가 중복 실행 되는 것을 방지하기 위함. */
				}
			}
			
		}
		
	}
	
}
