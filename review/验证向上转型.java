package usefortest;

import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		D d = new B();
	}

}
class D{
	D(){
		System.out.println("D");
	}
}
class B extends D{
	B(){
		System.out.println("B");
	}
}

