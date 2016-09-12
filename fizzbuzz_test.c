#include "fizzbuzz.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <check.h>

static char buf[100];

START_TEST(when_1_return_1)
{
    fizzbuzz(1, buf, sizeof(buf));
    ck_assert_str_eq(buf, "1");
}
END_TEST

START_TEST(when_2_return_2)
{
    fizzbuzz(2, buf, sizeof(buf));
    ck_assert_str_eq(buf, "2");
}
END_TEST

START_TEST(when_3_return_fizz)
{
    fizzbuzz(3, buf, sizeof(buf));
    ck_assert_str_eq(buf, "fizz");
}
END_TEST

START_TEST(when_5_return_buzz)
{
    fizzbuzz(5, buf, sizeof(buf));
    ck_assert_str_eq(buf, "buzz");
}
END_TEST

START_TEST(when_6_return_fizz)
{
    fizzbuzz(6, buf, sizeof(buf));
    ck_assert_str_eq(buf, "fizz");
}
END_TEST

START_TEST(when_10_return_buzz)
{
    fizzbuzz(10, buf, sizeof(buf));
    ck_assert_str_eq(buf, "buzz");
}
END_TEST

Suite* suite(void) {
    Suite * suite = suite_create("Fizz Buzz");

    TCase *tc_fizzbuzz = tcase_create("Fizz Buzz");
    tcase_add_test(tc_fizzbuzz, when_1_return_1);
    tcase_add_test(tc_fizzbuzz, when_2_return_2);
    tcase_add_test(tc_fizzbuzz, when_3_return_fizz);
    tcase_add_test(tc_fizzbuzz, when_5_return_buzz);
    tcase_add_test(tc_fizzbuzz, when_6_return_fizz);
    tcase_add_test(tc_fizzbuzz, when_10_return_buzz);
    suite_add_tcase(suite, tc_fizzbuzz);

    return suite;
}

int main(void) {
    Suite * s = suite();
    SRunner * sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}