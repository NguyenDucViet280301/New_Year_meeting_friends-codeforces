/*
Ý tưởng:
    1. giả sử tọa độ của 2 người bạn là x1, x2, x3.
    2. Một cách tối ưu để giảm tổng khoảng cách là để ba người gặp nhau ở tọa độ của người 
       ở giữa (median) của ba điểm x1, x2, x3.
    3. Tại sao lại như vậy? Vì khi gặp nhau ở vị trí trung gian, tổng quãng đường sẽ nhỏ nhất.
Bước làm:
    1. Sắp xếp 3 điểm x1, x2, x3.
    2. Chọn vị trí chung vị là x2.
    3. Tính tổng quãng đường mà hai người còn lại phải đi để gặp người thứ hai.
*/

#include <stdio.h>

int main() {
    int x1, x2, x3;
    
    // Đọc vào tọa độ của ba người bạn
    scanf("%d %d %d", &x1, &x2, &x3);
    
    // Sắp xếp ba số nguyên x1, x2, x3
    // Cách đơn giản nhất là sử dụng điều kiện hoán đổi
    if (x1 > x2) {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (x1 > x3) {
        int temp = x1;
        x1 = x3;
        x3 = temp;
    }
    if (x2 > x3) {
        int temp = x2;
        x2 = x3;
        x3 = temp;
    }
    
    // Tổng quãng đường tối thiểu để ba người gặp nhau tại điểm x2
    int total_distance = (x2 - x1) + (x3 - x2);
    
    // In ra tổng quãng đường tối thiểu
    printf("%d\n", total_distance);
    
    return 0;
}
