
void FUN_02178778(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [4];
  int local_a4;
  undefined1 local_a0;
  byte local_9f;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [128];
  
  iVar2 = 0;
  iVar1 = FUN_02176640();
  if (((iVar1 == 5) ||
      ((iVar1 = FUN_02176640(), iVar1 == 6 &&
       ((iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x15) == '\x02' ||
        (iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x15) == '\x03')))))) && (0x13 < param_2)) {
    while( true ) {
      FUN_02051890(param_1,auStack_a8,0x14);
      iVar1 = FUN_02004cec(auStack_a8,&DAT_021a4b30,4);
      if ((iVar1 != 0) || (local_a4 != 3)) break;
      FUN_02051890(param_1 + 0x14,auStack_94,local_9f);
      iVar1 = FUN_0217b348(local_a0,local_98,local_9c,local_9e,auStack_94,(int)(uint)local_9f >> 2);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + local_9f + 0x14;
      if (param_2 < iVar2 + 0x14U) {
        return;
      }
    }
  }
  return;
}

