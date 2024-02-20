# Algorithm-for-Isomorphism

The program is to determine whether two given graphs are isomorphic or not. Graph isomorphism refers to a one-to-one correspondence between the vertices of two graphs in such a way that edges are preserved.

# ALGORITHM:

1.	Check Vertex and Edge Counts:
   
       1.   If the number of vertices in both graphs is different, they are not isomorphic.
       2.   If the number of edges in both graphs is different, they are not isomorphic.
  	
2.	Degree Sequence Check:
   
       1.	For each vertex in both graphs, compare their degrees (number of adjacent vertices).
       2.	If the degree sequences are different, the graphs are not isomorphic.
  	
3.	Graph Isomorphism Testing:
   
       1.	Choose a starting vertex in the first graph.
       2.	For each vertex in the second graph, attempt to match it with the starting vertex from the first graph.
       3.	Recursively check if the remaining subgraphs are isomorphic.
       4.	If a valid mapping is found for all vertices, the graphs are isomorphic.
  	
4.	Backtracking:
   
       1.	If at any point during the recursive isomorphism testing, an invalid mapping is detected, backtrack and try a different mapping.
  	
5.	Output:
   
       1.	Displays the output as the given graph is isomorphic or not.

# IMPLEMENTATION TOOLS:

1.  Programming language C++
2.  G++ compiler
3.  Online cpp(C++) compiler

# SAMPLE INPUT GRAPHS:

Input Graph 1:

<img width="302" alt="image" src="https://github.com/JagadeeshR14/Algorithm-for-Isomorphism/assets/139132404/d59db1ad-4408-43a6-bd07-d02d1e3be28c">

Input Graph 2:

<img width="322" alt="image" src="https://github.com/JagadeeshR14/Algorithm-for-Isomorphism/assets/139132404/236e83ed-cf2a-44ae-aae5-e95ed84cf5e1">

# OUTPUT:

Output for Input Graph 1:

<img width="297" alt="image" src="https://github.com/JagadeeshR14/Algorithm-for-Isomorphism/assets/139132404/d49d6392-4921-40e9-9b8e-9b84b834eb3a">

Output for Input Graph 2:

<img width="297" alt="image" src="https://github.com/JagadeeshR14/Algorithm-for-Isomorphism/assets/139132404/fd5a9912-ffbd-4720-9693-398b63a382f1">
