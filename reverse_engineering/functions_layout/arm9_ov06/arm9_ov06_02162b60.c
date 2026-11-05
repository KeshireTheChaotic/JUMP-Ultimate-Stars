
void FUN_02162b60(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4 + 8);
  param_3[1] = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4 + 0x18) + -1;
  *(bool *)param_4 = *(char *)(*(int *)(param_1 + 0x10) + param_2 + 0x28) != '\0';
  return;
}

