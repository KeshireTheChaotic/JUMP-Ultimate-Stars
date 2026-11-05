
undefined4 FUN_037fd328(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  OS_DisableInterrupts();
  *(undefined4 **)(&DAT_03808434 + param_1 * 4) = param_2;
  param_2[4] = param_2 + 5;
  param_2[1] = param_4;
  for (iVar2 = 0; iVar2 < (int)param_2[1]; iVar2 = iVar2 + 1) {
    iVar1 = param_2[4] + iVar2 * 0xc;
    *(undefined4 *)(param_2[4] + iVar2 * 0xc) = 0xffffffff;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 8);
  }
  *param_2 = 0xffffffff;
  param_2[2] = param_2[4] + param_4 * 0xc + 0x1fU & 0xffffffe0;
  param_2[3] = param_3 & 0xffffffe0;
  OS_RestoreInterrupts();
  return param_2[2];
}

