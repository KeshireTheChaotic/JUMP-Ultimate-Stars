
void FUN_0215f708(short *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0216ad84;
  if ((param_1 != (short *)0x0) && (iVar2 = FUN_0215fc84(DAT_0216ad84,param_1), iVar2 == 0)) {
    return;
  }
  if (param_1 == (short *)0x0) {
    *(undefined4 *)(iVar1 + 0x5100) = 1;
    *(undefined4 *)(iVar1 + 0x50f0) = 1;
    uVar3 = FUN_02058494(iVar1,*(undefined2 *)(iVar1 + 0x50e0));
    FUN_0215fcb8(iVar1,0,uVar3);
    uVar3 = FUN_020595f0(FUN_0215f708);
    FUN_0215fcb8(iVar1,3,uVar3);
    return;
  }
  if (*param_1 != 3) {
    return;
  }
  uVar3 = FUN_02058c74(&LAB_0215f92c);
  iVar2 = FUN_0215fcb8(iVar1,0x80,uVar3);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_02058b94(4,FUN_0215f814,0);
  iVar2 = FUN_0215fcb8(iVar1,0x81,uVar3);
  if (iVar2 == 0) {
    return;
  }
  FUN_0215f994(iVar1,2,0);
  return;
}

