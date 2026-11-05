
undefined4 FUN_0218f094(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0x44) == 0) && (*(char *)(param_2 + 8) == '\x04')) {
    uVar1 = OS_DisableInterrupts();
    while ((*(int *)(param_2 + 0x44) == 0 && (*(char *)(param_2 + 8) == '\x04'))) {
      *(undefined4 *)(param_2 + 4) = 2;
      FUN_02053290(0);
    }
    OS_RestoreInterrupts(uVar1);
  }
  else {
    FUN_02053008();
  }
  *param_1 = *(int *)(param_2 + 0x44);
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_2 + 0x40);
}

