
void FUN_02053360(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_020aab78 == param_1) {
    FUN_020533e8();
  }
  FUN_02052e00();
  FUN_02053e18(param_1);
  FUN_02053334(param_1);
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0205386c(*(int *)(param_1 + 0x78),param_1);
  }
  FUN_0205378c(param_1);
  *(undefined4 *)(param_1 + 100) = 2;
  FUN_02053210(param_1 + 0x9c);
  FUN_02052dc8();
  OS_RestoreInterrupts(uVar1);
  FUN_020530c4();
  return;
}

