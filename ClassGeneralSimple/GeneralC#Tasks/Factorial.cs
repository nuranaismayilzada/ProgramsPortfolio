using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GeneralC_Tasks
{
	internal class Factorial
	{
		public void FindFactorial(int num)
		{
			int hasil = 1;
			int factorial = 1;
			while (num>=hasil)
			{
				factorial*=hasil;
				hasil++;
			}
			Console.WriteLine($"Hasil:{factorial}");
		}
	}
}
