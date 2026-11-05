
void FUN_0218dd00(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  
  local_18 = 8;
  if ((param_1[0x31] != 0) && (iVar1 = FUN_02001c9c(*param_1), iVar1 != 0)) {
    do {
      iVar1 = FUN_02001a9c(*param_1,&DAT_021a83dc,0xff,0,auStack_20,&local_18);
      if (iVar1 != -1) {
        (&DAT_021a83dc)[iVar1] = 0;
        FUN_0218d048(param_1,&DAT_021a83dc,iVar1,auStack_20);
      }
      iVar1 = FUN_02001c9c(*param_1);
    } while (iVar1 != 0);
  }
  return;
}

