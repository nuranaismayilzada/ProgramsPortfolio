using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


//1)Method array qebul edir, arrayin icerisindeki tek ededlerin cemini tapin.
//     2)Methoda gelen ededin tek ve ya cut olub olmamasini gosterin.
//     3) Methoda gelen arrayin elementlerininden cut olanlarinin ceminin kvadratini tapmaq.
//     4) Methoda n ededi gelir, 1-den n ededine qeder olan ededlerin hasilini tapin.
namespace classlar
{
    internal class CustomMath
    {
        public int Id;
        public double Value;
        public void SumFindNumbers(int[] arr)
        {
            int Sum = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    Sum += arr[i];
                }
            }
            Console.WriteLine($"Sum:{Sum}");
        }
        public void OddorSingleNumber(int num)
        {
            if (num % 2 == 0)
            {
                Console.WriteLine("Eded cutdur");
            }
            else
            {
                Console.WriteLine("Eded tekdir");
            }
        }
        public void OddNumbersSum(int[] arr)
        {
            int Sum = 0;
            for (int i = 0; i < arr.Length; i++) { 
                if (arr[i] % 2 == 0)
                {
                    Sum += arr[i];
                }
            }
            Console.WriteLine($"Result:{Sum*Sum}");
        }
        public void FactorialFind(int num) {
            int multiply = 1;
            while (num > 1) { 
                multiply *= num;
                num--;
            }
            Console.WriteLine($"Factorial:{multiply}");
        }
    }
}
