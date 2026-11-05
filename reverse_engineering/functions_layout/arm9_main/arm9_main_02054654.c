
undefined4 FUN_02054654(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  OS_DisableInterrupts();
  *(undefined4 **)(&DAT_020aadd4 + param_1 * 4) = param_2;
  param_2[4] = param_2 + 5;
  param_2[1] = param_4;
  iVar2 = 0;
  if (0 < (int)param_2[1]) {
    iVar3 = 0;
    do {
      iVar1 = param_2[4];
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + iVar3) = 0xffffffff;
      iVar1 = iVar1 + iVar3;
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar3 = iVar3 + 0xc;
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 8);
    } while (iVar2 < (int)param_2[1]);
  }
  *param_2 = 0xffffffff;
  param_2[2] = param_2[4] + param_4 * 0xc + 0x1fU & 0xffffffe0;
  param_2[3] = param_3 & 0xffffffe0;
  OS_RestoreInterrupts();
  return param_2[2];
}

