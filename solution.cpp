#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // getting the input
    int N, X;
    cout << "Enter N: "; cin >> N;
    vector<int> array[N];
    for (int i=0; i<N; i++){
        cout << "Element " << i+1 << ": "; cin >> array[i];
    }
    cout << "Enter X: "; cin >> X;

    // Creating a vector to store the product of sum pairs
    vector<int> sum_pairs_product;
    
    // finding the sum pairs and appending it into sum_pairs_product vector
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            if (array[i] + array[j] == X){
                sum_pairs_product.push_back(array[i]*array[j]);
            }
        }
    }

    // counting distinct elements in sum_pairs_product to get the number
    // of unique pairs
    int count = 0, len = sum_pairs_product.size(), x, y;
    for (x=0; x<len; x++){
        for (y=0; y<x; y++){
            if (sum_pairs_product[x] == sum_pairs_product[y]){
                break;
            }
        }
        if (x == y){
            count++;
        }

        // display count
        cout << count << endl;
    }
    return 0;
}
