/* PART3 Chapter3 연습문제 3
파일 source.txt의 내용을 파일 dest.txt에 복사하는 프로그램을 만들어 보세요.
단, 5바이트마다 내용을 거꾸로 뒤집어 보세요. 예를 들어 파일 source.txt의 내용이
12345abcdefgh라면 프로그램 실행 후에 파일 dest.txt의 내용은 54321edcbahgf가 되어야
합니다. 문자열의 끝에는 종료 문자(\0)가 들어가는 점을 이용하세요.
*/
#include <stdio.h>
int main()
{
    char array1[50];
    char array2[50];
    int i, j, k;
    FILE* stream1;
    FILE* stream2;
    
    char input;
    
    stream1 = fopen("source.txt", "r");
    stream2 = fopen("dest.txt", "w");
    
    for (i=0; i<50; i++) {
        array1[i] = 0;
        array2[i] = 0;
    }
    
    for(i=0; input != EOF; i++) {
        input = fgetc(stream1);
        
        array1[i] = input;
    }
    
    array1[i-1] = '\0';
    
    
    k = 0;
    
    for(j=0; j<i-1; j++) {
        if((j%5 == 0 && j >= 5)) {
            k += 10;
            
            if(i-2-j < 5) {
                k -= 4-(i-2-j);
            } 
            
            printf("-------------\n");
        }
        
        array2[j] = array1[4+k-j];
        printf("[%d/%d] <- %c\n", j, i-2, array1[4+k-j]);
    }
    
    printf("%s\n", array1);
    printf("%s", array2);
    
    fprintf(stream2, "%s", array2);
    
    fclose(stream1);
    fclose(stream2);
    return 0;
}

//  
//  main.c
//  testProject
//  출처
//  Created by Sung Tae Ryu on 12. 2. 26..
//  Copyright (c) 2012년 thinksquare. All rights reserved.
//