
undefined4 FUN_0218c310(char *param_1,int *param_2,undefined2 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  int unaff_r7;
  char acStack_118 [260];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    unaff_r7 = 0;
    uVar6 = 0;
  }
  else {
    pcVar2 = (char *)FUN_02004d14(param_1,0x3a);
    if (pcVar2 == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      if (pcVar2 == param_1) {
        param_1 = (char *)0x0;
        unaff_r7 = 0;
      }
      else {
        iVar4 = (int)pcVar2 - (int)param_1;
        if (0xff < iVar4) {
          FUN_02002068(s_len_<_GTI2_STACK_HOSTLEN_MAX_021a66d0,s_gt2Utility_c_021a66f0,0,0x81);
        }
        FUN_02002434(acStack_118,param_1,iVar4);
        param_1 = acStack_118;
        param_1[iVar4] = '\0';
      }
      pcVar3 = pcVar2 + 1;
      cVar1 = pcVar2[1];
      while (iVar4 = (int)cVar1, iVar4 != 0) {
        if ((iVar4 < 0) || (0x7f < iVar4)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(ushort *)(&DAT_0208d520 + iVar4 * 2) & 8;
        }
        if (uVar5 == 0) {
          return 0;
        }
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      iVar4 = FUN_02005f14(pcVar2 + 1);
      if ((iVar4 < 0) || (0xffff < iVar4)) {
        return 0;
      }
      uVar6 = (undefined2)iVar4;
    }
    if ((param_1 != (char *)0x0) && (unaff_r7 = FUN_020019ec(param_1), unaff_r7 == -1)) {
      iVar4 = FUN_02193970(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      unaff_r7 = *(int *)**(undefined4 **)(iVar4 + 0xc);
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = unaff_r7;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = uVar6;
  }
  return 1;
}

