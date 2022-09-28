package pq_126;


public class PrintToStar {
	
	public void run() {
		
		int cnt = 9;
		int space = 4;		
		
		for(int i = 0; i <= cnt; i++) { // y축
			for(int j = 0; j <= cnt; j++) { // x축
				System.out.print(" ");
				if(j == space) {
					System.out.print("*");
					space--;
				} 
			}
			System.out.print("\n");
			
			
		}
		
	}
	
}
