
int FUN_021677bc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0216609c(*(undefined4 *)(DAT_0216e8ac + param_1 * 0x40));
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(char *)(iVar1 + 0x10) = (char)param_4;
  *(undefined1 *)(iVar1 + 0x11) = param_5;
  uVar2 = OS_DisableIrqMask(1);
  for (iVar3 = *(int *)(DAT_0216e8ac + param_1 * 0x40 + 0x10); *(byte *)(iVar3 + 0x10) <= param_4;
      iVar3 = *(int *)(iVar3 + 4)) {
  }
  FUN_02167174(iVar3,iVar1);
  OS_EnableIrqMask(uVar2);
  return iVar1;
}

