
int FUN_0217e1b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x10) != 0) {
    return 0;
  }
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x1f8) = param_1;
  iVar1 = 0;
  do {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    uVar4 = FUN_0218a858(**(undefined4 **)(iVar3 + 4));
    iVar3 = FUN_02178448();
    uVar5 = FUN_0218a864(**(undefined4 **)(iVar3 + 4));
    iVar3 = FUN_02178448();
    iVar6 = FUN_02178448();
    iVar2 = FUN_0218ddc0(iVar2 + 0x10,uVar4,uVar5,*(undefined4 *)(iVar3 + 0x2ec),
                         *(undefined4 *)(iVar6 + 0x2f0),1,1,0x217893d,0x2178939,0x2178935,0x21788cd,
                         0x21788c9,0x21788c1,0);
    if (iVar2 == 0) break;
    if ((iVar2 != 3) || (iVar1 == 4)) {
      FUN_02179040(iVar2);
      return iVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  iVar1 = FUN_02178448();
  *(undefined2 *)(iVar1 + 0x1a) = 0;
  iVar1 = FUN_02178448();
  FUN_0218dd84(*(undefined4 *)(iVar1 + 0x10),0x21788a9);
  iVar1 = FUN_02178448();
  FUN_0218ddac(*(undefined4 *)(iVar1 + 0x10),0x2178809);
  iVar1 = FUN_02178448();
  FUN_0218dd98(*(undefined4 *)(iVar1 + 0x10),0x2178779);
  iVar1 = FUN_02178448();
  FUN_0218dbe8(*(undefined4 *)(iVar1 + 0x10));
  return iVar2;
}

