// #include <iostream>
// using namespace std;

// class Vector{
//     public:
//         int *arr;
//         int size;
//         Vector(int m){
//             size = m;
//             arr = new int[size];
//         }
//         int dotProduct(Vector &v){
//             int d = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 d += this->arr[i] * v.arr[i];
//             }
//             return d;

            
//         }
// };




// int main() {

//     Vector v1(3);
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     Vector v2(3);
//     v2.arr[0] = 1;
//     v2.arr[1] = 0;
//     v2.arr[2] = 1;
//     int ans;
//     ans = v1.dotProduct(v2);
//     cout<<"Dot Product is : "<<ans<<endl;


//     return 0;
// }


#include <iostream>
using namespace std;

template <class T>

class Vector{
    public:
        T *arr;
        int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;

            
        }
};




int main() {

    Vector<float> v1(3);
    v1.arr[0] = 4.4;
    v1.arr[1] = 3;
    v1.arr[2] = 1.7;
    Vector<float> v2(3);
    v2.arr[0] = 1.5;
    v2.arr[1] = 0.9;
    v2.arr[2] = 1.8;
    float ans;
    ans = v1.dotProduct(v2);
    cout<<"Dot Product is : "<<ans<<endl;te


    return 0;
}