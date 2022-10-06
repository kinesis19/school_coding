package pq_126;


public class PrintToStar {
	
	public void run() {
		
		
		
		for(int y = 1; y <= 9; y++) { // y축
			for(int x = 1; x <= 9; x++) { // x축
				if(y == 1) System.out.print(x == 5 ? "*" : " ");
				if(y == 3) System.out.print(4 <= x && x <= 6 ? "*" : " ");
				if(y == 5) System.out.print(3 <= x && x <= 7 ? "*" : " ");
				if(y == 7) System.out.print(2 <= x && x <= 8 ? "*" : " ");
				if(y == 9) System.out.print(1 <= x && x <= 9 ? "*" : " ");
				if(y == 2 || y == 4 || y == 6 || y == 8){
					System.out.print("\n\n");
					break;
				}
			}
			
		}
		
	}
	
}
