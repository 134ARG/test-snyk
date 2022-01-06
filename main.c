int* test_func(void)
{
  int local_variable = 1;
  int* array[4];
  array[2] = &local_variable;
  return array[2];
}

int main(void) {
  int* p = test_func();
  if (*p != 0) {
    return 1;
  } else {
    return 0;
  }
}
