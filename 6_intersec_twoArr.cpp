vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans; // vector created

    for(int i=0; i<n; i++){
		int element = arr1[i];
        
        for(int j=0; j<m; j++){
            if(element == arr2[j]){
                ans.push_back(element); // to insert in vector
                arr2[j] = -1; // any value less than 0 to not mach again
                break;
            }
        }
    }
    return ans;
}
// Tle error
    vector<int> ans;
    for(int i=0; i<n; i++){
		int element = arr1[i];
        for(int j=0; j<m; j++){
            if(element < arr2[j])
                break;
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }
    // this also tle error
    
//*********** Now below code is optimized code ***********
    vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
 	int i=0, j=0;
    vector<int> ans;
    while(i<n && j<m){
        
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
           
        }
        else{
            j++;
        }
    }
    return ans;
}