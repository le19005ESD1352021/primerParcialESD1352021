/*
 * File:   newcunittest.c
 * Author: lizama
 *
 * Created on 09-08-2021, 10:04:52 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../Funciones.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testLeer() {
    char* filename = "peliculasFavoritasESD135_2021.csv";
    int** MatrizSalida[60][9];
    int result = leer(filename, MatrizSalida);
    CU_ASSERT_TRUE(result);
}

void testTransversa() {
    int** MatrizEntrada[60][9];
    int** MatrizSalida[9][60];
    int result = transversa(MatrizEntrada, MatrizSalida);
    CU_ASSERT_TRUE(result);
}

void testMultiplicacionM() {
    int** MatrizEntrada[60][9];
    int** MatrizEntrada1[9][60];
    int** MultMatrizSalida[60][60];
    int result = multiplicacionM(MatrizEntrada, MatrizEntrada1, MultMatrizSalida);
    CU_ASSERT_TRUE(result);
}

const char integrante();

void testIntegrante() {
    const char result = integrante();
    CU_ASSERT_TRUE(result);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testLeer", testLeer)) ||
            (NULL == CU_add_test(pSuite, "testTransversa", testTransversa)) ||
            (NULL == CU_add_test(pSuite, "testMultiplicacionM", testMultiplicacionM)) ||
            (NULL == CU_add_test(pSuite, "testIntegrante", testIntegrante))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
