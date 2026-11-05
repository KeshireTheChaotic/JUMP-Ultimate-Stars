
void FUN_02167058(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  *(int *)(param_1 + 0x24) = param_2;
  iVar1 = *(int *)(&DAT_02171554 + param_2 * 0x10);
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *(int *)(&DAT_02171558 + param_2 * 0x10);
  }
  if (bVar2 && iVar1 == 0) {
    FUN_02073ef0(7,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_02073ef0(3,0);
  }
  FUN_021670c8(*(undefined4 *)(param_1 + 0x20));
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),FUN_021670c8);
  return;
}

