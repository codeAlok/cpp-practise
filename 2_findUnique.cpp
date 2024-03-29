#include<iostream>
using namespace std;

public static int findUnique(int[] arr){
    	
        for(int i = 0; i < arr.length; i++) {
            int j;
            for(j = 0; j < arr.length; j++) {
                if(i != j) {
                    if(arr[i] == arr[j]) {
                        break;
                    }
                }
            }
            if(j == arr.length) {
                return arr[i];
            }
        }

        /*
	    	The function would never return from this line 
    		since the input array always contains a unique value. 

    		To avoid the ambiguity at the compile time,
    		the function necessarily has to return a value in case
    		the line number 22 doesn't return the desired value during
    		the execution of the for loop.
        */
        return Integer.MAX_VALUE;
    }
}