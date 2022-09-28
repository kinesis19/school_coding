package pq_126;


public class PrintToStar {
	
	public void run() {
		
		int cnt = 9; // 별찍기 최댓값은 9개.
		int space = 4; // y축 하나 당 별 찍기 전/후에 필요한 여백
		int print = 1; // 별 찍을 갯수.
		
		for(int i = 0; i <= cnt; i++) { // y축
			for(int j = 0; j <= cnt; j++) { // x축
				System.out.print(" ");
				if(space == j) {
					for(int p = 0; p < print; p++) {
						System.out.print("*");
					}
					print+=2;
					space--;
					System.out.print("\n");
				}
			}
			System.out.print("\n");
			
		}
		
	}
	
}
