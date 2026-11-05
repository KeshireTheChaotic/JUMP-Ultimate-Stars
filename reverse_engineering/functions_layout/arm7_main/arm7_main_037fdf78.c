
void FUN_037fdf78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  if (param_1 == 0) {
    FUN_037fe538();
  }
  iVar2 = DAT_03808484;
  if (DAT_03808484 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_03808484 + 0x18);
  }
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) == param_1) {
      FUN_037fdff4();
    }
    iVar2 = iVar3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x18);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

