vector < int >Solution::repeatedNumber (const vector < int >&arr) {
    
    int xor1;
 int set_bit_no;

    int i;
    int x = 0; 
    int y = 0; 
    int n = arr.size();

    xor1 = arr[0];

    
    for (i = 1; i < n; i++)
        xor1 = xor1 ^ arr[i];

    
    for (i = 1; i <= n; i++)
        xor1 = xor1 ^ i;

    
    set_bit_no = xor1 & ~(xor1 - 1);

    

    for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no)
            
            x = x ^ arr[i];

        else
           
            y = y ^ arr[i];
    }

    for (i = 1; i <= n; i++) {
        if (i & set_bit_no)
            
            x = x ^ i;

        else
            
            y = y ^ i;
    }

   
    int x_count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]==x)
            x_count++;
    }
    
    if (x_count==0)
        return {y, x};
    
    return {x, y};
}
