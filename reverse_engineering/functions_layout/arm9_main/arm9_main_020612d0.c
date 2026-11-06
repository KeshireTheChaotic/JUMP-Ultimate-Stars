
void FUN_020612d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *in_lr;
  
  OS_DisableInterrupts();
  if (DAT_020aeb9c != 0) {
    OS_RestoreInterrupts();
    (*in_lr)(1);
    return;
  }
  DAT_020aeb9c = 1;
  OS_RestoreInterrupts();
  DAT_020aeba0 = param_1;
  DAT_020aeba4 = param_2;
  iVar1 = FUN_020610e8();
  if (iVar1 == 0) {
    (*in_lr)(3);
    return;
  }
  (*in_lr)(0);
  return;
}

