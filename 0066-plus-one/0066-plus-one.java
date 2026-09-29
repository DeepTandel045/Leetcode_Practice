class Solution {

    static int[] addOne(int x[]) { // x is an alias of arr

        //read the elements of array from right to left cuz addition is performed on digits right to left

        for(int i = x.length-1;i>=0;i--) {

            //case 1 : digit is not 9


            if(x[i] != 9) {
                x[i]++;
                return x;
            }

            x[i] = 0; // case2 , digit is 9

        }

        // case 3 - when all the digit are 9 , like 9, 9 , 9 the ans could be 1 0 0 0

        int result[] = new int[x.length + 1];
        result[0] = 1;

        return result;


    }

    public int[] plusOne(int[] digits) {
        int ans[] = addOne(digits);

        return ans;
    }

    
}