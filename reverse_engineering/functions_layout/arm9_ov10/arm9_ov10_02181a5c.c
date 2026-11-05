
int FUN_02181a5c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar4 = FUN_0217fa2c(*param_1,*(undefined4 *)(DAT_021a7d24 + 0x498),0,0);
  uVar5 = FUN_0217fa2c(uVar2,*(undefined4 *)(DAT_021a7d24 + 0x498),0,0);
  uVar4 = FUN_0200bc6c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  if (*(int *)(DAT_021a7d24 + 0x49c) == 0) {
    uVar4 = FUN_0200bc6c(0,0,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  }
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = FUN_0200b6c4((int)uVar4,uVar3);
  iVar1 = FUN_0200c4a8(uVar2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0200b6c4((int)uVar4,uVar3);
    iVar1 = FUN_0200c500(uVar2,0);
    return -(uint)(iVar1 != 0);
  }
  return 1;
}

