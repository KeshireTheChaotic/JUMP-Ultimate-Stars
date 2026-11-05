
void FUN_0205455c(int param_1,int param_2)

{
  int iVar1;
  
  OS_DisableInterrupts();
  iVar1 = *(int *)(*(int *)(iRam020545b0 + param_1 * 4) + 0x10);
  *(undefined4 *)(iVar1 + param_2 * 0xc) = 0xffffffff;
  iVar1 = iVar1 + param_2 * 0xc;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 8);
  OS_RestoreInterrupts();
  return;
}

