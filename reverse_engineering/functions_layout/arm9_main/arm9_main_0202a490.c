
void FUN_0202a490(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == param_2) {
    return;
  }
  if ((iVar1 != 0) && (-1 < *(char *)(param_1 + 0x24))) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == param_1) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
      }
    }
    else {
      while (*(int *)(iVar1 + 0x20) != param_1) {
        iVar1 = *(int *)(iVar1 + 0x20);
      }
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x1c);
    *(int *)(param_2 + 0x1c) = param_1;
  }
  return;
}

