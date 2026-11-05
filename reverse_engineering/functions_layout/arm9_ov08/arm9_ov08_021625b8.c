
void FUN_021625b8(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  uint local_1c;
  undefined1 auStack_18 [4];
  
  FUN_02165b60(*(undefined4 *)(DAT_0216e7fc + 8),0,&local_1c,auStack_18);
  local_1c = local_1c - 8;
  if ((int)(uint)DAT_0216adb0 < (int)local_1c) {
    iVar3 = 2;
    puVar2 = &DAT_0216adb4;
    iVar1 = 8;
    do {
      FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar1),0xffffffff,local_1c,puVar2[1]);
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    return;
  }
  iVar3 = 2;
  puVar2 = &DAT_0216adb4;
  iVar1 = 8;
  local_1c = (uint)DAT_0216adb0;
  do {
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar1),0xffffffff,local_1c,puVar2[1]);
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FUN_021677b8(param_1,0x2162529);
  return;
}

