
void FUN_02177694(undefined4 param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  undefined1 auStack_30 [28];
  
  bVar1 = false;
  bVar2 = true;
  if (*param_2 == 0) {
    local_48 = 0;
    iVar4 = *(int *)(DAT_021a75a4 + 0x14);
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar4 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar5);
        if (iVar4 == 1) {
          uVar3 = FUN_02177558();
          FUN_02069660(uVar3,*(int *)(DAT_021a75a4 + 0x18) + iVar5,auStack_30);
          iVar4 = FUN_02004c2c(auStack_30,(int)param_2 + 0x8e);
          if (iVar4 == 0) {
            FUN_02069670(*(int *)(DAT_021a75a4 + 0x18) + iVar5,param_2[1]);
            FUN_02069bc0(*(int *)(DAT_021a75a4 + 0x18) + iVar5);
            bVar1 = true;
          }
        }
        else {
          iVar4 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar5);
          if ((iVar4 == 3) ||
             (iVar4 = thunk_FUN_02069c44(*(int *)(DAT_021a75a4 + 0x18) + iVar5), iVar4 == 2)) {
            iVar4 = FUN_02069c1c(*(int *)(DAT_021a75a4 + 0x18) + iVar5);
            if (iVar4 == 1) {
              bVar2 = false;
            }
            else {
              iVar6 = param_2[1];
              uVar3 = FUN_02177558();
              iVar4 = FUN_02069718(uVar3,*(int *)(DAT_021a75a4 + 0x18) + iVar5);
              if (iVar6 == iVar4) {
                FUN_02069670(*(int *)(DAT_021a75a4 + 0x18) + iVar5,iVar6);
                FUN_02069bc0(*(int *)(DAT_021a75a4 + 0x18) + iVar5);
                bVar1 = true;
              }
            }
          }
        }
        iVar5 = iVar5 + 0xc;
        local_48 = local_48 + 1;
        iVar4 = *(int *)(DAT_021a75a4 + 0x14);
      } while (local_48 < iVar4);
    }
    if (bVar1) {
      FUN_02177ad0(*(undefined4 *)(DAT_021a75a4 + 0x18),iVar4,param_2[1]);
      if (bVar2) {
        FUN_02177e54();
      }
      *(undefined1 *)(DAT_021a75a4 + 0x1d) = 1;
    }
  }
  return;
}

