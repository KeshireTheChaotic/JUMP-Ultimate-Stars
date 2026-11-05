
void FUN_02053210(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = *param_1;
  if (iVar2 != 0) {
    while (iVar2 != 0) {
      iVar2 = FUN_020538c0(param_1);
      *(undefined4 *)(iVar2 + 100) = 1;
      *(undefined4 *)(iVar2 + 0x78) = 0;
      *(undefined4 *)(iVar2 + 0x80) = 0;
      *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar2 + 0x80);
      iVar2 = *param_1;
    }
    param_1[1] = 0;
    *param_1 = param_1[1];
    FUN_020530c4();
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

