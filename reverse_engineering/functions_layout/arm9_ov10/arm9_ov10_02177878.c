
void FUN_02177878(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  if ((*param_2 == 0) && (param_2[1] != 0)) {
    iVar2 = param_3 * 0xc;
    iVar1 = thunk_FUN_02069c44(DAT_021a75a4[6] + iVar2);
    if (iVar1 != 0) {
      if (*DAT_021a75a4 != 1) {
        return;
      }
      *(undefined1 *)((int)DAT_021a75a4 + 0x1d) = 1;
      iVar4 = 0;
      iVar1 = param_2[1];
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          iVar1 = FUN_02177b88(DAT_021a75a4[6],param_3,*(undefined4 *)(param_2[3] + iVar3));
          if (iVar1 != 0) {
            *(char *)(DAT_021a75a4 + 7) = (char)DAT_021a75a4[7] + '\x01';
            *(undefined1 *)((int)DAT_021a75a4 + 0x1e) = 1;
            param_2[2] = 0x601;
            return;
          }
          iVar3 = iVar3 + 0xac;
          iVar4 = iVar4 + 1;
          iVar1 = param_2[1];
        } while (iVar4 < iVar1);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          FUN_02181ddc(param_1,*(undefined4 *)(param_2[3] + iVar1),local_1c);
          FUN_021779d8();
          if (local_1c[0] != -1) {
            FUN_02069670(DAT_021a75a4[6] + iVar2,*(undefined4 *)param_2[3]);
            FUN_02069bc0(DAT_021a75a4[6] + iVar2);
            FUN_02177e54(param_3);
            *(char *)(DAT_021a75a4 + 7) = (char)DAT_021a75a4[7] + '\x01';
            *(undefined1 *)((int)DAT_021a75a4 + 0x1e) = 1;
            param_2[2] = 0x601;
            return;
          }
          FUN_02177aac(*(undefined4 *)(param_2[3] + iVar1));
          iVar1 = iVar1 + 0xac;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_2[1]);
      }
      if (param_2[2] == 0x600) {
        return;
      }
      *(char *)(DAT_021a75a4 + 7) = (char)DAT_021a75a4[7] + '\x01';
      *(undefined1 *)((int)DAT_021a75a4 + 0x1e) = 1;
      return;
    }
  }
  if (*param_2 != 0) {
    FUN_021779d8();
    return;
  }
  if ((*DAT_021a75a4 == 1) ||
     (iVar2 = thunk_FUN_02069c44(DAT_021a75a4[6] + param_3 * 0xc), iVar2 == 0)) {
    *(char *)(DAT_021a75a4 + 7) = (char)DAT_021a75a4[7] + '\x01';
    *(undefined1 *)((int)DAT_021a75a4 + 0x1e) = 1;
  }
  return;
}

