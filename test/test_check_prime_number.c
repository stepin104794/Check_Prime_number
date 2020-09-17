#include "unity.h"
#include "check_prime_number.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_check_prime_number(void)
{
  TEST_ASSERT_EQUAL(1, check_prime_number(5));
  TEST_ASSERT_EQUAL(1, check_prime_number(3));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(1, check_prime_number(0));
  TEST_ASSERT_EQUAL(1, check_prime_number(1));
}
void test_big_prime_number(void)
{
  TEST_ASSERT_EQUAL(1, check_prime_number(977));
  TEST_ASSERT_EQUAL(0, check_prime_number(657));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check_prime_number);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_big_prime_number);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
