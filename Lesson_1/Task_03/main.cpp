#include <iostream>

using namespace std;

int main()
{
    int stars = 0;
    cout << "Enter amount height:--> ";
    cin >> stars;
    cout << endl;

    stars = stars * 2;
    for ( int height = 0; height < stars; height++ ) {
        for ( int width = 0; width < stars; width++ ) {

            bool isStar = false;

            for ( int layer = 0; layer < stars / 2; layer += 2 ) {
                int min = layer;
                int max = stars - 1 - layer;

                if ( height == min && width >= min && width <= max ) {
                    if ( !(layer == 0 && width == min) )
                        isStar = true;
                }
                else if ( width == max && height >= min && height <= max )
                    isStar = true;
                else if ( height == max && width >= min && width <= max )
                    isStar = true;
                else if ( width == min && height > min + 1 && height < max - 1 )
                    isStar = true;
            }
            cout << ( isStar ? "*" : " " );
        }
        cout << endl;
    }

    // for ( int height = 0; height < stars; height++ ) {
    //     for (int space = 0; space < stars - height - 1; space++ )
    //         cout << " ";
    //     for ( int width = 0; width < 2 * height + 1; width++ )
    //         cout << "*";
    //     cout << endl;
    // }

    // for ( int height = 1; height < stars; height++ ) {
    //     for (int space = 0; space < height; space++ )
    //         cout << " ";
    //     for ( int width = 0; width < 2 * (stars - height) -1; width++ )
    //         cout << "*";
    //     cout << endl;
    // }

    return 0;
}

