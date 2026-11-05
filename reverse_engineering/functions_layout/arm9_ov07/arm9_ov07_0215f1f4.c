
void FUN_0215f1f4(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0216ad84;
  if ((param_1 != (short *)0x0) && (iVar4 = FUN_0215fc84(DAT_0216ad84,param_1), iVar4 == 0)) {
    return;
  }
  if (param_1 == (short *)0x0) {
    *(undefined4 *)(iVar2 + 0x50f0) = 1;
    *(undefined2 *)(*(int *)(iVar2 + 0x50fc) + 0x32) = *(undefined2 *)(iVar2 + 0x50e2);
    uVar3 = FUN_020584c8();
    *(undefined2 *)(*(int *)(iVar2 + 0x50fc) + 0xc) = uVar3;
    uVar5 = FUN_02059320(FUN_0215f1f4,*(undefined4 *)(iVar2 + 0x50fc));
    FUN_0215fcb8(iVar2,7,uVar5);
    return;
  }
  sVar1 = *param_1;
  if (sVar1 == 7) {
    uVar5 = FUN_02059250(FUN_0215f358);
    FUN_0215fcb8(iVar2,8,uVar5);
    return;
  }
  if (sVar1 == 8) {
    *(undefined2 *)(iVar2 + 0x50e4) = 0;
    *(undefined2 *)(iVar2 + 0x50e6) = 0;
    uVar5 = FUN_02059864(FUN_0215f1f4,iVar2 + 0x1120,*(undefined2 *)(iVar2 + 0x50ea),iVar2 + 0xf00);
    FUN_0215fcb8(iVar2,0xe,uVar5);
    return;
  }
  if (sVar1 != 0xe) {
    return;
  }
  if (param_1[2] == 10) {
    FUN_0215f994(iVar2,4,0);
    return;
  }
  return;
}

