#include <iostream>

int main(){
    int square_sums{0};
    int sum_squares{0};
    for (int i{1}; i<=100 ; i++){
        sum_squares+=i*i;
        square_sums+=i;
    }
    square_sums*=square_sums;
    int result{square_sums - sum_squares};
    
    std::cout<<result;
}
//25164150