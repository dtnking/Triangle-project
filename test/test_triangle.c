#include "unity.h"
#include "triangle.h"

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
  
  TEST_ASSERT_EQUAL(7,l);
   }

void test_ValidityOfTriangle_3_plus_4_longer_than_5_expect_valid(){
  int a,b,c,s1,s2,l;
  
  char* result=validityOfTriangle(4,5,3);

  TEST_ASSERT_EQUAL_STRING("valid",result);
   }
   
   
void test_TypeOfTriangle_A2_plus_B2_equal_C2_expect_rightAngle(){
  int a,b,c,s1,s2,l;
  
  char* result1=TypeOfTriangle(3,4,5);

  TEST_ASSERT_EQUAL_STRING("right angle",result1);
   }
   
 void test_TypeOfTriangle_A2_plus_B2_larger_than_C2_expect_obtuseAngle(){
  int a,b,c,s1,s2,l;
  
  char* result1=TypeOfTriangle(5,7,8);

  TEST_ASSERT_EQUAL_STRING("obtuse triangle",result1); 
   }
   
void test_TypeOfTriangle_A2_plus_B2_smaller_than_C2_expect_accuteAngle(){
  int a,b,c,s1,s2,l;
  
  char* result1=TypeOfTriangle(4,3,6);

  TEST_ASSERT_EQUAL_STRING("accute triangle",result1);  
   }