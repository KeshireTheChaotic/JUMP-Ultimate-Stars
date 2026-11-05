
void FUN_038028a4(uint param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar1 = param_1 * 0x40;
  if ((&DAT_03809a28)[param_1 * 0x40] != '\0') {
    FUN_037fd998(iVar1 + 0x3809a3c);
    (&DAT_03809a28)[iVar1] = 0;
  }
  lVar6 = *(longlong *)(&DAT_03809a2c + iVar1);
  uVar5 = *(undefined4 *)(&DAT_03809a30 + iVar1);
  lVar2 = *(longlong *)(&DAT_03809a2c + iVar1);
  iVar4 = *(int *)(&DAT_03809a34 + iVar1);
  iVar3 = *(int *)(&DAT_03809a38 + iVar1);
  param_1 = param_1 | (uint)(byte)(&DAT_03809a29)[iVar1] << 8;
  FUN_037fdc48(iVar1 + 0x3809a3c);
  if (iVar3 == 0 && iVar4 == 0) {
    FUN_037fdaa4(iVar1 + 0x3809a3c,(int)lVar6,uVar5,FUN_03802834,param_1);
  }
  else {
    lVar6 = FUN_037fd6ac();
    lVar6 = lVar6 + lVar2;
    FUN_037fda28(iVar1 + 0x3809a3c,(int)lVar6,(int)((ulonglong)lVar6 >> 0x20),iVar4,iVar3,
                 FUN_03802834,param_1);
  }
  (&DAT_03809a28)[iVar1] = 1;
  return;
}

