
bool FUN_02063c78(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = OS_DisableInterrupts();
  bVar2 = (*(uint *)(param_1 + 0x1c) & 8) == 0;
  if (bVar2) {
    if ((*(uint *)(param_1 + 0x1c) & 0x10) == 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
    }
    else {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x40;
      do {
        FUN_02053290(param_1 + 0x14);
      } while ((*(uint *)(param_1 + 0x1c) & 0x40) != 0);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return bVar2;
}

