#include <iostream>

int fibo(int n) {
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main(int argc, char *argv[])
{
	int n;
	char p = 'y';
	while (p != 'q') {
		std::cout<<"-------------FibCalc--------------"<<std::endl;
		std::cout<<"Give a positive number: ";
		std::cin>>n;
		if(n > 0)
			std::cout<<"Fibonacci number from n="<<n<<": "<<fibo(n)<<std::endl;
		else
			std::cout<<"Given negative number\n";
		std::cout<<"-----------Program details--------\n";
		std::cout<<"Program name: FibCalc\n";
		std::cout<<"Author name: Sylwester Kot\n";
		std::cout<<"Group: 2.1/2\n";
		std::cout<<"To quit type q: ";
		std::cin>>p;
	}
}