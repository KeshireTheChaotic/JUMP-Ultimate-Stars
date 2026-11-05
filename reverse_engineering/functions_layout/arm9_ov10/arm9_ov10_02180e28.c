
undefined4 FUN_02180e28(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0200131c(*(undefined4 *)(param_1 + 8));
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_020012d8(*(undefined4 *)(param_1 + 8),iVar4);
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        if (param_3 < 1) {
          return 0;
        }
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        if (cVar1 == -1) {
          iVar3 = FUN_021816dc(param_2,param_3);
          if (iVar3 == -1) {
            return 0;
          }
          param_2 = param_2 + iVar3;
          param_3 = param_3 - iVar3;
        }
      }
      else if (iVar3 == 1) {
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      }
      else {
        if (iVar3 != 2) {
          FUN_02002068(&DAT_021a4d14,s_sb_serverlist_c_021a4cf0,0,0x317);
          return 0;
        }
        param_2 = param_2 + 2;
        param_3 = param_3 + -2;
      }
      if (param_3 < 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

