
undefined4 FUN_02062af8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_020aecbc & 0xfffffe00) == *(uint *)(param_1 + 8)) {
    iVar1 = DAT_020aecbc - (DAT_020aecbc & 0xfffffe00);
    uVar2 = 0x200 - iVar1;
    if (DAT_020aecc4 < uVar2) {
      uVar2 = DAT_020aecc4;
    }
    FUN_02051890(param_1 + 0x20 + iVar1,DAT_020aecc0,uVar2);
    DAT_020aecbc = DAT_020aecbc + uVar2;
    DAT_020aecc0 = DAT_020aecc0 + uVar2;
    DAT_020aecc4 = DAT_020aecc4 - uVar2;
  }
  if (DAT_020aecc4 == 0) {
    return 0;
  }
  return 1;
}

