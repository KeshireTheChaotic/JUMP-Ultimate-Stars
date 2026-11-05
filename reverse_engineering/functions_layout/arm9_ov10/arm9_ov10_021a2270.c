
undefined4 FUN_021a2270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  uVar1 = FUN_02070fd4();
  iVar2 = FUN_02070ff4();
  FUN_02051890(param_1 + 0x40,auStack_30,0xc);
  iVar3 = FUN_02069718(uVar1,auStack_30);
  iVar5 = 0;
  while( true ) {
    if (0x31 < iVar5) {
      return 0;
    }
    iVar4 = FUN_020695b8(auStack_30,iVar2 + iVar5 * 0xc);
    if (iVar4 != 0) break;
    if ((0 < iVar3) && (iVar4 = FUN_02069718(uVar1,iVar2 + iVar5 * 0xc), iVar3 == iVar4)) {
      return 1;
    }
    iVar5 = iVar5 + 1;
  }
  return 1;
}

