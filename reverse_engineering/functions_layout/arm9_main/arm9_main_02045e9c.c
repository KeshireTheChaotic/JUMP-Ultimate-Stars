
short * FUN_02045e9c(int *param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)param_1[5];
  if (psVar1 != (short *)0x0) {
    while( true ) {
      if (param_2 <= ((ushort)psVar1[1] & 0x7fff)) {
        return psVar1;
      }
      if (*psVar1 == 0x7fff) break;
      psVar1 = (short *)(param_1[4] + *psVar1 * 4);
    }
  }
  iVar2 = *(int *)(param_1[1] + 4);
  do {
    if ((*(uint *)(iVar2 + 0xc) != 0xffffffff) && (DAT_02093c24 - 1U <= *(uint *)(iVar2 + 0xc))) {
      return (short *)0x0;
    }
    DAT_020a0e84 = *(int *)(iVar2 + 4);
    if (*(int *)(iVar2 + 0xc) == -1) {
      *(int *)(*(int *)(iVar2 + 8) + 4) = DAT_020a0e84;
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*param_1 + 8);
      *(int *)(iVar2 + 4) = *param_1;
      *(int *)(*(int *)(*param_1 + 8) + 4) = iVar2;
      *(int *)(*param_1 + 8) = iVar2;
    }
    else {
      *(undefined4 *)(iVar2 + 0xc) = 0;
      psVar1 = (short *)FUN_02045bd0(param_1);
      if (param_2 <= ((ushort)psVar1[1] & 0x7fff)) {
        return psVar1;
      }
    }
    iVar2 = DAT_020a0e84;
  } while (DAT_020a0e84 != 0);
  return (short *)0x0;
}

