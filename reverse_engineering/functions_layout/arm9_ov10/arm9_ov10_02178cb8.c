
void FUN_02178cb8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    FUN_02178cb4(param_3);
    return;
  }
  if (param_2 != 4) {
    return;
  }
  iVar5 = 0;
  iVar1 = FUN_0217fbf8();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_0217fc04(param_1,iVar5);
      iVar1 = FUN_02179580();
      if (iVar1 == 0) {
        FUN_0217fc4c(param_1,uVar2);
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_0217fbf8(param_1);
    } while (iVar5 < iVar1);
  }
  iVar1 = FUN_02178448();
  iVar1 = *(int *)(iVar1 + 0x198);
  if (iVar1 == 2) {
    iVar5 = 0;
    iVar1 = FUN_0217fbf8(param_1);
    if (0 < iVar1) {
      do {
        uVar2 = FUN_0217fc04(param_1,iVar5);
        iVar1 = FUN_02178448();
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar1 = FUN_02178448();
          iVar3 = FUN_0217fa28(uVar2);
          if ((*(int *)(iVar1 + 0x1c) == iVar3) &&
             (iVar1 = FUN_02178448(), *(short *)(iVar1 + 0x1a) != 0)) {
            iVar1 = FUN_02178448();
            uVar4 = FUN_0217fa0c(uVar2);
            if (*(ushort *)(iVar1 + 0x1a) == uVar4) break;
          }
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_0217fbf8(param_1);
      } while (iVar5 < iVar1);
    }
    iVar1 = FUN_0217fbf8(param_1);
    if (iVar5 < iVar1) {
      FUN_02178434(3);
      iVar1 = FUN_02178448();
      *(undefined4 *)(iVar1 + 0x1fc) = 0;
      iVar1 = FUN_02178448();
      FUN_0217c498(*(undefined4 *)(iVar1 + 0x1fc));
      FUN_021790e4();
      return;
    }
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0xe8) = 2;
    iVar1 = FUN_02178448();
    uVar6 = OS_GetTick();
    *(undefined8 *)(iVar1 + 0xec) = uVar6;
    return;
  }
  if (iVar1 == 3) {
    FUN_02178b48(1);
    FUN_02178a28();
    iVar1 = FUN_0217fbf8(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_02178448();
      *(undefined4 *)(iVar1 + 0xe8) = 2;
      iVar1 = FUN_02178448();
      uVar6 = OS_GetTick();
      *(undefined8 *)(iVar1 + 0xec) = uVar6;
      return;
    }
    FUN_0217ae0c(0,0);
    iVar1 = FUN_0217af70();
    if (iVar1 == 0) {
      FUN_02178434(4);
      iVar1 = FUN_02178448();
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      return;
    }
  }
  else {
    if (iVar1 != 5) {
      return;
    }
    iVar1 = FUN_0217fbf8(param_1);
    while (iVar1 != 0) {
      uVar2 = FUN_0217fc04(param_1,0);
      iVar1 = FUN_0217fa28();
      iVar5 = FUN_02178448();
      if (iVar1 == *(int *)(iVar5 + 0x1b0)) {
        uVar4 = FUN_0217fa0c(uVar2);
        iVar1 = FUN_02178448();
        if (uVar4 == *(ushort *)(iVar1 + 0x1ac)) break;
      }
      FUN_0217fc4c(param_1,uVar2);
      iVar1 = FUN_0217fbf8(param_1);
    }
    iVar1 = FUN_0217fbf8(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_0217fc04(param_1,0);
      iVar1 = FUN_0217fa50(uVar2,s_dwc_pid_021a4b44,0);
      iVar5 = FUN_02178448();
      if ((*(char *)(iVar5 + 0x15) == '\x01') &&
         (iVar5 = FUN_02178448(), iVar1 == *(int *)(iVar5 + 0xf4))) {
        iVar1 = FUN_02178b48(0);
        if (iVar1 == 0) {
          iVar1 = FUN_02178448();
          FUN_0217aad4(*(undefined4 *)(iVar1 + 0xf4));
          iVar1 = FUN_0217af70();
          if (iVar1 == 0) {
            FUN_02178434(4);
            iVar1 = FUN_02178448();
            FUN_0217abc4(0,0,*(undefined4 *)(iVar1 + 0xf4));
            FUN_0217af70();
            return;
          }
          return;
        }
        iVar1 = FUN_02178448();
        if (*(char *)(iVar1 + 0xd) != '\0') {
          FUN_0217a7f8();
          iVar1 = FUN_0217af70();
          if (iVar1 != 0) {
            return;
          }
        }
      }
      FUN_02178434(6);
      uVar2 = FUN_0217fc04(param_1,0);
      FUN_0217c1f4(0,0,uVar2);
      FUN_02179000();
      return;
    }
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0xe8) = 2;
    iVar1 = FUN_02178448();
    uVar6 = OS_GetTick();
    *(undefined8 *)(iVar1 + 0xec) = uVar6;
  }
  return;
}

