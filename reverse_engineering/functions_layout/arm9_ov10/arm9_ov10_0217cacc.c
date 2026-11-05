
undefined4 FUN_0217cacc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [36];
  
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\x02') {
    iVar1 = FUN_02178448();
    FUN_02052c44(auStack_30,0xc,&DAT_021a4b2c,*(byte *)(iVar1 + 0x16) + 1);
    FUN_02175d58(&DAT_021a4c1c,auStack_30,auStack_24,0x2f);
    iVar1 = FUN_02178448();
    FUN_02052c44(auStack_30,0xc,&DAT_021a4b2c,*(byte *)(iVar1 + 0xd) + 1);
    FUN_02175d2c(&DAT_021a4c20,auStack_30,auStack_24,0x2f);
    FUN_02052c44(auStack_30,0xc,&DAT_021a4b2c,3);
    FUN_02175d2c(&DAT_021a4b8c,auStack_30,auStack_24,0x2f);
    uVar2 = FUN_02177ea4(6,auStack_24,0);
    return uVar2;
  }
  return 0;
}

