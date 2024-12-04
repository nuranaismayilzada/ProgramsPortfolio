using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GeneralC_Tasks
{
	internal class Person
	{
		private static int counter = 0;
		public int Id { get; private set; }
		public Person() {
			counter++;
			Id = counter;
		}
		public static int GetObjectCount()
		{
			return counter; 
		}
	}
}
