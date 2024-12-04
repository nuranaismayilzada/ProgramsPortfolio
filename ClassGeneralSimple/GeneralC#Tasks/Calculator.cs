using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GeneralC_Tasks
{
	internal class Calculator
	{
		public void Calculation(decimal a,decimal b)
		{
			
			string choice;
			Console.WriteLine("Operator daxil edin: 1.+ 2.- 3./ 4.*");
			choice = Console.ReadLine();
			if (choice == "+")
			{
				Console.WriteLine(a + b);
			}
			else if (choice == "-")
			{
				Console.WriteLine(a - b);
			}
			else if (choice == "/")
			{
				Console.WriteLine(a / b);
			}
			else if (choice == "*") {
				Console.WriteLine(a*b);
			}
			else
			{
				Console.WriteLine("Operator sehv daxil edilib!");
			}

		}
	}
}
