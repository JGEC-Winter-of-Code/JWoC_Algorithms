<!-- Evaluate Postfix Expression
 Language Used: JAVA

Given a postfix expression, the task is to evaluate the expression and print the final value. Operators will only include the basic arithmetic operators like *,/,+ and - . 

Input format: The first line of input will contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains an postfix expression.

Output format: For each test case, in a new line, evaluate the postfix expression and print the value.

Sample Input :
2
231*+9-
123+*8-


Sample Output:
-4
-3		-->


import java.util.*;

class EvaluatePostfixExpression{
    
    public static int evaluate(int first,int second,char operator)
    {
        switch(operator)
        {
            case '+':
                return first+second;
            case '-':
                return second-first;
            case '*':
                return first*second;
            case '/':
                return second/first;
            default:
                return 0;
        }
        
    }
    
	public static void main (String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		int testcase = scan.nextInt();
		while(testcase -- > 0)
		{
		    String postfix = scan.next();
		    Stack<Integer>stack = new Stack<Integer>();
		    for(int i=0;i<postfix.length();i++)
		    {
		        if( Character.isDigit(postfix.charAt(i) ) )
		        {
		            stack.push(Character.getNumericValue(postfix.charAt(i)));
		        }
		        else
		        {
		            int firstnum = stack.pop();
		            int secondnum = stack.pop();
		            stack.push(evaluate(firstnum,secondnum,postfix.charAt(i) ));
		        }
		    }
		    
		    int evaluatedResult = stack.pop();
		    System.out.println(evaluatedResult);
		}
	}
}
