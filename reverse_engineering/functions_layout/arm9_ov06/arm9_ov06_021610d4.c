
void FUN_021610d4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_02029284(*(undefined4 *)*param_1);
  FUN_02020c44(*(undefined4 *)(param_1[1] + 4));
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0x10;
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    param_1[2] = (int)FUN_02161148;
  }
  else {
    param_1[2] = (int)&DAT_02161144;
  }
  return;
}

