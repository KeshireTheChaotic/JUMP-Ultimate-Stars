
int FUN_0201b814(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      param_1 = *(int *)(param_1 + 0x1c);
    }
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = param_1;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  return iVar1;
}

