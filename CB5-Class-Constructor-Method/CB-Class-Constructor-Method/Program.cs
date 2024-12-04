using CB_Class_Constructor_Method;
//CustomMath c1= new CustomMath();
//c1.SumOfOddNumbers(new int[] { 2, 3, 4, 5, 6, 11 });
//c1.OddOrEvenNumber(6);
//c1.FindSquareTheSumEvenNumbers(new int[] { 2, 3, 4, 7, 9 });
//c1.FindFactorial(4);
//-------------------------------------------------------------
Employee employee1 = new Employee("Nurana", "Ismayilzada",22, "Ramana", "nurana@gmail.com");
Employee employee2 = new Employee("Alisa", "Ismayilzada", 21, "Undefined", "alisa@gmail.com");
Employee employee3 = new Employee("Alina", "Ismayilzada", 20, "Null", "alina@gmail.com");
Employee employee4 = new Employee("Melisa", "Ismayilzada", 19, "NaN", "nelisa@gmail.com");
Employee employee5 = new Employee("Ruzgar", "Ismayilov", 28, "Tovuz", "ruzgar@gmail.com");
Employee[]employees=new Employee[] {employee1,employee2,employee3,employee4,employee5};
//static Employee[] AgeSort(Employee[] employees,int age)
//{
//	var result=employees.Where(m=>m.Age>age).ToArray();
//	return result;
//}

//var result = AgeSort(employees, 19);
//foreach (var item in result)
//{
//	item.Show_Data();
//	Console.WriteLine("--------------------------");
//}
//----------------------------------------------------------------------
//static int AgeAvarage(Employee[] employees,int firstAge,int lastAge)
//{
//	int count = 0;
//	foreach (var employee in employees)
//	{
//		if (employee.Age>firstAge && employee.Age<lastAge)
//		{
//			count++; 
//		}
//	}
//	return count;
//}

//int ress=AgeAvarage(employees, 20,30);
//Console.WriteLine(ress);
//--------------------------------------------------------------------
//static int SumOfEmployeesAge(Employee[] employees)
//{
//	int sum = 0;
//	foreach (var employee in employees)
//	{
//		sum += employee.Age;
//	};
//	return sum; 
//}
//int sumOfEmplooyeesAge = SumOfEmployeesAge(employees);
//Console.WriteLine(sumOfEmplooyeesAge);
//--------------------------------------------------------------------
static Employee[] FindEmail(Employee[]employees,string emailText)
{
	var result=Array.FindAll(employees,m=>m.Email.StartsWith(emailText));
	return result;
}
var res1 = FindEmail(employees, "n");
foreach (var item in res1)
{
	item.Show_Data();
	Console.WriteLine("------------------------------------------------");
}