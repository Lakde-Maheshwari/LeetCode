class Solution {
    public static int[] shuffle(int[] a, int n) {
        int k = a.length;
        int i =0;
        int [] result = new int [2*n];
        for(i = 0 ;i<n;i++){
            result[2 * i] = a[i];
            result[2 * i + 1] = a[n+i];
        }
        return result;
    }
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a [] = new int [n];
        for(int i = 0;i<n;i++){
            a[i]  = sc.nextInt();
        }
        int k = sc.nextInt();
        shuffle(a,k);
    }
}