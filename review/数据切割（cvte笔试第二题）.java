package usefortest;

import java.util.*;  

public class Main {  
  
    public static void main(String[] args) {  
        Scanner in = new Scanner(System.in);  
        while (in.hasNext()) {  
            int n = in.nextInt();  
            int m = in.nextInt();  
            List<Integer> list = new ArrayList<>();  
            String s = String.valueOf(n);  
            for(int i=0;i<s.length();i++){  
                list.add(s.charAt(i)-'0');  
            }  
            List<Integer> l = new ArrayList<>();  
            fon(0,list,l,m);  
            int min = -1;  
            for(int i : l){  
                if(i>min)  
                    min = i;  
            }  
            System.out.println(min);  
        }  
    }  
    public static void fon(int sum,List<Integer> list,List<Integer> l,int m){  
        if(list.size() == 0)  
            l.add(sum);  
        else{  
            int temp = list.get(0);  
            while(sum+temp <= m){  
                list.remove(0);  
                fon(sum+temp,new ArrayList<Integer>(list),l,m);  
                if(list.size() == 0)  
                    break;  
                else{  
                    temp = temp*10 + list.get(0);  
                }  
            }  
        }  
    }  
}