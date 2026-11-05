
void FUN_02192e3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c [2];
  
  if (param_1 != 0) {
    FUN_020532f8(param_1 + 0x20);
    uVar1 = OS_DisableInterrupts();
    FUN_02052e00();
    iVar2 = FUN_02053bd8(param_1,local_1c,0);
    if (iVar2 != 0) {
      do {
        if (local_1c[0] != 0) {
          if (*(int *)(local_1c[0] + 8) != 0) {
            FUN_02053c84(*(int *)(local_1c[0] + 8),0xfffffff5,0);
          }
          FUN_0219195c(local_1c[0]);
        }
        iVar2 = FUN_02053bd8(param_1,local_1c,0);
      } while (iVar2 != 0);
    }
    FUN_02052dc8();
    FUN_020530c4();
    OS_RestoreInterrupts(uVar1);
  }
  return;
}

