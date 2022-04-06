#include <iostream>


using namespace std;

int main()
{
    //변수
    /* 
    1)이름 : testNum 2)크기 : 4byte 3)값 : 2.8  4)메모리주소 : 000000F9AE2FF5D4
    */
    float testNum = 2.8f;
    double testNum1 = 2.8;

    cout << sizeof(testNum) << endl; //크기 알려면 앞에 sizeof
    cout << &testNum << endl; //메모리주소 보기 변수 앞에 &붙이기
    cout << testNum << endl<< endl;

    std::cout << "Hello World!\n";

   


    //실습 1.상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일축하메시지를 출력하는 프로그램을 만들어보자.
    /*
    예시)
         상대방 이름을 입력하세요.
         _상대 이름 (이진호)

         본인의 이름을 입력하세요.
         _본인 이름 (김균지)

         상대방 나이를 입력하세요.
         _상대 나이 (25)

         본인 이름(김균지) : 상대 이름(이진호)님 상대 나이(25)살 생일을 축하합니다.
    */

    //1. 변수 선언 하기 
    int age;
    string yourname;
    string myname;

  
    //아웃 설정 << 
    //인 설정>>
    //한글, 부호 길어지는 거 "" 쓰기
    //영문이나 부호 하나는 ''괜춘
    // ;주의 -문장 아무때나 끝내지 않기



    cout << "상대방 이름을 입력하세요." << endl;
    cin >> yourname;
    cout << "본인 이름을 입력하세요." << endl;
    cin >> myname;
    cout << "상대방 나이를 입력하세요." << endl;
    cin >> age;
    cout << endl << myname << " : " << yourname << "님 " << age << "살 생일을 축하합니다." << endl << endl << endl;

    // 조건) 상대방 이름을 입력하세요 : yourname
    cout << "상대방 이름을 입력하세요. : "; cin >> yourname;
   


}

 




