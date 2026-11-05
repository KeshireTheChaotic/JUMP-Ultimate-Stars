
undefined4 FUN_0218b064(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_600 [2];
  ushort local_5fe;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined1 auStack_5f4 [1504];
  
  iVar1 = FUN_02001c9c(*param_1);
  do {
    if (iVar1 == 0) {
      return 1;
    }
    local_5f8 = 8;
    iVar1 = FUN_02001a9c(*param_1,auStack_5f4,0x5dc,0,auStack_600,&local_5f8);
    if (iVar1 == -1) {
      iVar1 = FUN_020019e0(*param_1);
      if (iVar1 == -0xf) {
        iVar1 = FUN_0218b134(param_1,local_5fc,(int)(uint)local_5fe >> 8 | (local_5fe & 0xff) << 8);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else if (iVar1 != -0x23) {
        FUN_0218bd54(param_1);
        return 0;
      }
    }
    else {
      iVar1 = FUN_0218b1c4(param_1,auStack_5f4,iVar1,local_5fc,
                           (int)(uint)local_5fe >> 8 | (local_5fe & 0xff) << 8);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_02001c9c(*param_1);
  } while( true );
}

