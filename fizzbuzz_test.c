#include "fizzbuzz.h"
#include <check.h>



START_TEST(when_fizzbuzz_receives_1_it_produces_1)
{
    char buf[100];

    fizzbuzz(1, buf);

    ck_assert_str_eq(buf, "1");
}
END_TEST

START_TEST(when_fizzbuzz_receives_2_it_produces_2)
{
    char buf[100];

    fizzbuzz(2, buf);

    ck_assert_str_eq(buf, "2");
}
END_TEST

START_TEST(when_fizzbuzz_receives_3_it_produces_fizz)
{
    char buf[100];

    fizzbuzz(3, buf);

    ck_assert_str_eq(buf, "fizz");
}
END_TEST

START_TEST(when_fizzbuzz_receives_5_it_produces_buzz)
{
    char buf[100];

    fizzbuzz(5, buf);

    ck_assert_str_eq(buf, "buzz");
}
END_TEST

START_TEST(when_fizzbuzz_receives_6_it_produces_fizz)
{
    char buf[100];

    fizzbuzz(6, buf);

    ck_assert_str_eq(buf, "fizz");
}
END_TEST

START_TEST(when_fizzbuzz_receives_10_it_produces_buzz)
{
    char buf[100];

    fizzbuzz(10, buf);

    ck_assert_str_eq(buf, "buzz");
}
END_TEST

START_TEST(when_fizzbuzz_receives_15_it_produces_fizzbuzz)
{
    char buf[100];

    fizzbuzz(15, buf);

    ck_assert_str_eq(buf, "fizzbuzz");
}
END_TEST

START_TEST(when_fizzbuzz_receives_30_it_produces_fizzbuzz)
{
    char buf[100];

    fizzbuzz(30, buf);

    ck_assert_str_eq(buf, "fizzbuzz");
}
END_TEST

Suite* make_suite(void) {
    Suite * suite = suite_create("Fizz Buzz");
    TCase *tc = tcase_create("Fizz Buzz");
    suite_add_tcase(suite, tc);

    tcase_add_test(tc, when_fizzbuzz_receives_1_it_produces_1);
    tcase_add_test(tc, when_fizzbuzz_receives_2_it_produces_2);
    tcase_add_test(tc, when_fizzbuzz_receives_3_it_produces_fizz);
    tcase_add_test(tc, when_fizzbuzz_receives_5_it_produces_buzz);
    tcase_add_test(tc, when_fizzbuzz_receives_6_it_produces_fizz);
    tcase_add_test(tc, when_fizzbuzz_receives_10_it_produces_buzz);
    tcase_add_test(tc, when_fizzbuzz_receives_15_it_produces_fizzbuzz);
    tcase_add_test(tc, when_fizzbuzz_receives_30_it_produces_fizzbuzz);

    return suite;
}

int main(void) {
    Suite * suite = make_suite();
    SRunner * runner = srunner_create(suite);

    srunner_run_all(runner, CK_NORMAL);
    int number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}