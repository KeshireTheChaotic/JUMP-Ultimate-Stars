
void FUN_02155064(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c4);
  bVar2 = iVar1 == param_2;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x3c8);
  }
  if ((!bVar2 || iVar1 != param_3) || param_4 != 0) {
    *(int *)(param_1 + 0x3c4) = param_2;
    *(int *)(param_1 + 0x3c8) = param_3;
    *(undefined1 *)(param_1 + 0x468) = 1;
  }
  return;
}

