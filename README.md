                                            # datastructure-and-algorithm
                                            
                This repository is for learning datastructures and algorithms which are backbone of computer science.
                
                Things that seem new to me in Ds and Algorithms:
                
                DataStructures:
                
                1.Juggling algorithm for rotation of array
                
                 In this algorithm instead of moving one by one, divide the array in different sets 
                 where number of sets is equal to GCD of n and d and move the elements within sets.
                 
                 Now arrise two questions:
                 
                 How does the GCD decide the number of cycles needed to rotate the array?
                 Because the inner loop increments in steps of d, and stops when it gets back to the starting point, i.e. a total span                      which is some multiple of n. That multiple is LCM(n, d). Thus the number of elements in that cycle is LCM(n, d) / d. The                  total number of such cycles is n / (LCM(n, d) / d), which is equal to GCD(n, d).

                 Why is it that once we finish a cycle, we start the new cycle from the next element 
                i.e. can't the next element be already a part of a processed cycle?
                The inner loop increments in steps of d, which is a multiple of GCD(n, d). Thus by the time we start the i-th cycle,
                for a hit we'd need (k*GCD + z) % n == i (for 0 <= z < i). This leads to (k*GCD) % n == (i - z). This clearly has no                       solutions.
                 
                 
                
                Algorithms:
                
