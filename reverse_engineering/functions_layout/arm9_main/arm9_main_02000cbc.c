
undefined4 FUN_02000cbc(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined1 auStack_48 [72];
  
  local_50 = 8;
  if (DAT_020a0644 == -1) {
    DAT_020a05c0 = 1;
    return 1;
  }
  iVar1 = FUN_02001c9c();
  if (iVar1 != 0) {
    uVar2 = FUN_02001a9c(DAT_020a0644,auStack_48,0x40,0,auStack_58,&local_50);
    iVar1 = FUN_02000d84(auStack_48,uVar2,auStack_58,&local_4c);
    if (iVar1 == 0) {
      FUN_02001b80(DAT_020a0644);
      if ((local_4c & 1) == 0) {
        if ((local_4c & 2) == 0) {
          DAT_020a05c0 = 1;
        }
        else {
          DAT_020a05c0 = 3;
        }
      }
      else {
        DAT_020a05c0 = 2;
      }
      return DAT_020a05c0;
    }
  }
  uVar3 = FUN_02001ed8();
  if (DAT_020a0694 + 2000U < uVar3) {
    if (DAT_020a0698 == 1) {
      FUN_02001b80(DAT_020a0644);
      DAT_020a05c0 = 1;
      return 1;
    }
    FUN_02000eb0();
    DAT_020a0698 = DAT_020a0698 + 1;
  }
  return 0;
}

