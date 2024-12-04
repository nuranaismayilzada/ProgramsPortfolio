using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CB_Class_Constructor_Method
{
	internal class CustomMath
	{
		public void SumOfOddNumbers(int[] numbers)
		{
			int sum = 0;
			foreach (int number in numbers)
			{
				if (number % 2 != 0)
				{
					sum += number;
				}
			}
			Console.WriteLine($"Sum of odd numbers: {sum}");
		}
		public void OddOrEvenNumber(int number)
		{
			if (number % 2 == 0)
			{
				Console.WriteLine("Eded cutdur!");
			}
			else if (number % 2 == 1)
			{
				Console.WriteLine("Eded tekdir!");
			}
			else
			{
				Console.WriteLine("Eded 0-a beraberdir!");
			}
		}
		public void FindSquareTheSumEvenNumbers(int[] numbers) { 
			int sum = 0;
			foreach (int number in numbers) {
				if (number%2==0)
				{
					sum += number;
				}
			}
			Console.WriteLine($"Result:{sum*sum}");
		}
		public void FindFactorial(int n)
		{
			int hasil = 1;
			while (n>1)
			{
				hasil *= n;
				n--;
			}
			Console.WriteLine($"Factorial:{hasil}");
		}
	}
}
