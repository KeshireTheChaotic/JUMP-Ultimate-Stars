
void FUN_0214eb1c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0214ebc0(*(undefined4 *)(iVar2 + 8));
  if ((uVar1 & 0x8000) == 0) {
    return;
  }
  thunk_FUN_0205b944(1);
  FUN_0214e1d4();
  FUN_0214f288(iVar2,1);
  FUN_02152738(*(undefined4 *)(DAT_02172960 + 0xf4),0);
  if (*(char *)(iVar2 + 0x9e) == '\0') {
    FUN_02073f24(0x12,0,0x2f);
  }
  *(undefined1 *)(iVar2 + 0x9a) = 0;
  FUN_0214f35c(iVar2);
  FUN_02028384(*(undefined4 *)(param_1 + 4),(&PTR_LAB_02171af4)[*(char *)(iVar2 + 0x99) * 2]);
  FUN_0207342c(0x78,0);
  return;
}

