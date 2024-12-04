//Tasks:
//Classlarin metodlarini main methodunda cagirib ishledin.
//1) Account adinda class yaradib, onun icinde Login methodu yazin.
//Hemin login methoduna username ve password gelecek.
//Username cavid123 ve password Cavid1993 -e beraberdirse ekrana giriw ugurludur yazilsin,
//eks halda email ve ya password sehvdir cixsin.

//using GeneralC_Tasks;

//Account a1 = new Account();
//Console.WriteLine("Enter username: ");
//string username = Console.ReadLine();
//Console.WriteLine("Enter password: ");
//string password = Console.ReadLine();
//a1.Login(username, password);


//2) Factorial adinda class yaradin , hemin clasin icinde reqem qebul edib hemin
//reqemin factorialini hesablayan method yazin.

//using GeneralC_Tasks;
//Factorial f1 = new Factorial();
//f1.FindFactorial(5);


//3)Calculator adinda class yaradirsiz, hemin classin icinde Calculation metodunuz olur.
//Method 2 parametr qebul edir. 4 emeliyyati (+,-,*,/)hesablayan calculator olacaq.
//Reqemler ve operatorlar console(readline)-dan daxil edilmelidir.

//using GeneralC_Tasks;

//Calculator c1 = new Calculator();
//decimal num1, num2;
//Console.WriteLine("Enter num1:");
//num1 = Decimal.Parse(Console.ReadLine());
//Console.WriteLine("Enter num2:");
//num2 = Decimal.Parse(Console.ReadLine());
//c1.Calculation(num1,num2);


//4.Classdan nece object yaradildigini saymaq  
//person1 (Id=1)
//person2 (Id=2);

//using GeneralC_Tasks;
//Person p1 = new Person();
//Person p2 = new Person();
//Person p3 = new Person();
//int totalObjectCount = Person.GetObjectCount();
//Console.WriteLine($"Umumi say: {totalObjectCount}");



//5.Notebook class
//-Brand
//- Model
//- Price
//- ShowInfo() - bu metod işə düşdükdə console pəncərəsinə notebook obyektinin
//Brand, Model və Price dəyərləriniyazdırır


//Brand və Model dəyərləri təyin olunmadan product obyketi yaradıla bilməsin.
//Daha sonra Main hissəsində Notebook array düzədin, 
//özünüzdən obyektlər yaradın array-ə yerləşdirin.
//Daha sonra program run olduqda arraydəki productların qiymətlərinin ortalamasını hesablayıb
//göstərsin.

//using GeneralC_Tasks;
//Notebook notebook1 = new Notebook("Apple", "MacBook Pro", 4500);
//Notebook notebook2 = new Notebook("HP", "Pavilion", 2700);
//Notebook notebook3 = new Notebook("Lenovo", "ThinkPad", 2000);
//Notebook notebook4 = new Notebook("Asus", "ZenBook Duo", 1900);

//Notebook[] notebooks=new Notebook[] {notebook1,notebook2,notebook3,notebook4};

//Console.WriteLine("Notebooks info:");
//foreach (var notebook in notebooks)
//{
//	notebook.ShowInfo();
//}

//decimal totalPrice = 0;
//foreach (var notebook in notebooks)
//{
//	totalPrice += notebook.Price;
//}
//decimal averagePrice=totalPrice/notebooks.Length;
//Console.WriteLine($"\nNotebook-larin orta qiymeti: {averagePrice} AZN");

