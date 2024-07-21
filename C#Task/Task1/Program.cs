//1) n ededi gelir. N ededi cutdurse ekrana yazilsin cutdur, tekdirse yazilsin tekdir

//Console.Write("Eded daxil edin:");
//string num = Console.ReadLine();
//int Number = Convert.ToInt32(num);
//if (Number%2==0)
//{
//    Console.WriteLine("Eded cutdur");
//}
//else if(Number %2!= 0)
//{
//    Console.WriteLine("Eded tekdir");
//}
//else
//{
//    Console.WriteLine("Eded 0-a beraberdir.");
//}


//----------------------------------------------------------------------------

//2) m ededi gelir. 1 - den m ededine kimi olan ededleri ekranda gosterin.

//Console.Write("M ededinizi daxil edin:");
//string mStr=Console.ReadLine();
//int m=Convert.ToInt32(mStr);
//int num = 0;
//while (m>num)
//{
//    Console.WriteLine(num);
//    num++;
//}


//----------------------------------------------------------------------------

//3) m ededi gelir. 1 - den m ededine kimi olan ededlerin cemini ekranda gostermek.

//Console.Write("Eded daxil edin:");
//string mStr = Console.ReadLine();
//int m = Convert.ToInt32(mStr);
//int sum = 0;
//while (m >= 1)
//{
//	sum+= m;
//	m--;
//}
//Console.WriteLine(sum);

//----------------------------------------------------------------------------

//4) m ededi gelir. 1 - den m ededine kimi olan tek ededlerin sayini ekranda gostermek.

//Console.Write("Eded daxil edin:");
//string mStr=Console.ReadLine();
//int m=Convert.ToInt32(mStr);
//int count = 0;
//while (m>=1)
//{
//	if (m %2!=0)
//	{
//		count++;
//	}
//	m--;
//}
//Console.WriteLine(count);

//----------------------------------------------------------------------------

//5) m ve n ededlerinin arasindaki cut olanlarin cemini tapin.

//Console.Write("m ededinizi daxil edin:");
//string mStr=Console.ReadLine();
//int m=Convert.ToInt32(mStr);

//Console.Write("n ededinizi daxil edin:");
//string nStr=Console.ReadLine();
//int n=Convert.ToInt32(nStr);

//int sum = 0;
//while (m<n)
//{
//	if (m%2==0)
//	{
//		sum += m;
//	}
//	m++;
//}
//Console.WriteLine($"Sum: {sum}");

//----------------------------------------------------------------------------

//6) Gelen ededin faktorialini hesablayin.


//Console.Write("Ededinizi daxil edin:");
//string str = Console.ReadLine();
//int num = Convert.ToInt32(str);
//int multiply = 1;
//int factorial = 1;
//while (num>=multiply)
//{
//	factorial *= multiply;
//	multiply++;
//}

//Console.WriteLine($"Factorial:{factorial}");

//----------------------------------------------------------------------------


//7) Verilmish arrayin icerisindeki cut ededlerin hasilini tapin
//int[] nums = { 1, 2, 4, 5, 8, 10 };
//int multiply = 1;
//for (int i = 0; i < nums.Length; i++)
//{
//	if (nums[i] % 2 == 0)
//	{
//		multiply *= nums[i]; 
//	}
//}
//Console.WriteLine(multiply);

//----------------------------------------------------------------------------
//8) Verilmiş n - ədədinin 3-ə və 7-ə bölünüb-bölünməməsini tapın.

//Console.Write("n ededinizi daxil edin:");
//string nStr = Console.ReadLine();
//int n = Convert.ToInt32(nStr);
//if (n%3==0 && n%7==0)
//{
//    Console.WriteLine("Eded 3 ve 7 ye tam bolunur.");
//}
//else
//{
//    Console.WriteLine("Eded 3 ve 7 -e tam bolunmur.");
//}

//----------------------------------------------------------------------------

//9) n və m ədədləri verilir. Əgər n və m ədədləri
//hər ikisi cütdürsə n və m ədədlərinin cəmini hesablayın.

//Console.Write("m ededinizi daxil edin:");
//string mStr = Console.ReadLine();
//int m = Convert.ToInt32(mStr);

//Console.Write("n ededinizi daxil edin:");
//string nStr = Console.ReadLine();
//int n = Convert.ToInt32(nStr);

//if (m%2==0 && n%2==0)
//{
//    Console.WriteLine(m+n);
//}
//----------------------------------------------------------------------------

//10) Verilmis n ve m (n<m) ededleri arasindaki tek ededlerin cemini tapin.

//Console.Write("n ededinizi daxil edin:");
//string mStr = Console.ReadLine();
//int n = Convert.ToInt32(mStr);

//Console.Write("m ededinizi daxil edin:");
//string nStr = Console.ReadLine();
//int m = Convert.ToInt32(nStr);

//int sum = 0;

//while (m>n)
//{
//    if (n%2!=0)
//    {
//        sum += n;
//    }
//    n++;
//}
//Console.WriteLine($"Sum:{sum}");

//----------------------------------------------------------------------------

//11) Verilmish arrayin icindeki tek ededlerin cemini tapin.
//int[] arr = { 2, 3, 6, 7 };
//int sum = 0;
//for (int i = 0; i < arr.Length; i++)
//{
//    if (arr[i]%2!=0)
//    {
//        sum += arr[i];
//    }
//}
//Console.WriteLine(sum);

//----------------------------------------------------------------------------
//12) Verilmish arrayin icindeki cut ededlerin sayini tapin.

//int[] arr = { 2, 3, 6,8,10, 7 };
//int count = 0;
//for (int i = 0; i < arr.Length; i++)
//{
//    if (arr[i] % 2 == 0)
//    {
//        count+=1;
//    }
//}
//Console.WriteLine($"Count:{count}");

//----------------------------------------------------------------------------

//13) n ededi gelir. N ededinin sade ve ya murekkeb oldugunu tapin.

//Console.Write("n ededinizi daxil edin:");
//string mStr = Console.ReadLine();
//int n = Convert.ToInt32(mStr);
//int count = 0;
//int divisor = 1;
//while (n >= divisor)
//{
//	if (n % divisor == 0)
//	{
//		count++;
//	}
//	divisor++;

//}
//if(count==1  || count == 2)
//{
//    Console.WriteLine("Bu eded sadedir.");
//}
//else
//{
//    Console.WriteLine("Bu eded murekkebdir");
//}

//----------------------------------------------------------------------------
