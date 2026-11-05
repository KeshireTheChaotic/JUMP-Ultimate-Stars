
void FUN_037fc460(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (*param_1 != 0) {
    while (*param_1 != 0) {
      iVar2 = FUN_037fc9c4(param_1);
      *(undefined4 *)(iVar2 + 0x48) = 1;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      *(undefined4 *)(iVar2 + 100) = 0;
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar2 + 100);
    }
    param_1[1] = 0;
    *param_1 = param_1[1];
    FUN_037fc320();
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

