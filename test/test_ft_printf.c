#include "unity.h"

#include "ft_printf.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_42(void)
{
    TEST_ASSERT_EQUAL_INT(printf("42"), ft_printf("42"));
}
