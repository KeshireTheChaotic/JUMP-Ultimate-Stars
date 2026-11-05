
void FUN_037fdff4(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  param_1[9] = 1;
  if (*param_1 == 0) {
    OS_RestoreInterrupts();
  }
  else {
    FUN_037fe214(param_1);
    *param_1 = 0;
    OS_RestoreInterrupts(uVar1);
  }
  return;
}

