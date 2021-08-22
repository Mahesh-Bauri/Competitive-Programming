Recursion :
A problem - solving technique in which tasks are
completed by reducing them into repeated, smaller
tasks of the same form.


Two main cases (components) of recursion : -

1.Base case
	Termination condition
	○ An occurrence that can be answered directly.


2.Recursive case
		○ The step at which you break down more complex versions of the task into smaller
		occurrences
		○ Cannot be answered directly
		○ Take the “recursive leap of faith” and trust the smaller tasks will solve the problem
		for you!

		Example : Print n to 1;
input: n
output: n n - 1 n - 2 . . . 1
5


5 4 3 2 1
















1.Recursive decomposition is the hard part

• Find recursive sub - structure
• Solve problem using result from smaller subproblem(s)
• Identify base case
	• Simplest possible case, directly solvable, recursion advances to it


	2.Common patterns
	• Handle first and / or last, recur on remaining
	• Divide in half, recur on one / both halves
	• Make a choice among options, recur on updated state


	3.Placement of recursive call(s)
	• Recur - then - process versus process - then - recur
