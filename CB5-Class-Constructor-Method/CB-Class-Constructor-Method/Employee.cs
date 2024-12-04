using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CB_Class_Constructor_Method
{
	internal class Employee
	{
		public static int static_Id;
		public int Id;
		public string Name;
		public string Surname;
		public int Age;
		public string Address;
		public string Email;

		public Employee(string name,string surname,int age,string address,string email) {
			static_Id++;
			Id = static_Id;
			this.Name = name;
			this.Surname = surname;
			this.Age = age;
			this.Address = address;
			this.Email = email;
		}
		public void Show_Data()
		{
			Console.WriteLine($"Id:{Id}");
			Console.WriteLine($"Name:{Name}");
			Console.WriteLine($"Surname:{Surname}");
			Console.WriteLine($"Age:{Age}");
			Console.WriteLine($"Address:{Address}");
			Console.WriteLine($"Email:{Email}");
		}
	}
}
