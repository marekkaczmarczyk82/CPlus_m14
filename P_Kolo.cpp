#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

	using namespace std;

	void P_Kola( double r );

	int main()
	{
		double r;

			P_Kola( r );

	}

		void P_Kola( double r )
		{

			double P;
			double pi = 3.14159385;

			double a = 11122122.21212,
			       b = 11121212.11212,
			       c = 11212122.12122,
			       d = 12212122.21212,
			       e = 12121212.21212,
			       f = 12121212.21212,
			       g = 12121222.21212,
			       h = 11212122.21212,
			       i,
			       j = 12121212.21212,
			       k = 12122122.12122,
			       m;
			

				cout << "Enter Radius :::\t";
				
				cin >> r;

				P = pi * r * r;

					cout << "P = O :::***::: " << "Radius r :::***<<<" << r << "\t" << "Circular Area::: P :" << P  << "\n\n" << endl;
				
					for( int i = 0; i < 1000; i++ )
					{
						r = r + 1;

							cout << "P = O :::***:::" << "Radius r:::***<<<" << r << "\t" << "Circular Area::: P : " << P <<  endl;
					}

					for( a,b,c,d,e,f,g,h,i,j,k; i < 1000000000; a++,b++,c++,d++,e++,f++,g++,h++,i++,j++,k++ )
					{
							m = m + 1;

						m = sqrt( ( r - a ) * ( r - a ) + ( r - b ) * ( r - b ) + ( r - c ) * ( r - c ) + ( r - d ) * ( r -d ) + ( r-e ) * ( r - e ) + ( r - f ) * ( r - f ) + ( r - g ) * ( r - g ) + ( r - h ) * ( r - h ) + ( r - j ) * ( r - j ) + ( r - k ) * ( r - k ) ) / ( a + b + c + d + e + f + g + h + j + k ) * (i/2);
						cout << "\tM :::***:::\t" << m << "\t:::R:::\t" << r << "\ta:::\t" << a << "\tb:::\t" << b << "\tc:::\t" << c << "\td:::\t" << d << "\te:::\t" << e << "\tf:::\t" << f << "\tg:::\t" << g << "\th:::\t" << h << "\ti:::\t" << i << "\tj:::\t" << j << "\tk:::\t" << k;
					}

		}
