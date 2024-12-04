//static string UpperStringFirstChar(string str)
//{
//	return char.ToUpper(str[0])+str.Substring(1);
//}
//Console.WriteLine(UpperStringFirstChar("nurana"));


//using System.Text;

//StringBuilder sb = new StringBuilder();
//for (int i = 0; i < 1000; i++)
//{
//	sb.Append(i.ToString()); 
//}
//string result = sb.ToString();


//using CB_StringBuilder_Array_Class;

//Calculate c1= new Calculate();
//int sum = c1.Sum(5, 10);
//Console.WriteLine(sum);


//Task 1: Array - dakı bütün sözləri birləşdirin
//Tələb: Verilən bir string massivindəki bütün
//	sözləri StringBuilder-dən istifadə edərək birləşdirin.
//	Hər sözün arasına bir boşluq əlavə edin.

//using System.Text;

//string[] words = { "Nurana", "Salam", "Hello", "hiii" };
//StringBuilder sb = new StringBuilder();

//foreach (string word in words)
//{
//	sb.Append(word).Append(" ");
//}

//Console.WriteLine(sb.ToString().Trim
//


//Task 2: Verilmiş array-də tək uzunluqlu sözləri birləşdirin
//Tələb: Verilən string massivində yalnız tək uzunluqlu 
//	sözləri seçib StringBuilder ilə birləşdirin.

//using System.Text;

//string[] words = { "task", "yerine", "az", "yetirildi", "ne" };
//StringBuilder sb = new StringBuilder();

//foreach (string word in words)
//{
//	if (word.Length % 2 != 0) 
//	{
//		sb.Append(word).Append(" ");
//	}
//}

//Console.WriteLine(sb.ToString().Trim());