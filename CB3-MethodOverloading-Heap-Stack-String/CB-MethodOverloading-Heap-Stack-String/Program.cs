//1.string ve stringlerden ibaret array qebul eden method olacaq.Hemin method
//arrayin icindeki gelen string ile baslayan sozlerin sayini geri qaytarsin
//(string methodlari isletmek lazimdir)

//static int GetStrCountCondition(string str, string[]words)
//{
//	int count = 0;
//	foreach (var word in words)
//	{
//		if (word.StartsWith(str))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//Console.WriteLine("Add string: ");
//string str=Console.ReadLine();
//string[] words = { "Nurana", "Nunu", "Nurka", "Nurus","Alisha","Melisha"};
//int result=GetStrCountCondition(str, words);
//Console.WriteLine(result);



//2.Parametr olaraq string qebul eden metod yazmalisiz.
//Hemin metod qebul etdiyi stringi tersine formada ekranda gostersin.
//(Salam gelirse , ekranda malaS gorsensin).

//static string Reverse(string text)
//{
//	string copytext="";
//	for (int i = text.Length-1; i >=0; i--)
//	{
//		copytext += text[i];
//	}
//	return copytext;
//}

//Console.WriteLine("Text daxil edin:");
//string text = Console.ReadLine();
//string result=Reverse(text);
//Console.WriteLine(result);



//3.n ededi gelir. 2-ni hansisa quvvete yukseltdikde n-in alinan cavaba beraber
//olub-olmamasını tapın.Meselen: Cavablar ola biler:2,4,8,16,32 ve s. Yeni n bele ededler olmalidir.

//static bool IsPowerOfTwo(int n)
//{
//	if (n <= 0) return false;

//	while (n > 1)
//	{
//		if (n % 2 != 0) 
//		{
//			return false;
//		}
//		n /= 2; 
//	}

//	return true; 
//}
//Console.Write("Ededi daxil edin: ");
//int n = int.Parse(Console.ReadLine());

//if (IsPowerOfTwo(n))
//{
//	Console.WriteLine($"{n} 2-nin hansisa quvvetine beraberdir.");
//}
//else
//{
//	Console.WriteLine($"{n} 2-nin hec bir quvvetine beraber deyil.");
//}


//4.Verilmish arrayin-in elementlerinin icinden 1-20 arasinda olanlarinin hasilini tapmaq.
//Mes ([1,3,55,6,33], cavab : 18).

//static int FindMultiply(int[] arr)
//{
//	int hasil = 1;
//	foreach (var item in arr)
//	{
//		if (item>1 && item<20)
//		{
//			hasil *= item;
//		}
//	}
//	return hasil;
//}
//int res = FindMultiply(new int[] { 1, 2, 44, 8, 2, 1 });
//Console.WriteLine(res);




//5.Verilmish arrayin elementlerininden cut olanlarinin
//ceminin kvadratini tapmaq.

//static int ArraySumFind(int[] arr)
//{
//    int sum = 0;
//	foreach (var item in arr)
//	{
//		if (item%2==0)
//		{
//			sum += item;
//		}
//	}
//	return sum*sum;
//}
//int res = ArraySumFind(new int[] { 2, 3, 1, 4, 9,10});
//Console.WriteLine(res);
