
void FUN_0201f9b8(int *param_1,int *param_2)

{
  if (param_1[0xe] == *param_2) {
    return;
  }
  param_1[0xe] = *param_2;
  param_1[0xf] = *param_2;
  (**(code **)(*param_1 + 0xcc))();
  return;
}

