
void FUN_02160114(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02160064();
  if (iVar2 == 2) {
    FUN_0215eac8(DAT_0216ad8c + 0x120,3);
    uVar3 = OS_DisableInterrupts();
    DAT_0216ad88 = 3;
    if (*(code **)(DAT_0216ad8c + 4) != (code *)0x0) {
      (**(code **)(DAT_0216ad8c + 4))(3,0);
    }
    OS_RestoreInterrupts(uVar3);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

