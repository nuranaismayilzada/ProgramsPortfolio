//Student clasiniz ve onun Id, Name, Surname, Email, Birthday fieldleri olacaq. 
//StudentService adinda bashqa bir class yaradirsiz.
//StudentService clasinin icinde Studentleri geri qaytaran bir method olur, hemin method private olmalidir.
//Ondan elave gelen 2 tarixe gore studentleri ekranda gosteren bashqa bir method da olur.
//Gelen tarixler arasindaki studentleri geri qaytaran method yazirsiz.
//Hemin StudentService clasinin proqram.cs-de istifadde edirsiz.

using OOP_Inheritance_Access_Modifiers;

static void GetFilteredStudents()
{
	DateTime startDate = new(2002, 10, 19);
	DateTime endDate = new(2009, 10, 20);
	StudentService studentService = new StudentService();
	Student[]students=studentService.ShowAllStudents(startDate, endDate);
	foreach (var student in students)
	{
		var result =$"{student.name}-{student.birthday.ToString("MM/dd/yyyy")}";
		Console.WriteLine(result);
		
	}
}
GetFilteredStudents();