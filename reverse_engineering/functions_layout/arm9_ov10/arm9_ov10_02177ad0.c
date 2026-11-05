
int FUN_02177ad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_24 = -1;
  if (0 < param_2) {
    iVar5 = param_1;
    local_1c = param_1;
    do {
      iVar1 = FUN_02177f7c(local_20);
      if (iVar1 != 0) {
        if (iVar1 == param_3) {
          local_24 = local_20;
        }
        iVar4 = local_20 + 1;
        if (iVar4 < param_2) {
          iVar3 = param_1 + iVar4 * 0xc;
          do {
            iVar2 = FUN_02177f7c(iVar4);
            if (iVar1 == iVar2) {
              iVar2 = thunk_FUN_02069c44(local_1c);
              if ((iVar2 == 2) && (iVar2 = thunk_FUN_02069c44(iVar3), iVar2 == 3)) {
                FUN_02069670(iVar5,iVar1);
              }
              iVar2 = FUN_02069c1c(iVar3);
              if (iVar2 != 0) {
                FUN_02069bc0(iVar5);
              }
              FUN_02177bf8(param_1,iVar4,local_20);
              *(undefined1 *)(DAT_021a75a4 + 0x1d) = 1;
            }
            iVar3 = iVar3 + 0xc;
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_2);
        }
      }
      local_1c = local_1c + 0xc;
      iVar5 = iVar5 + 0xc;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  return local_24;
}

