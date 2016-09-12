#include "fizzbuzz.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <check.h>

START_TEST(when_1_return_1) {
    int input = 1;
    char* expected = "1";
    char buf[100];
    fizzbuzz(input, buf, sizeof(buf));
    ck_assert_str_eq(expected, buf);
} END_TEST

Suite* suite(void) {
    Suite * suite = suite_create("Fizz Buzz");

    TCase *tc_fizzbuzz = tcase_create("Fizz Buzz");
    tcase_add_test(tc_fizzbuzz, when_1_return_1);
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