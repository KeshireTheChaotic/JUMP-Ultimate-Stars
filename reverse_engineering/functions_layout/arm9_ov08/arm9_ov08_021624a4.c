
void FUN_021624a4(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int local_1c;
  undefined1 auStack_18 [4];
  
  FUN_02165b60(*DAT_0216e7fc,0,&local_1c,auStack_18);
  local_1c = local_1c + -8;
  iVar3 = 0;
  puVar2 = &DAT_0216adac;
  iVar1 = 0;
  do {
    FUN_02165bc4(*(undefined4 *)((int)DAT_0216e7fc + iVar1),0xffffffff,local_1c,puVar2[1]);
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if ((local_1c < 0x1d7) && (0xff < local_1c)) {
    FUN_021677a0(0,param_1);
    iVar1 = 0;
    iVar3 = 0;
    do {
      FUN_02165d6c(*(undefined4 *)((int)DAT_0216e7fc + iVar3));
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    FUN_02166b5c(&DAT_0216e7fc);
  }
  return;
}

