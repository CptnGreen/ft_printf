#include "unity.h"

#include "ft_itoa_base.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_42(void)
{
    TEST_ASSERT_EQUAL_STRING("42", ft_itoa_base(42, 10));
}
