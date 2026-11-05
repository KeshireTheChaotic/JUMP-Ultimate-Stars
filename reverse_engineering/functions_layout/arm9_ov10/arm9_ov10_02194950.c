
undefined1 FUN_02194950(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_18 [2];
  
  iVar4 = *(int *)(param_1 + 0xc);
  do {
    pcVar1 = (char *)FUN_0218f094(local_18,param_1);
    if (local_18[0] == 0) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return 9;
    }
  } while (local_18[0] < 5);
  if (*pcVar1 == -0x80) {
    if ((*(char *)(iVar4 + 0x454) == '\0') || (*(char *)(iVar4 + 0x455) != '\0')) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
    }
    else {
      local_18[0] = (uint)(byte)pcVar1[1];
      FUN_0218efe4(2,param_1);
      pcVar1 = (char *)(*DAT_021a84fc)(local_18[0]);
      if (pcVar1 == (char *)0x0) {
        *(undefined1 *)(iVar4 + 0x455) = 9;
        return 9;
      }
      iVar2 = FUN_02194c58(pcVar1,local_18[0],param_1);
      if ((iVar2 == 0) && (*pcVar1 == '\x01')) {
        FUN_0219563c(iVar4,pcVar1 + 1);
      }
      else {
        *(undefined1 *)(iVar4 + 0x455) = 9;
      }
      FUN_02194c2c(iVar4,pcVar1,local_18[0]);
      (*DAT_021a8528)(pcVar1);
    }
  }
  else {
    local_18[0] = CONCAT11(pcVar1[3],pcVar1[4]) + 5;
    if (0x4805 < local_18[0]) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return 9;
    }
    iVar2 = (*DAT_021a84fc)();
    if (iVar2 == 0) {
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return 9;
    }
    iVar3 = FUN_02194c58(iVar2,local_18[0],param_1);
    if (iVar3 != 0) {
      (*DAT_021a8528)(iVar2);
      *(undefined1 *)(iVar4 + 0x455) = 9;
      return 9;
    }
    FUN_02194a7c(iVar4,iVar2);
  }
  return *(undefined1 *)(iVar4 + 0x455);
}

