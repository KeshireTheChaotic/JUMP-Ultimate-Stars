
undefined4 FUN_0218f0f4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = *(int *)(param_2 + 0x44);
  while (iVar2 == 0) {
    *(undefined4 *)(param_2 + 4) = 3;
    FUN_02053290(0);
    iVar2 = *(int *)(param_2 + 0x44);
  }
  OS_RestoreInterrupts(uVar1);
  *param_1 = iVar2;
  return *(undefined4 *)(param_2 + 0x40);
}

