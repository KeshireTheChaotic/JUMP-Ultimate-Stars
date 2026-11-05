
void FUN_02160074(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  uVar2 = FUN_02160064();
  switch(uVar2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    goto LAB_021600a4;
  case 3:
LAB_021600a4:
    uVar2 = OS_DisableInterrupts();
    DAT_0216ad88 = 1;
    if (*(code **)(DAT_0216ad8c + 4) != (code *)0x0) {
      (**(code **)(DAT_0216ad8c + 4))(1,0);
    }
    OS_RestoreInterrupts(uVar2);
    iVar3 = FUN_02160010();
    if (iVar3 == 0) {
      FUN_0215eac8(DAT_0216ad8c + 0x120,0);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

