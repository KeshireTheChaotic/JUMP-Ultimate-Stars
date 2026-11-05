
void FUN_0215f674(short *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0216ad84;
  if ((param_1 != (short *)0x0) && (iVar2 = FUN_0215fc84(DAT_0216ad84,param_1), iVar2 == 0)) {
    return;
  }
  if (param_1 == (short *)0x0) {
    *(undefined4 *)(iVar1 + 0x50f0) = 1;
    uVar3 = FUN_02059560(FUN_0215f674);
    FUN_0215fcb8(iVar1,5,uVar3);
    return;
  }
  if (*param_1 == 5) {
    FUN_0215f994(iVar1,3,0);
    return;
  }
  return;
}

