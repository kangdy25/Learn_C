#define _CRT_SEQURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000

int main(void)
{
    char line[MAX];
    char contents[MAX];
    char password[20];
    char c;

    printf("'비밀일기'에 오신 것을 환영합니다.\n");
    printf("비밀번호를 입력하세요 : ");

    int i = 0;
    while (1)
    {
        c = getch();
        if (c == 13)
        {
            password[i] ='\0';
            break;
        }
        else
        {
            printf("★ ");
            password[i] = c;
        }
        i++;
    }

    printf("\n\n === 비밀번호 확인 중... ===\n\n");
    if (strcmp(password, "skehzheld") == 0)
    {
        printf(" === 비밀번호 확인 완료 ===\n\n");
        char *fileName = "C:\\doit-C\\C_SideProject\\MySecretDiary.txt";
        FILE *file = fopen(fileName, "a+b");
        
        if(file == NULL)
        {
            printf("파일 열기 실패\n");
            return 1;
        }

        while (fgets(line, MAX, file) != NULL)
        {
            printf("%s", line);
        }

        printf("\n\n 내용을 계속 작송하세요!! 종료하시려면 EXIT를 입력하세요.\n\n");

        while (1)
        {
            scanf("%[^\n]", contents);
            getchar();

            if (strcmp(contents, "EXIT") == 0)
            {
                printf("비밀일기 입력을 종료합니다.\n\n");
                break;
            }
            fputs(contents, file);
            fputs("\n", file);
        }
        fclose(file);
    }
    else
    {
        printf(" === 비밀번호가 틀렸어요 ===\n\n");
        printf("꺅!! 당신 누구야?!?!? 감히 내 일기장을!!\n\n\n");
    }

    return 0;
}