using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//3) Employee adinda class yaradin, Class -in id, name, surname, address, email, age
//fieldleri olacaq.
//Proqram.cs - de ashagidaki methodlari yazin. 
//1)  Yashi methoda parametr kimi gelen yashdan boyuk olan 
//employee -lerin  siyahisini qaytaran method.
//2)  Yashi 20 - ve 30 arasinda olan telebelerin sayini qaytaran method.
//3)  Butun Emloyeelerin yashlarinin cemini qaytaran method.
//4)  Emaili methoda parametr kimi gelen stringle bashlayan employee-lerin siyahisini qaytaran method.

namespace classlar
{
	public class Employee
	{
		public int id;
		public string name;
		public string surname;
		public int age;
		public string address;
		public string email;
		public void fullData()
		{
			Console.WriteLine($"Id:{id} Name:{name} Surname:{surname} Age:{age} Address:{address} Email:{email}");
		}
	}
	
}
