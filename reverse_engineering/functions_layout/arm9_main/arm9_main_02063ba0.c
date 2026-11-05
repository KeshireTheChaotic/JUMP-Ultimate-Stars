
void FUN_02063ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x1c) & 0x100) == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = OS_DisableInterrupts();
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
    FUN_02053210(param_1 + 0xc);
    OS_RestoreInterrupts(uVar2);
  }
  else {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
    FUN_020634f4(*(undefined4 *)(param_1 + 0x24));
    iVar1 = FUN_020641d4(param_1);
    if (iVar1 != 0) {
      FUN_02064160();
      return;
    }
  }
  return;
}

