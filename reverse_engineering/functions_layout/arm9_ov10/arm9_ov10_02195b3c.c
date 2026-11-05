
undefined4 FUN_02195b3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_24;
  
  if ((((*(int *)(param_1 + 0x5a4) == 0) || (*(int *)(param_1 + 0x5a8) == 0)) ||
      (*(int *)(param_2 + 0x10) == 0)) ||
     (((*(int *)(param_2 + 0xc) == 0 || (*(int *)(param_2 + 8) == 0)) ||
      (*(int *)(param_2 + 4) == 0)))) {
    return 2;
  }
  iVar1 = FUN_0200d12c(*(int *)(param_2 + 4) << 1,2);
  iVar2 = (*DAT_021a84fc)(iVar1 << 3);
  if (iVar2 == 0) {
    return 2;
  }
  iVar3 = iVar1 * 2;
  iVar6 = iVar2 + iVar3;
  iVar5 = iVar6 + iVar3;
  FUN_02197214(iVar6,*(undefined4 *)(param_1 + 0x5a4),*(undefined4 *)(param_1 + 0x5a8),iVar1);
  FUN_02197214(iVar5,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),iVar1);
  FUN_02197214(iVar5 + iVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),iVar1);
  uVar4 = FUN_021961b8();
  FUN_02197544(iVar2,iVar6,iVar5,iVar1,iVar5 + iVar3);
  FUN_0219619c(uVar4);
  FUN_021971e4(iVar6,iVar2,*(undefined4 *)(param_2 + 4),iVar1);
  local_24 = 0;
  if ((*(char *)(iVar2 + iVar3) == '\0') && (*(char *)(iVar6 + 1) == '\x01')) {
    iVar1 = 2;
    iVar3 = *(int *)(param_2 + 4);
    if (2 < iVar3) {
      do {
        if (*(char *)(iVar6 + iVar1) != -1) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
    if ((((iVar3 <= iVar1 + 1) || (*(char *)(iVar6 + iVar1) != '\0')) ||
        (*(char *)(iVar6 + iVar1 + 1) != '0')) ||
       (iVar1 = FUN_020024cc(param_1 + 0x468,(iVar6 + iVar3) - *(int *)(param_1 + 0x47c)),
       iVar1 != 0)) {
      local_24 = 2;
    }
  }
  else {
    local_24 = 2;
  }
  (*DAT_021a8528)(iVar2);
  return local_24;
}

