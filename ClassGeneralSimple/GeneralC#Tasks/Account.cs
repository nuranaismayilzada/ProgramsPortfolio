using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GeneralC_Tasks
{
	internal class Account
	{
		public void Login(string username, string password)
		{
			if (username=="nurana2002" && password=="nurane123")
			{
				Console.WriteLine("Giris ugurludur!");
			}
			else
			{
				Console.WriteLine("Parol ve ya username yalnisdir!");
			}
		}
	}
}
