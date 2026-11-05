
void FUN_02193e5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint local_18 [2];
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar4 + 0x824) == 0) {
    if (*(uint *)(param_1 + 0x44) < 5) {
      return;
    }
    iVar1 = FUN_0218f094(local_18,param_1);
    local_18[0] = CONCAT11(*(undefined1 *)(iVar1 + 3),*(undefined1 *)(iVar1 + 4)) + 5;
    if (0x4805 < local_18[0]) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return;
    }
    iVar1 = (*DAT_021a84fc)();
    *(int *)(iVar4 + 0x824) = iVar1;
    if (*(int *)(iVar4 + 0x824) == 0) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return;
    }
    *(uint *)(iVar4 + 0x828) = local_18[0];
    *(undefined4 *)(iVar4 + 0x82c) = 0;
    *(undefined1 *)(iVar4 + 0x456) = 0;
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  uVar2 = FUN_0218f094(local_18,param_1);
  uVar3 = *(int *)(iVar4 + 0x828) - *(int *)(iVar4 + 0x82c);
  bVar5 = local_18[0] < uVar3;
  if (!bVar5) {
    local_18[0] = uVar3;
  }
  FUN_02051890(uVar2,*(int *)(iVar4 + 0x824) + *(int *)(iVar4 + 0x82c),local_18[0]);
  FUN_0218efe4(local_18[0],param_1);
  if (bVar5) {
    *(int *)(iVar4 + 0x82c) = *(int *)(iVar4 + 0x82c) + local_18[0];
  }
  else {
    FUN_02194a7c(iVar4,*(undefined4 *)(iVar4 + 0x824));
    if (*(char *)(iVar4 + 0x456) == '\0') {
      *(undefined4 *)(iVar4 + 0x824) = 0;
      return;
    }
  }
  return;
}

