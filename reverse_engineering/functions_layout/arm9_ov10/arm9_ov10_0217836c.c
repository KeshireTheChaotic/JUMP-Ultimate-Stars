
uint FUN_0217836c(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_228 [4];
  undefined1 auStack_224 [4];
  uint local_220;
  undefined1 auStack_21c [256];
  undefined1 auStack_11c [268];
  
  iVar2 = FUN_02177a2c(param_1,auStack_224);
  if (iVar2 == 0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    return 0;
  }
  if (local_220 == 6) {
    if (param_2 != (undefined1 *)0x0) {
      iVar2 = FUN_02175c68(&DAT_021a4b24,auStack_228,auStack_21c,0x2f);
      if (iVar2 < 1) {
        *param_2 = 0;
      }
      else {
        uVar1 = FUN_02005e3c(auStack_228,0,10);
        *param_2 = uVar1;
      }
    }
    if (param_3 != (undefined1 *)0x0) {
      iVar2 = FUN_02175c68(&DAT_021a4b28,auStack_228,auStack_21c,0x2f);
      if (iVar2 < 1) {
        *param_3 = 0;
      }
      else {
        uVar1 = FUN_02005e3c(auStack_228,0,10);
        *param_3 = uVar1;
      }
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
  }
  if (param_4 != 0) {
    FUN_02004b18(param_4,auStack_11c);
  }
  return local_220 & 0xff;
}

