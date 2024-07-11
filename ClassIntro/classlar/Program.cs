//1) CustomMath adinda class yaradin, hemin clasin icinde ashagidaki methodlar olacaq.
//Hemin methodlari proqram classda cagirib ishledin. 
//     1)Method array qebul edir, arrayin icerisindeki tek ededlerin cemini tapin.
//     2)Methoda gelen ededin tek ve ya cut olub olmamasini gosterin.
//     3) Methoda gelen arrayin elementlerininden cut olanlarinin ceminin kvadratini tapmaq.
//     4) Methoda n ededi gelir, 1-den n ededine qeder olan ededlerin hasilini tapin.



//CustomMath c1 = new CustomMath();
//CustomMath c2 = new CustomMath();
//CustomMath c3 = new CustomMath();
//CustomMath c4 = new CustomMath();
//CustomMath c5 = new CustomMath();

//c1.SumFindNumbers(new int[] { 1, 2, 3, 4, 6 ,7});
//c2.SumFindNumbers(new int[] { 1, 11, 3, 4, 6, 7 });
//c3.OddorSingleNumber(7);
//c4.OddNumbersSum(new int[] { 2, 4, 1, 3, 9,4 });
//c5.FactorialFind(5);

//----------------------------------------------------------------------------------------

//2) Employee adinda class yaradin, Class -in id, name, surname, address, email, age fieldleri olacaq.
//Proqram.cs - de ashagidaki methodlari      yazin. 
//1)  Yashi methoda parametr kimi gelen yashdan boyuk olan 
//employee -lerin  siyahisini qaytaran method.
//2)  Yashi 20 - ve 30 arasinda olan telebelerin sayini qaytaran method.
//3)  Butun Emloyeelerin yashlarinin cemini qaytaran method.
//4)  Emaili methoda parametr kimi gelen stringle bashlayan employee-lerin siyahisini qaytaran method.

using classlar;
using System.Security.Claims;

static Employee[] GetAllEmployees()
{
	Employee e1 = new Employee()
	{
		id = 1,
		name = "Nurane",
		surname = "Ismayilzade",
		age = 21,
		address = "Ramana",
		email = "nuranaismayilzada@gmail.com"
	};
	Employee e2 = new Employee()
	{
		id = 2,
		name = "Ismayil",
		surname = "Ismayilov",
		age = 17,
		address = "Merdekan",
		email = "ismayilismayilov@gmail.com"
	};
	Employee e3 = new Employee()
	{
		id = 3,
		name = "Aqsin",
		surname = "Ismayilov",
		age = 23,
		address = "Tovuz",
		email = "aqsin@gmail.com"
	};
	Employee e4 = new Employee()
	{
		id = 4,
		name = "Alisa",
		surname = "NoSurname",
		age = 10,
		address = "NoAddress",
		email = "alisa@gmail.com"
	};
	Employee e5 = new Employee()
	{
		id = 5,
		name = "Leman",
		surname = "Shamilova",
		age = 20,
		address = "Bine",
		email = "leman@gmail.com"
	};
	Employee[] Employees = { e1, e2, e3, e4, e5 };
	return Employees;
}

static Employee[] getByAgeEmployees(int age)
{
	Employee[] res = GetAllEmployees();
	Employee[] employees = Array.FindAll(res,emp=>emp.age>age);
	return employees;
}

static int getByAroundAgeEmployees()
{
	Employee[] res = GetAllEmployees();
    Employee[] employees = Array.FindAll(res, emp => emp.age > 20 && emp.age < 30);
	int count=employees.Length;
	return count;
}

Console.WriteLine(getByAroundAgeEmployees());

static int AgeSumEmployees()
{
	Employee[] res = GetAllEmployees();
	int Sum = 0;
	foreach(Employee emp in res)
	{
		Sum += emp.age;
	}
	return Sum;
}
Console.WriteLine(AgeSumEmployees());

static Employee[] showEmail(string Email)
{
	Employee[] res = GetAllEmployees();
	Employee[] employees = Array.FindAll(res, emp => emp.email.Contains(Email));
	return employees;
}

foreach (var emp in showEmail("nur"))
{
	emp.fullData();
}

//foreach (var em in getByAgeEmployees(22))
//{
//    em.fullData();
//}