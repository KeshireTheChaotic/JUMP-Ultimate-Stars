
void FUN_021777a4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_34;
  undefined1 auStack_2c [24];
  
  bVar1 = false;
  if (*param_2 == 0) {
    local_34 = 0;
    if (0 < *(int *)(DAT_021a75a4 + 0x14)) {
      iVar4 = 0;
      do {
        iVar2 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar4);
        if (iVar2 == 1) {
          uVar3 = FUN_02177558();
          FUN_02069660(uVar3,*(int *)(DAT_021a75a4 + 0x18) + iVar4,auStack_2c);
          iVar2 = FUN_02004c2c(auStack_2c,(int)param_2 + 0x8e);
          if (iVar2 == 0) {
            FUN_02181fd8(param_1,param_2[1]);
            FUN_02069670(*(int *)(DAT_021a75a4 + 0x18) + iVar4,param_2[1]);
            bVar1 = true;
          }
        }
        else {
          iVar2 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar4);
          if ((iVar2 == 3) ||
             (iVar2 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar4), iVar2 == 2)) {
            iVar5 = param_2[1];
            uVar3 = FUN_02177558();
            iVar2 = FUN_02069718(uVar3,*(int *)(DAT_021a75a4 + 0x18) + iVar4);
            if (iVar5 == iVar2) {
              FUN_02181fd8(param_1,iVar5);
              bVar1 = true;
            }
          }
        }
        iVar4 = iVar4 + 0xc;
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(DAT_021a75a4 + 0x14));
    }
    if (bVar1) {
      FUN_02177aac(param_2[1]);
      return;
    }
    FUN_02181f44(param_1,param_2[1]);
  }
  return;
}

