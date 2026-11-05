
void FUN_02053d80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x88) = param_2;
  }
  else {
    *(int *)(iVar1 + 0x10) = param_2;
  }
  *(int *)(param_2 + 0x14) = iVar1;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}

