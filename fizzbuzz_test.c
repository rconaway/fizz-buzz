#include "fizzbuzz.h"
#include <check.h>

START_TEST(placeholder)
{
}
END_TEST

Suite* make_suite(void) {
    Suite * suite = suite_create("Fizz Buzz");
    TCase *tc = tcase_create("Fizz Buzz");
    suite_add_tcase(suite, tc);

    tcase_add_test(tc, placeholder);

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