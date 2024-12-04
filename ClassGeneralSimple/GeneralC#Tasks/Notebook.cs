using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace GeneralC_Tasks
{
	internal class Notebook
	{
		public string Brand { get; private set;}
		public string Model { get; private set; }
		public decimal Price { get; private set; }
		public Notebook(string brand, string model, decimal price)
		{
			Brand = brand;
			Model = model;
			Price = price;
		}

		public void ShowInfo()
		{
			Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			Console.WriteLine($"Notebook brand:{Brand}");
			Console.WriteLine($"Notebook Model:{Model}");
			Console.WriteLine($"Notebook Price:{Price}");
		}

	}
}
