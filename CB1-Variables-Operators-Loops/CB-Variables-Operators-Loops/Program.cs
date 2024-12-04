//1) n ededi gelir. N ededi cutdurse ekrana yazilsin cutdur, tekdirse yazilsin tekdir
//int n=6;
//if (n%2==0)
//{
//	Console.WriteLine("Cutdur");
//}
//else if (n % 2 == 1)
//{
//	Console.WriteLine("Tekdir");
//}
//else
//{
//	Console.WriteLine("Eded 0-a beraberdir!");
//}


//2) m ededi gelir. 1 - den m ededine kimi olan ededleri ekranda gosterin.
//int m = 10;
//int l = 1;
//while (m >= 1)
//{
//	Console.WriteLine(l);
//	l++;
//	m--;
//}



//3) m ededi gelir. 1 - den m ededine kimi olan ededlerin cemini ekranda gostermek.
//int m=4;
//int sum = 0;
//while (m>0)
//{
//	sum += m;
//	m--;
//}
//Console.WriteLine($"Cem: {sum}");


//4) m ededi gelir. 1 - den m ededine kimi olan tek ededlerin sayini ekranda gostermek.

//int m = 7;
//int counter = 0;
//while (m > 0)
//{
//	if (m%2!=0)
//	{
//		counter++;
//	}
//	m--;
//}
//Console.WriteLine($"counter: {counter}");




//5) n ve m ededlerinin arasindaki cut olanlarin cemini tapin.
//int n = 1;
//int m = 6;
//int sum = 0;
//while (m>=n)
//{
//	if (n%2==0)
//	{
//		sum += n;
//	}
//	n++;
//}
//Console.WriteLine($"Sum: {sum}");


//6) Gelen ededin faktorialini hesablayin.
//int n = 4;
//int factorial = 1;
//int result = 1;
//while (n>=factorial)
//{
//	result *= factorial;
//	factorial++;
//}
//Console.WriteLine($"Result:{result}");



//7) Verilmish arrayin icerisindeki cut ededlerin hasilini tapin
//int[] arr = { 2, 4, 1, 3, 9, 6 };
//int multiply = 1;
//for (int i = 0; i < arr.Length; i++)
//{
//	if (arr[i]%2==0)
//	{
//		multiply *= arr[i];
//	}
//}
//Console.WriteLine($"Multiply:{multiply}");



//8) Verilmiş n - ədədinin 3-ə və 7-ə bölünüb-bölünməməsini tapın.
//int n = 21;
//if (n%3==0 && n%7==0)
//{
//	Console.WriteLine("Eded 3 ve 7-e bolunur!");
//}
//else
//{
//	Console.WriteLine("Eded 3 ve 7-ye eyni anda bolunmur!");
//}



//9) n və m ədədləri verilir. Əgər n və m ədədləri hər ikisi cütdürsə n və m ədədlərinin cəmini hesablayın.
//int n = 6;
//int m = 5;
//if (n%2==0 && m%2==0)
//{
//	Console.WriteLine($"Bu ededlerin her ikisi cutdur ve cemi: {n+m}");
//}
//else
//{
//	Console.WriteLine("Bu ededlerin her ikisi cut deyil");
//}


//10) Verilmis n ve m (n<m) ededleri arasindaki tek ededlerin cemini tapin.

//int m = 10;
//int n = 5; 
//int sum = 0;
//while (m>n)
//{
//	if (n%2!=0)
//	{
//		sum += n;
//	}
//	n++;
//}
//Console.WriteLine($"Tek ededlerin cemi:{sum}");


//11) Verilmish arrayin icindeki tek ededlerin cemini tapin.

//int[] numbers = { 3, 5, 6, 9, 10, 12 };
//int sum = 0;
//for (int i = 0; i < numbers.Length; i++)
//{
//	if (numbers[i]%2!=0)
//	{
//		sum += numbers[i];
//	}
//}
//Console.WriteLine($"Tek ededlerin cemi: {sum}");


//12) Verilmish arrayin icindeki cut ededlerin sayini tapin.

//int[] numbers = { 3, 5, 6, 9, 10, 12 };
//int counter = 0;
//for (int i = 0; i < numbers.Length; i++)
//{
//	if (numbers[i] % 2== 0)
//	{
//		counter++;
//	}
//}
//Console.WriteLine($"Cut ededlerin sayi: {counter}");




//13) n ededi gelir. N ededinin sade ve ya murekkeb oldugunu tapin.
//int n = 7;
//int bolen = 1;
//int counter = 0;
//bool check = true;
//while (check)
//{
//	while (n >= bolen)
//	{
//		if (n % bolen == 0)
//		{
//			counter++;
//		}
//		bolen++;
//	}
//	if (counter==2)
//	{
//		Console.WriteLine("Eded sadedir");
//		check = false;
//	}
//	else {
//		Console.WriteLine("Eded murekkebdir");
//		check=false;
//	}
//}
