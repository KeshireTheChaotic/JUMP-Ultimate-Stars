
undefined4 FUN_02180064(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_600 [2];
  undefined2 local_5fe;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined1 auStack_5f4 [1504];
  
  local_5f8 = 8;
  iVar1 = FUN_02001c9c(param_1[300]);
  do {
    if (iVar1 == 0) {
      iVar1 = FUN_02001ed8();
      if (2000 < (uint)(iVar1 - param_1[0x12d])) {
        FUN_02001b80(param_1[300]);
        param_1[300] = 0xffffffff;
        *param_1 = 1;
        (*(code *)param_1[0x122])(param_1,3,DAT_021a7d1c,param_1[0x125]);
      }
      return 0;
    }
    iVar1 = FUN_02001a9c(param_1[300],auStack_5f4,0x5db,0,auStack_600,&local_5f8);
    if ((iVar1 != -1) && (iVar1 = FUN_02181898(param_1,local_5fc,local_5fe), iVar1 == -1)) {
      uVar2 = FUN_0217f6f8(param_1,local_5fc,local_5fe);
      iVar1 = FUN_0217f6cc();
      if (iVar1 != 0) {
        return 5;
      }
      FUN_0217f6f4(uVar2,0x11);
      FUN_02181920(param_1,uVar2);
    }
    iVar1 = FUN_02001c9c(param_1[300]);
  } while( true );
}

