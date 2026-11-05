
void FUN_0201bff0(int *param_1,int *param_2)

{
  if (param_1[0xe] == *param_2) {
    return;
  }
  param_1[0xe] = *param_2;
  (**(code **)(*param_1 + 0xcc))();
  return;
}

