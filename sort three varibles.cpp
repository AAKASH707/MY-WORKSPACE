 //Ref: https://bit.ly/2rcvXK5
#include <iostream>
#include <string>
#include <vector>
template < class T >
void sort3var( T& x, T& y, T& z) {
    std::vector<T> v;
    v.push_back( x ); v.push_back( y ); v.push_back( z );
    bool b = true;
    while( b ) {
        b = false;
        for( size_t i = 0; i < v.size() - 1; i++ ) {
            if( v[i] > v[i+1] ) {
                T t = v[i];
                v[i] = v[i + 1];
                v[i + 1] = t;
                b = true;
            }
        }
    }
    x = v[0]; y = v[1]; z = v[2];
}
int main(int argc, char* argv[]) {
    int x = 2539, y = 0, z = -2560;
    sort3var( x, y, z );
    std::cout << x << "\n" << y << "\n" << z << "\n\n";
 
    std::string xstr, ystr, zstr;
    xstr = "abcd, ABC, xzy";
    ystr = "abc @ example . com!";
    zstr = "(from the \"Page of 123\")";
    sort3var( xstr, ystr, zstr );
    std::cout << xstr << "\n" << ystr << "\n" << zstr << "\n\n";
 
    float xnf = 100.3f, ynf = -36.5f, znf = 12.15f;
    sort3var( xnf, ynf, znf );
    std::cout << xnf << "\n" << ynf << "\n" << znf << "\n\n";
 
    return 0;
}
