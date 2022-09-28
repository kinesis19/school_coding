package pq_126;


public class PrintToStar {
	
	public void run() {
		
		int cnt = 9;
		int space = 4;		
		int print = 1;
		
		for(int i = 0; i < cnt; i++) { // y축
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
