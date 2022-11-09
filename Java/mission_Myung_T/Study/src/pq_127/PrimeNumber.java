package pq_127;

public class PrimeNumber {

	public static int Mathing(int a, int b) {
		int result = a / b;
		return result;
	}

	public static void main(String[] args) {
		
		int[] ary = new int[100];
		
		for(int i = 0;i<100;i++) { //100칸 짜리 배열에 값 넣기.
			  ary[i] = i+1;
		}
		
		for(int j = 1; j <= 100; j++) { // j는 소수를 구하기 위한 기준 값(1부터 100까지)
			for(int k = 1; k < j; k++) { //k는 기준값(j)보다 작은 수 -> j값을 ary[k]로 나눠 가면서 나머지가 0이면 소수 아니면 소수가 아닌 수. 
				//(1과 자기 값은 제외하고 돌림). ary[0] = 1이므로, ary[1] = 2인 k의 값을 1부터 시작함.
				int result = Mathing(j, ary[k]);
				if(result < 0) {
					break;
				}else if(result == 0) {
					System.out.print(j + " ");
					break;
				}else if(result > 0) {
					
				}
				
			}
		}
		

	
	}

}
