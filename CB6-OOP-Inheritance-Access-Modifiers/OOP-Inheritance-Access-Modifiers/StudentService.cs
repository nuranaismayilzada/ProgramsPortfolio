using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Inheritance_Access_Modifiers
{
	internal class StudentService
	{
		private Student[] GetAllStudents()
		{
			Student stu1 = new()
			{
				Id = 1,
				name = "Nurana",
				surname = "Ismayilzada",
				email = "nurana@gmail.com",
				birthday = new(2002, 10, 19)
			};
			Student stu2 = new()
			{
				Id= 2,
				name = "Nunu",
				surname = "Ismayilzada",
				email = "nunu@gmail.com",
				birthday = new(2006, 10, 19)

			};
			Student stu3 = new()
			{
				Id = 3,
				name = "Nurus",
				surname = "Ismayilzada",
				email = "nurus@gmail.com",
				birthday = new(2003,10,19)
			};
			return new Student[] {stu1 ,stu2 ,stu3 };
		}
		public Student[] ShowAllStudents(DateTime startDate, DateTime endDate)
		{
			Student[] students = GetAllStudents();
			var result=students.Where(x=>x.birthday>startDate && x.birthday < endDate).ToArray();
			return result;
		}
	}
}
