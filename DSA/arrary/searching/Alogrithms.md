# Alogrithms of  binary_search
1. start
2. size = UB -LB + 1
3. set start = 0,set end = size,set key;
4. repeat 5 , 6, & 7 while(start<=end)
5. set mid = (start+end)/2;
6. if(arr[mid]==key)
      return mid;
7. if(arr[mid]<key)
    set start  = mid +1
   else
  set  end = mid -1;
8. return -1
9. exits 