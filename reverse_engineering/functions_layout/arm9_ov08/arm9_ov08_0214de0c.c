
int FUN_0214de0c(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_1c [8];
  
  FUN_0214cf10(auStack_1c,param_1 + 0x10,8);
  uVar2 = FUN_0214cdb0(s_MELCO_0216af88);
  iVar3 = FUN_0214d0c8(auStack_1c,8,s_MELCO_0216af88,uVar2);
  if (iVar3 == -1) {
    FUN_0214e638(2);
    return -100;
  }
  uVar2 = FUN_0214cdc4(*(undefined2 *)(param_1 + 6));
  iVar3 = FUN_0214ddc4(uVar2,auStack_1c);
  if (iVar3 == 0) {
    iVar3 = FUN_0214cdc4(*(undefined2 *)(param_1 + 6));
    if (iVar3 == 0x1000) {
      FUN_0214cf10(&DAT_0216c1d8,auStack_1c,8);
    }
    uVar4 = FUN_0214cdc4(*(undefined2 *)(param_1 + 0xc));
    if ((uVar4 & 0xf) == 0) {
      return 0;
    }
    uVar4 = FUN_0214cdc4(*(undefined2 *)(param_1 + 0x18));
    iVar3 = FUN_0214f2f8();
    if (iVar3 == 0) {
      FUN_0214e638(2);
      return 100;
    }
    iVar5 = FUN_0214d2e0(param_1 + 0x1c,iVar3,uVar4,*(undefined1 *)(param_1 + 0xe),param_1 + 0x1a,
                         &DAT_0216c1d8,8);
    if (iVar5 < 0) {
      FUN_0214f2e4(iVar3);
      iVar3 = FUN_0214e62c();
      if (iVar3 == 2) {
        return 100;
      }
      return 200;
    }
    FUN_0214cf10((undefined2 *)(param_1 + 0x18),iVar3,uVar4);
    uVar1 = FUN_0214ce14(uVar4 & 0xffff);
    *(undefined2 *)(param_1 + 10) = uVar1;
    FUN_0214f2e4(iVar3);
    iVar3 = 0;
  }
  return iVar3;
}

