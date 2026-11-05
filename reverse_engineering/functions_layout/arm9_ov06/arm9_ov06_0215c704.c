
void FUN_0215c704(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_0215b158();
  if (iVar1 != 0) {
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    if (((*(uint *)(param_1 + 0x128) & 0x80) != 0) &&
       (iVar1 = FUN_020784b8(*(undefined4 *)(param_1 + 0x1b4),0x400), iVar1 != 0)) {
      bVar3 = true;
    }
    if (((*(uint *)(param_1 + 0x128) & 0x8000) != 0) &&
       (iVar1 = FUN_02078328(*(undefined4 *)(param_1 + 0x1b4),1), iVar1 != 0)) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_0215f6e4(param_1,0x230017,1);
      FUN_0207342c(0x7a,0x55);
    }
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    FUN_0215ef48(param_1);
    bVar3 = (*(uint *)(DAT_02172960 + 4) & 0x10) != 0;
    uVar2 = extraout_r1;
    if (bVar3) {
      uVar2 = 1;
    }
    if (!bVar3) {
      uVar2 = 0;
    }
    FUN_02078564(*(undefined4 *)(param_1 + 0x1b4),uVar2);
    FUN_0215ce28(param_1,0);
    FUN_02159b8c(param_1,0x21000f);
    iVar1 = FUN_0215ccd4(param_1);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_0215c824(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_02157494(param_1,0x18,FUN_0215ca44,0,0x10);
  return;
}

