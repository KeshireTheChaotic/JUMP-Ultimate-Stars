
void FUN_021bfe80(void)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (*(int *)(DAT_021d525c + 0x1320) == 0) {
    FUN_02055684();
  }
  FUN_021bfeb0();
  OS_RestoreInterrupts(uVar1);
  return;
}

