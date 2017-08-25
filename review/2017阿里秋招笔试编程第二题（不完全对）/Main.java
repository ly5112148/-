package usefortest;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class Main {
	/** 请完成下面这个process函数，实现题目要求的功能 **/
	/** 当然，你也可以不按照这个模板来作答，完全按照自己的想法来 ^-^ **/
	public static int boxlength;
	public static int boxwidth;
	public static int boxheight;
	public static int maxprice = 2000;
	//函数的作用：对二维数组按指定列排序
	public static void sort(int[][] ob, final int[] order) {
		Arrays.sort(ob, new Comparator<Object>() {
			public int compare(Object o1, Object o2) {
				int[] one = (int[]) o1;
				int[] two = (int[]) o2;
				for (int i = 0; i < order.length; i++) {
					int k = order[i];
					if (one[k] > two[k]) {
						return 1;
					} else if (one[k] < two[k]) {
						return -1;
					} else {
						continue;
					}
				}
				return 0;
			}
		});
	}

	private static int process(int[][] a, int itemNum) {
		for(int i=0;i<a.length;i++){
			if(a[i][0]>2000||(a[i][1]*a[i][2]*a[i][3])>(boxlength*boxwidth*boxheight))
				return -1;
		}
		sort(a, new int[] { 4 });
		int num = 1;
		int l = boxlength;
		int w = boxwidth;
		int h = boxheight;
		int v=l*w*h;
		int price=maxprice;
		int top=a.length-1;
		int low=0;
		while(low<=top){
			if(v>a[top][1]*a[top][2]*a[top][3]&&price>a[top][0]){
				v=v-a[top][1]*a[top][2]*a[top][3];
				price-=a[top][0];
				top--;
			}else{
				num++;
				v=l*w*h;
				price=maxprice;
			}			
		}
		return num;
	}

	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);

		while (scanner.hasNext()) {
			boxlength = scanner.nextInt();
			boxwidth = scanner.nextInt();
			boxheight = scanner.nextInt();

			int itemNum = scanner.nextInt();
			int a[][] = new int[itemNum][5];
			for (int i = 0; i < itemNum; i++) {
				a[i][0] = scanner.nextInt();
				a[i][1] = scanner.nextInt();
				a[i][2] = scanner.nextInt();
				a[i][3] = scanner.nextInt();
				a[i][4] = a[i][0] / (a[i][1] * a[i][2] * a[i][3]);//价值空间比
			}
			System.out.println(process(a, itemNum));
		}
	}
}