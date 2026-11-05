
void FUN_0219a6d0(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar3 = FUN_021766fc();
  iVar4 = FUN_0219cb14(uVar3);
  if (iVar4 < 0) {
    return;
  }
  cVar2 = *(char *)(DAT_0214ccf8 + 0x5c);
  iVar4 = FUN_02176714();
  bVar1 = DAT_020afe94 < iVar4;
  if (DAT_020afe94 < DAT_020afe90) {
    DAT_020afe94 = FUN_02176714();
  }
  else {
    DAT_020afe90 = FUN_02176714();
    DAT_020afe94 = FUN_02176714();
  }
  uVar5 = FUN_02176714();
  *(undefined4 *)(DAT_0214ccf8 + 0xa2c) = uVar5;
  uVar5 = FUN_0217668c();
  *(undefined4 *)(DAT_0214ccf8 + 0xa30) = uVar5;
  uVar3 = FUN_021766fc();
  iVar4 = FUN_0219cb14(uVar3);
  if (DAT_020afe98 != iVar4) {
    uVar3 = FUN_021766fc();
    DAT_020afe98 = FUN_0219cb14(uVar3);
    uVar3 = FUN_021766fc();
    FUN_0219cb14(uVar3);
    ALObjectImp::PostSyncMessage();
  }
  for (iVar4 = 0; iVar6 = FUN_02176714(), iVar4 < iVar6; iVar4 = iVar4 + 1) {
    FUN_0219a668(iVar4,cVar2 == '\0',bVar1);
  }
  return;
}

