
void FUN_0214ea40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x9d) != DAT_020aff4a) {
    DAT_020aff4a = *(char *)(iVar1 + 0x9d);
    *(undefined4 *)(DAT_02172960 + 0x164) = 3;
    FUN_0214df14();
    return;
  }
  thunk_FUN_0205b944(0);
  FUN_0214f288(iVar1,0);
  FUN_0214f3b0(iVar1,0);
  FUN_02152738(*(undefined4 *)(DAT_02172960 + 0xf4),1);
  if (*(char *)(iVar1 + 0x9e) == '\0') {
    FUN_02073f24(0x11,0,0x2f);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),&LAB_0214eaf8);
    return;
  }
  FUN_0214ea00(iVar1);
  return;
}

