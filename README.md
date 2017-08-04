                                           
                                           
                                     # datastructure-and-algorithm
                                            
    This repository is for learning datastructures and algorithms which are backbone of computer science.
                
    Things that seem new to me in Ds and Algorithms:
                
    DataStructures:
                
    1.Juggling algorithm for rotation of array
                
     In this algorithm instead of moving one by one, divide the array in different sets 
     where number of sets is equal to GCD of n and d and move the elements within sets.
                 
     Now arrise two questions:
                 
     How does the GCD decide the number of cycles needed to rotate the array?
     Because the inner loop increments in steps of d, and stops when it gets back to the starting point, 
     i.e. a total span which is some multiple of n. That multiple is LCM(n, d). Thus the number of 
     elements in that cycle is LCM(n, d) / d. The total number of such cycles is n / (LCM(n, d) / d), 
     which is equal to GCD(n, d).

     Why is it that once we finish a cycle, we start the new cycle from the next element 
     i.e. can't the next element be already a part of a processed cycle?
     The inner loop increments in steps of d, which is a multiple of GCD(n, d). Thus by the time we 
     start the i-th cycle,for a hit we'd need (k*GCD + z) % n == i (for 0 <= z < i). This leads to 
     (k*GCD) % n == (i - z). This clearly has no solutions.
                 
                 
                
     Algorithms:
                
    1. Kadane’s Algorithm:

                Initialize:
                max_so_far = 0
                max_ending_here = 0

                Loop for each element of the array
                (a) max_ending_here = max_ending_here + a[i]
                (b) if(max_ending_here < 0)
                  max_ending_here = 0
                (c) if(max_so_far < max_ending_here)
                  max_so_far = max_ending_here
                  return max_so_far
                
      Explanation:
      Simple idea of the Kadane's algorithm is to look for all positive contiguous segments of 
      the array (max_ending_here is used for this). And keep track of maximum sum contiguous 
      segment among all positive segments (max_so_far is used for this). Each time we get a 
      positive sum compare it with max_so_far andupdate max_so_far if it is greater than max_so_far
             
      
      2. Multiple of 3
             
        Algorithm: isMutlipleOf3(n)
          
          1) Make n positive if n is negative.
          2) If number is 0 then return 1
          3) If number is 1 then return 0
          4) Initialize: odd_count = 0, even_count = 0
          5) Loop while n != 0
           a) If rightmost bit is set then increment odd count.
           b) Right-shift n by 1 bit
           c) If rightmost bit is set then increment even count.
           d) Right-shift n by 1 bit
          6) return isMutlipleOf3(odd_count - even_count)
          
           Time Complexity : O(log(n))
                
   
   Compute sum of digits in all numbers from 1 to n     
                
   Algorithm: sum(n)

1) Find number of digits minus one in n. Let this value be 'd'.  
   For 328, d is 2.

2) Compute some of digits in numbers from 1 to 10d - 1.  
   Let this sum be w. For 328, we compute sum of digits from 1 to 
   99 using above formula.

3) Find Most significant digit (msd) in n. For 328, msd is 3.

4) Overall sum is sum of following terms

    a) Sum of digits in 1 to "msd * 10d - 1".  For 328, sum of 
       digits in numbers from 1 to 299.
        For 328, we compute 3*sum(99) + (1 + 2)*100.  Note that sum of
        sum(299) is sum(99) + sum of digits from 100 to 199 + sum of digits
        from 200 to 299.  
        Sum of 100 to 199 is sum(99) + 1*100 and sum of 299 is sum(99) + 2*100.
        In general, this sum can be computed as w*msd + (msd*(msd-1)/2)*10d

    b) Sum of digits in msd * 10d to n.  For 328, sum of digits in 
       300 to 328.
        For 328, this sum is computed as 3*29 + recursive call "sum(28)"
        In general, this sum can be computed as  msd * (n % (msd*10d) + 1) 
        + sum(n % (10d))             
