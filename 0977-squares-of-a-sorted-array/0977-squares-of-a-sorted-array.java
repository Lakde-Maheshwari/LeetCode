class Solution {
    public static int[] sortedSquares(int[] a) {
        int n = a.length;
        for(int i = 0;i<n;i++){
            a[i] = a[i] * a[i];
        }
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(a[i] >a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a;
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
            int a[] = new int[n];
        for(int i = 0;i<n;i++){
            a[i] = sc.nextInt();
            }
        sortedSquares(a);
        for(int i = 0; i<n;i++){
            System.out.println(a[i] + " ");
        }
}
}