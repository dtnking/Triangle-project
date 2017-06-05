#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_sortSidesOfTriangle(){

  int s1,s2,l;



  sortSidesOfTriangle(2,7,4,&s1,&s2,&l);



  printf("short1:%d\n",s1);

  printf("short2:%d\n",s2);

  printf("longest:%d\n",l);



  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((l)), (

 ((void *)0)

 ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);





   }



void test_ValidityOfTriangle_3_plus_4_longer_than_5_expect_valid(){

  int a,b,c,s1,s2,l;



  char * result=validityOfTriangle(4,5,3);



  UnityAssertEqualString((const char*)(("valid")), (const char*)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(31));



   }





void test_TypeOfTriangle_A2_plus_B2_equal_C2_expect_rightAngle(){

  int a,b,c,s1,s2,l;



  char * result1=TypeOfTriangle(3,4,5);



  UnityAssertEqualString((const char*)(("right angle")), (const char*)((result1)), (

 ((void *)0)

 ), (UNITY_UINT)(41));



   }



 void test_TypeOfTriangle_A2_plus_B2_larger_than_C2_expect_obtuseAngle(){

  int a,b,c,s1,s2,l;



  char * result1=TypeOfTriangle(5,7,8);



  UnityAssertEqualString((const char*)(("obtuse triangle")), (const char*)((result1)), (

 ((void *)0)

 ), (UNITY_UINT)(50));



   }



void test_TypeOfTriangle_A2_plus_B2_smaller_than_C2_expect_accuteAngle(){

  int a,b,c,s1,s2,l;



  char * result1=TypeOfTriangle(4,3,6);



  UnityAssertEqualString((const char*)(("accute triangle")), (const char*)((result1)), (

 ((void *)0)

 ), (UNITY_UINT)(59));



   }
