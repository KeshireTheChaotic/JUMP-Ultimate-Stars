
void FUN_0215d258(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar2,3);
  iVar1 = (extraout_r1 * 0x200 + 0x300) * 0x10000;
  if ((param_3 & 1) != 0) {
    iVar1 = (short)((uint)iVar1 >> 0x10) * -0x10000;
  }
  FUN_02164d48(param_2,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),iVar1 >> 0x10,
               (extraout_r1 * 0x200 + -0x600) * 0x10000 >> 0x10,0);
  return;
}

