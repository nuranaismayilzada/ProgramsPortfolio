//1) n ededi gelir. N ededi cutdurse ekrana yazilsin cutdur, tekdirse yazilsin tekdir
//static void NumberFind(int n)
//{
//	if (n%2==0)
//	{
//		Console.WriteLine("Eded cutdur");
//	}
//	else if (n % 2 == 1)
//	{
//		Console.WriteLine("Eded tekdir");
//	}
//	else
//	{
//		Console.WriteLine("Eded 0-a beraberdir");
//	}
//}
//NumberFind(1);



//2) m ededi gelir. 1 - den m ededine kimi olan ededleri ekranda gosterin.
//static void NumbersPrint(int m)
//{
//	int l = 1;
//	while (m >= 1)
//	{
//		Console.WriteLine(l);
//		l++;
//		m--;
//	}
//}
//NumbersPrint(15);


//3) m ededi gelir. 1 - den m ededine kimi olan ededlerin cemini ekranda gostermek.
//static void SumOfNumbers(int m)
//{
//	int sum = 0;
//	while (m > 0)
//	{
//		sum += m;
//		m--;
//	}
//	Console.WriteLine($"Cem: {sum}");
//}
//SumOfNumbers(5);


//4) m ededi gelir. 1 - den m ededine kimi olan tek ededlerin sayini ekranda gostermek.
//static void OddNumbersCountPrint(int m)
//{
//	int counter = 0;
//	while (m > 0)
//	{
//		if (m % 2 != 0)
//		{
//			counter++;
//		}
//		m--;
//	}
//	Console.WriteLine($"counter: {counter}");
//}
//OddNumbersCountPrint(10);



//5) n ve m ededlerinin arasindaki cut olanlarin cemini tapin.
//static void SumNumbersPrint(int n,int m)
//{
//	int sum = 0;
//	while (m >= n)
//	{
//		if (n % 2 == 0)
//		{
//			sum += n;
//		}
//		n++;
//	}
//	Console.WriteLine($"Sum: {sum}");
//}

//SumNumbersPrint(3, 7);



//6) Gelen ededin faktorialini hesablayin.
//static int FindNumberFactorial(int n)
//{
//	int factorial = 1;
//	int result = 1;
//	while (n >= factorial)
//	{
//		result *= factorial;
//		factorial++;
//	}
//	return result; 
//}
//int result = FindNumberFactorial(4);
//Console.WriteLine(result);

//7) Verilmish arrayin icerisindeki cut ededlerin hasilini tapin
//static int FindMultiply(int[] arr)
//{
//	int multiply = 1;
//	for (int i = 0; i < arr.Length; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			multiply *= arr[i];
//		}
//	}
//	return multiply;
//}
//int result = FindMultiply(new int[]{3,4,5,6});
//Console.WriteLine(result);




//8) Verilmiş n - ədədinin 3-ə və 7-ə bölünüb-bölünməməsini tapın.

//static void Find(int n)
//{
//	if (n % 3 == 0 && n % 7 == 0)
//	{
//		Console.WriteLine("Eded 3 ve 7-e bolunur!");
//	}
//	else
//	{
//		Console.WriteLine("Eded 3 ve 7-ye eyni anda bolunmur!");
//	}
//}
//Find(56);


//9) n və m ədədləri verilir. Əgər n və m ədədləri hər ikisi cütdürsə n və m ədədlərinin cəmini hesablayın.
//static void SumNumbers(int n,int m)
//{
//	if (n % 2 == 0 && m % 2 == 0)
//	{
//		Console.WriteLine($"Bu ededlerin her ikisi cutdur ve cemi: {n + m}");
//	}
//	else
//	{
//		Console.WriteLine("Bu ededlerin her ikisi cut deyil");
//	}
//}
//SumNumbers(10, 20);


//10) Verilmis n ve m (n<m) ededleri arasindaki tek ededlerin cemini tapin.
//static void OddNumbersSum(int n,int m)
//{
//	int sum = 0;
//	while (m > n)
//	{
//		if (n % 2 != 0)
//		{
//			sum += n;
//		}
//		n++;
//	}
//	Console.WriteLine($"Tek ededlerin cemi:{sum}");
//}

//OddNumbersSum(10, 16);

//11) Verilmish arrayin icindeki tek ededlerin cemini tapin.

//static void OddArraySum(int[] numbers)
//{
//	int sum = 0;
//	for (int i = 0; i < numbers.Length; i++)
//	{
//		if (numbers[i] % 2 != 0)
//		{
//			sum += numbers[i];
//		}
//	}
//	Console.WriteLine($"Tek ededlerin cemi: {sum}");

//}
//OddArraySum(new int[] { 4, 9, 22, 10 });




//12) Verilmish arrayin icindeki cut ededlerin sayini tapin.

//static void FindCounter(int[] numbers)
//{
//	int counter = 0;
//	for (int i = 0; i < numbers.Length; i++)
//	{
//		if (numbers[i] % 2 == 0)
//		{
//			counter++;
//		}
//	}
//	Console.WriteLine($"Cut ededlerin sayi: {counter}");
//}

//FindCounter(new int[] { 3, 4, 5, 9 });



//13) n ededi gelir. N ededinin sade ve ya murekkeb oldugunu tapin.

//static void FindNumber(int n)
//{
//	int bolen = 1;
//	int counter = 0;
//	bool check = true;
//	while (check)
//	{
//		while (n >= bolen)
//		{
//			if (n % bolen == 0)
//			{
//				counter++;
//			}
//			bolen++;
//		}
//		if (counter == 2)
//		{
//			Console.WriteLine("Eded sadedir");
//			check = false;
//		}
//		else
//		{
//			Console.WriteLine("Eded murekkebdir");
//			check = false;
//		}
//	}
//}
//FindNumber(11);


//static void GetNumsOfArray(int[] numbers)
//{
//	foreach (var item in numbers)
//	{
//		Console.WriteLine(item);
//	}
//}
//int[] nums = {1,2,3,4,5,6,7};
//GetNumsOfArray(nums);







//static bool Search(string studentName)
//{
//	string[] students = { "Nurana", "Ismayil", "Alisa", "Melisa", "Nuray", "Ruzgar" };
//	foreach (var student in students)
//	{
//		if (student==studentName)
//		{
//			return true;
//		}
//	}
//	return false;
//}

//Console.WriteLine("Enter name:");
//string name=Console.ReadLine();
//bool result=Search(name);
//if (result)
//{
//	Console.WriteLine("name is found");
//}
//else {
//
//	Console.WriteLine("name is not found");
//}