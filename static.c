#include <stdio.h>
int addtogalla(int money) {
    static int totalBalance = 0;
    
    totalBalance += money;
    printf("takle tevva:+%d Rs | taklyvar akun rakkam: %d Rs\n", money, totalBalance);
}

int main() {
    addtogalla(10);
    addtogalla(50); 
    
}

