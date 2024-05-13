

#include <iostream>
#include <string>
/*
int main(){

    std:: string a;
    std::cout << "enter ... \n";
    std::cin >> a; 

    

    for (int i = 0; i < 2; i++) {


        std::cout << a << " \n";

    }




}

*/

/*
void main () {


    int a;

    std::cout << "enter ... \n";
    std::cin >> a;

    for (int i = 0; i < a; i++) {

        std::cout << "Hello world \n";


    }

      

}

*/


/*

int main () {


    int n;

    int  s = 0;

    std::cout << "enter n \n";
    std::cin >> n;
    std::cout << " \n";


    for (int i = 0; i < n; i++)
    {
        s++;

        std::cout << s << '\n';




    }


    std::cout << " \n";

}

*/



/*

int main () {


    int num;

    std::cout << "enter number \n";

    std::cin >> num;

    for (int i = 0; i <= num; i++ ) {


    


    if (i % 2 == 0) {


        std::cout << i << ' ';

    }

    }


}
*/

/*

int  main () {

    int height;
    int width;

std::cout << "width  \n";
std::cin >> width;

std::cout << "height  \n";
std::cin >> height;

for (int i = 0; i < height; i++) {


    for (int i = 0; i < width; i++) {


        std::cout << "#";

    }
    std::cout << "\n";

}



}

*/

/*
int main()
{
    int a ;
    int b ;
    int c = 99;
    int d = 0;
  

    std::cout << "enter number  \n";
    std::cin >> a;

    do {
        c = a;
        d = -1;
    } while (d == 1);



    for (int i = 0; i < c; i++) {


        std::cout << "enter next n...  \n";

        std::cin >> b;


        if (b > a) {

            a = b;

        }
    }

        

       std::cout << "MAX____" << a << '\n';
     


        std::cout << '\n';
        std::cout << '\n';
        std::cout << '\n';
        

    }

    */

/*
int main()
{
    int n;
    int i = 0;
    
    std::cout << "enter n \n";
    std::cin >> n;

    while (1) {

        for ( i ; i <= n; i++) {



            if (i % 3 != 0 && i != 13) {


                std::cout << i << " ";



            }
            else if (i % 3 == 0)
            {
                std::cout << " ";

            }

          if (i / 13 == 1) {

                
                break;
            }

        }

        std::cout << i << " \n";

        if (i /13 == 1) {

            std::cout << " end i%13 = 0 ";
            std::cout << " \n";
            std::cout << " \n";
            std::cout << " \n";
            break;
        }

    }

}

*/







int main() {
    std::string text;

    std::cout << "enter text\n";

    while (true) {
        std::getline(std::cin, text);

        
        if (text.empty()) {
            break;
        }

      
        std::cout << text << std::endl;
        std::cout << text << std::endl;
    }

    return 0;
}



