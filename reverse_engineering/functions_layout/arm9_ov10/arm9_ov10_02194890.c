
void FUN_02194890(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_8c;
  uint local_88;
  char acStack_84 [19];
  byte local_71 [93];
  
  if (DAT_021a9f08 == '\0') {
    lVar7 = FUN_0200d10c(DAT_021a8560,DAT_021a8564,DAT_021a8558,DAT_021a855c);
    lVar7 = lVar7 + CONCAT44(DAT_021a856c,DAT_021a8568);
    DAT_021a8558 = (undefined4)lVar7;
    DAT_021a855c = (uint)((ulonglong)lVar7 >> 0x20);
    local_88 = DAT_021a855c;
    FUN_02194844(&local_88,4);
  }
  iVar2 = 0x14;
  iVar5 = 0;
  if (0 < param_2) {
    local_8c = 0;
    do {
      if (iVar2 == 0x14) {
        FUN_02196a88(local_71 + 1);
        uVar1 = OS_DisableInterrupts();
        FUN_021969fc(local_71 + 1,&DAT_021a9f10,0x14);
        FUN_02196980(local_71 + 1,acStack_84);
        uVar6 = 1;
        iVar2 = 0x13;
        pbVar4 = local_71;
        pbVar3 = &DAT_021a9f23;
        do {
          local_88 = uVar6 + (uint)*pbVar3 + (uint)*pbVar4;
          *pbVar3 = (byte)local_88;
          uVar6 = local_88 >> 8;
          pbVar4 = pbVar4 + -1;
          pbVar3 = pbVar3 + -1;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
        OS_RestoreInterrupts(uVar1);
        iVar2 = local_8c;
      }
      if (acStack_84[iVar2] != '\0') {
        *(char *)(param_1 + iVar5) = acStack_84[iVar2];
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar5 < param_2);
  }
  return;
}

