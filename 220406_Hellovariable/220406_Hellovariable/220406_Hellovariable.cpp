#include <iostream>


using namespace std;

int main()
{
//    //변수
//    /* 
//    1)이름 : testNum 2)크기 : 4byte 3)값 : 2.8  4)메모리주소 : 000000F9AE2FF5D4
//    */
//    float testNum = 2.8f;
//    double testNum1 = 2.8;
//
//    cout << sizeof(testNum) << endl; //크기 알려면 앞에 sizeof
//    cout << &testNum << endl; //메모리주소 보기 변수 앞에 &붙이기
//    cout << testNum << endl<< endl;
//
//    std::cout << "Hello World!\n";
//
//   
//
//
//    //실습 1.상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일축하메시지를 출력하는 프로그램을 만들어보자.
//    /*
//    예시)
//         상대방 이름을 입력하세요.
//         _상대 이름 (이진호)
//
//         본인의 이름을 입력하세요.
//         _본인 이름 (김균지)
//
//         상대방 나이를 입력하세요.
//         _상대 나이 (25)
//
//         본인 이름(김균지) : 상대 이름(이진호)님 상대 나이(25)살 생일을 축하합니다.
//    */
//
//    //1. 변수 선언 하기 
//    int age;
//    string yourname;
//    string myname;
//
//  
//    //아웃 설정 << 
//    //인 설정>>
//    //한글, 부호 길어지는 거 "" 쓰기
//    //영문이나 부호 하나는 ''괜춘
//    // ;주의 -문장 아무때나 끝내지 않기
//
//    /* 
//    변수명 이름 규칙
//    1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
//    2. 알파벳, 숫자, _로만 구성할 수 있다. (예외, 숫자로 변수명을 시작할 수 없다.)
//    3. 대/소문자 구분을 한다.
//    4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
//    5. 전부 소문자로 작성한다.
//    6. 축약어를 쓰지 않는다. 
//
//    헝가리안 표기법
//    카멜 표기법
//    */
//
//    cout << "상대방 이름을 입력하세요." << endl;
//    cin >> yourname;
//    cout << "본인 이름을 입력하세요." << endl;
//    cin >> myname;
//    cout << "상대방 나이를 입력하세요." << endl;
//    cin >> age;
//    cout << endl << myname << " : " << yourname << "님 " << age << "살 생일을 축하합니다." << endl << endl << endl;
//
//    // 조건) 상대방 이름을 입력하세요 : yourname
//    cout << "상대방 이름을 입력하세요. : "; cin >> yourname;
//   
//
///*
//
//과제
//
// 자기 자신을 분석해서 여러가지 타입의 변수로 정의한다 (20)
//예 이름:---
//   나이:---
//
//*/
//
    /*
    연산자

    데이터를 가공(연산)하는 모든 명령에 필요하는 것들
    1) 어떤 종류의 연산자들이 있는지?
    2) 우선 순위: 어떤 순서로 연산이 진행되는지
    3) 결합 순서: 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

    1. 사칙연산: 산술 연산자  (좌측부터 연산)
    +: 더하기
    -: 빼기
    *: 곱하기
    /: 나누기    11 / 3 -> 3이라는 결과값
    %: 나머지    11 % 3 -> 2이라는 결과값

     (*, /, %)     >     (+, -)
    */

    int left_value = 14;
    int right_value = 3;

    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl; //값자체가 나온다
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;
        
/*  2. 대입 연산자 (변수 기준으로 우측부터 연산을 한다)
      = : 왼쪽 항에서 오른쪽 항의 값을 대입한다.(복사한다) (같다는 따로 있)
          int left_value = 11+3 일때 left_value 기준으로  우측 11+3 부터 계산을 한다.

    3. 복합대입연산자
      += : a += b;    =>   a= a + b ; ( 왼쪽 항 계산한 값이 a로 들어가 반복하면 계속 a값이 바뀐다)
      -= : a -= b;    =>   a= a - b ;
      *= : a *= b;    =>   a= a * b ;   
      /= : a /= b;    =>   a= a / b ;  
      %= : a %= b;    =>   a= a % b ; (a와 b는 정수형타입이어야 한다. 정수가 아닐 때 문제..)
      
      */
    
  
        cout << left_value << "+=" << right_value << endl; //함수에 값을 넣은게 아님. 나온다 left항 += right항을 말한거임
        left_value += right_value;
        cout << left_value << endl;
        left_value = 14;  //레프트 벨류 유지

        cout << left_value << "-=" << right_value << endl;
        left_value -= right_value;
        cout << left_value << endl;
        left_value = 14;

        cout << left_value << "*=" << right_value << endl;
        left_value *= right_value;
        cout << left_value << endl;
        left_value = 14;

        cout << left_value << "/=" << right_value << endl;
        left_value /= right_value;
        cout << left_value << endl;
        left_value = 14;

        cout << left_value << "%=" << right_value << endl;
        left_value %= right_value;
        cout << left_value << endl;
        left_value = 14;

        // 묶어서 하면 연산 가능 

        cout << "% : " << (left_value % right_value) << endl;
        
        /*
        cout은 값을 필요로 한다.
        
        cout << "% : " << left_value % right_value << endl; 이 불가능한 이유
        
        */ 
   
    //런타임에러 c++ 0으로 나눌때

        /*
        4. 증감 연산자
         특정 변수의 값을 1씩 증가시키거나 감소시킬 떄 사용한다.
         변수의 앞이나 뒤에 ++ / --를 붙여서 사용한다.
      
        */

       // left_value++; //15
        cout << left_value++ << endl;  // 출력: 14, 메모리: 15

       // ++left_value; //16
        cout << ++left_value << endl << endl << endl; // 메모리 16, 출력:16

        /*
        5. 관계 연산자
         두 값을 비교한 결과가 참(숫자, true)인지 거짓(0, false)인지 반환하는 연산자
         0만 거짓이로 처리함

           < : a<b: 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
           > : a>b: 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
           <= : 왼쪽 항의 값이 오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
           >= : 왼쪽 항의 값이 오른쪽 항의 값보다 크거나 같으면 참을 반환한다.
           == : 왼쪽 항의 값이 오른쪽 항의 같을 때, 참을 반환한다.
           != : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.
        */
   
        /*
            실습.
            1. 고객의 나이를 입력받아서 미성년자(19세 이하)이면 false를 출력.
                                      성인이면 true를 출력
            2. 아까 나이를 기준으로, 주민등록증 발급 대상(20살만) 이면 true를 아니면 false를 출력

            3. 아홉수 (1의 자리가 9인수)인지 확인해서 true, false 출력
           
        */
        //boolalpha - make true or false
        // cout << boolalpha; 위에 써주면 식안에 또 안넣어도 된다.

        string yourname;
        int yourage;
        cout << "성함을 입력해주세요: ";
        cin >> yourname;
        cout << endl << endl;
        cout << "환영합니다." << yourname << " 고객님." << endl << endl;
        cout << "고객님의 나이를 입력하세요: ";
        cin >> yourage;
        
        cout << endl << endl;
        //조건 1. 
        cout << "성인입니다." << endl;
        cout << boolalpha << (yourage > 19) << endl << endl;
       
        //조건 2.
        cout << "주민등록 발급대상입니다." << endl;
        cout << boolalpha << (yourage == 20) << endl << endl;

        //조건 3.
        cout << "아홉수입니다." << endl;
        cout << boolalpha << (yourage % 10 == 9) << endl << endl << endl << endl;


        //그냥 재미로 해보는 거

        
        cout << yourname << " 고객님은 ";
        if (yourage < 20)
        {
            cout << "미성년자입니다";
        }
        else
        {
            cout << "성인입니다" <<endl << endl;
        }

        cout << yourname << " 고객님은 ";
        if (yourage == 20)
        {
            cout << "주민등록 발급대상자입니다." << endl;
        }
        else
        {
            cout << "주민등록 발급대상자가 아닙니다" << endl << endl;
        }

        cout << yourname << " 고객님은 ";
        if (yourage % 10 ==9)
        {
            cout << "아홉수입니다.";
        }
        else
        {
            cout << "아홉수가 아닙니다." << endl << endl;
        }



}








