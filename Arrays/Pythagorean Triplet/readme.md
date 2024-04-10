Given an array arr of n integers, write a function that returns true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes)
that satisfies a2 + b2 = c2, otherwise return false.

Example 1:

Input:
N = 5
Arr[] = {3, 2, 4, 6, 5}
Output: Yes
Explanation: a=3, b=4, and c=5 forms a
pythagorean triplet.
Example 2:

Input:
N = 3
Arr[] = {3, 8, 5}
Output: No
Explanation: No such triplet possible.

---------------------------------------------------------------------------------------------------------------------------------------------------------

1st method has time complexity O(n^3)
2nd method has time complexity as O(n^2)
3nd method has time complexity as O(n^2)

In 1st and 2nd method few test cases are fail but in 3rd method all test cases are pass successfully
