//1) Parametr olaraq string qebul eden metod yazmalisiz.
//Hemin metod qebul etdiyi stringi tersine formada ekranda gostersin.
//(Cavid gelirse , ekranda divaC gorsensin).

//static void reverseExchangeWord(string str)
//{
//	string reverseStr = "";
//	for (int i =str.Length-1; i >=0; i--)
//	{
//		reverseStr += str[i];	
//	}
//    Console.WriteLine(reverseStr);
//}
//reverseExchangeWord("NuraNa");


//-----------------------------------------------------------------------------------



//2) Ashagidaki tapshiriqlari method istifade ederek yazin.
//Butun alqoritmler ayri method seklilinde yazilmalidir.
//Methodlar hamisi parametr qebul etmelidir. 

//1) Verilmiş n - ədədinin 3-ə və 7-ə bölünüb-bölünməməsini tapın.

//static void isDivision(int n)
//{
//	if(n%3==0 && n % 7 == 0)
//	{
//        Console.WriteLine("Verilmis eded 3 ve 7 ye tam bolunur.");
//    }
//	else
//	{
//        Console.WriteLine("Verilmis eded 3 ve 7 ye tam bolunmur.");
//    }
//}
//isDivision(22);


//-----------------------------------------------------------------------------------


//2) n və m ədədləri verilir. Əgər n və m ədədləri hər ikisi cütdürsə
//n və m ədədlərinin cəmini hesablayın.


//static void checkNumbers(int n,int m)
//{
//	if (n %2 == 0 && m % 2 == 0)
//	{
//        Console.WriteLine(n+m);
//    }	
//}
//checkNumbers(8, 2);


//-----------------------------------------------------------------------------------


//3) Verilmis n ve m (n<m) ededleri arasindaki tek ededlerin sayini tapin.

//static void findCount(int n,int m)
//{
//	int count = 0;
//    while (m>n)
//    {
//        if (n%2!=0)
//        {
//            count++;
//        }
//        n++;
//    }
//    Console.WriteLine(count);
//}
//findCount(4, 11);

//-----------------------------------------------------------------------------------



//4) Verilmis n ve m (n<m) ededleri arasindaki tek ededlerin cemini tapin.

//static void oddSum(int n,int m)
//{
//    int Sum = 0;
//    while (m>n)
//    {
//      if (n%2!=0)
//      {
//            Sum+=n;
//      }
//      n++;
//    }
//    Console.WriteLine(Sum);
//}
//oddSum(2, 9);


//-----------------------------------------------------------------------------------
//5)Verilmish arrayin icindeki tek ededlerin cemini tapin.

//static void oddSumFind(int[] arr)
//{
//	int Sum = 0;
//	for (int i = 0; i < arr.Length; i++)
//	{
//		if (arr[i] %2!= 0)
//		{
//			Sum+=arr[i];
//		}
//	}
//    Console.WriteLine(Sum);
//}
//oddSumFind(new int[] { 2, 4, 5, 1, 3 ,9});

//-----------------------------------------------------------------------------------


//6)Verilmish arrayin icindeki cut ededlerin sayini tapin.

//static void countFind(int[] arr)
//{
//	int count = 0;
//	for (int i = 0; i < arr.Length; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			count++;
//		}
//	}
//	Console.WriteLine(count);
//}
//countFind(new int[] { 2, 4, 5, 1, 3, 9,4 });

//-----------------------------------------------------------------------------------

//7) Verilmis n tam ededinin sade ve ya murekkeb oldugunu tapin.

//static void Test(int n)
//{
//	int division = 1;
//	int count = 0;
//	while (n >= division)
//	{
//		if (n % division == 0)
//		{
//			count++;
//		}
//		division++;
//	}
//	if (count == 1 || count==2)
//	{
//        Console.WriteLine("Bu eded sadedir");
//    }
//	else
//	{
//        Console.WriteLine("Bu eded murekkebdir");
//    }
//}

//Test(4);
//Test(5);
//Test(6);
//Test(12);
//Test(13);

//-----------------------------------------------------------------------------------

//8)Verilmish arrayin-in elementlerinin icinden 1-20 arasinda olanlarinin hasilini tapmaq.
//Mes ([1,3,55,6,33], cavab : 18).

//static void multiplyOddNumbers(int[] arr)
//{
//    int multiply = 1;
//    for (int i = 0; i < arr.Length; i++)
//    {
//        if (arr[i]>1 && arr[i]<20)
//        {
//            multiply *= arr[i];
//        }
//    }
//    Console.WriteLine(multiply);
//}
//multiplyOddNumbers(new int[] { 1, 5, 77, 45, 7 });

//-----------------------------------------------------------------------------------

//9)Verilmish arrayin elementlerininden cut olanlarinin ceminin kvadratini tapmaq.

//static void Test(int[] arr)
//{
//	int Sum = 0;
//	for (int i = 0; i < arr.Length; i++)
//	{
//		if (arr[i] %2== 0)
//		{
//			Sum += arr[i];
//		}
//	}
//	Console.WriteLine(Sum*Sum);
//}
//Test(new int[] { 2, 4, 7, 9, 1 });

//-----------------------------------------------------------------------------------

//10) n ededi gelir. 2-ni hansisa quvvete yukseltdikde n-in alinan cavaba beraber
//olub-olmamasını tapın.Meselen: Cavablar ola
//biler:2,4,8,16,32 ve s. Yeni n bele ededler olmalidir.

//static bool IsPowerOfTwo(int n)
//{
//	if (n < 1) return false;

//	while (n % 2 == 0)
//	{
//		n /= 2;
//	}
//	return n == 1;
//}
//int n = 16;
//Console.WriteLine(IsPowerOfTwo(n)); 

//-----------------------------------------------------------------------------------
