package pq_130;

public class Lotto {

	public void run() {
		int ball_count = 1;
		System.out.print("로또 번호는 : ");
		while(ball_count <= 6) { //로또는 6개 공을 뽑음.
			int ball_num = (int) (Math.random() * 45) + 5; // 로또는 1부터 ~ 45번까지 있음. random() * 45는 40.5까지 나오므로,
			// 45까지 나오기 위해 +5를 해줌.
			ball_count++;
			System.out.print(ball_num + " ");
		} 
		System.out.println("입니다.");

	}

}
