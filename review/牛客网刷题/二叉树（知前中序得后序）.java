package usefortest;

import java.util.*;
/*
 * 输入一个二叉树的前序遍历和中序遍历
 * 得到这个二叉树，然后后序遍历输出
 */
public class Main {
	public class TreeNode {
		int val;
		TreeNode left;
		TreeNode right;
		TreeNode(int x) {
			val = x;
		}
	}
	TreeNode reConstructBinaryTree(int [] pre,int [] in) {
		if(pre.length == 0||in.length == 0){
			return null;
		}
		TreeNode node = new TreeNode(pre[0]);
		for(int i = 0; i < in.length; i++){
			if(pre[0] == in[i]){
			node.left = reConstructBinaryTree(Arrays.copyOfRange(pre, 1, i+1), Arrays.copyOfRange(in, 0, i));
			node.right = reConstructBinaryTree(Arrays.copyOfRange(pre, i+1, pre.length), Arrays.copyOfRange(in, i+1,in.length));
			}
		}
		return node;
    }
	//后序遍历
	void PosteriorTraversal(TreeNode T){
		if(T != null){			
			PosteriorTraversal(T.left);
			PosteriorTraversal(T.right);
			System.out.print(T.val);
		}
	}
	public static void main(String args[]) {
		int[] pre={1,2,4,7,3,5,6,8};
		int[] in={4,7,2,1,5,3,8,6};
		Main m =new Main();
		TreeNode tn=m.reConstructBinaryTree(pre,in);
		m.PosteriorTraversal(tn);
	}
}
