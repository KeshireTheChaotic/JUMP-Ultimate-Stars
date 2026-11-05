
void FUN_02062e1c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  DAT_020af508 = param_1;
  iVar2 = FUN_02063028();
  if (iVar2 == 0) {
    if (param_1 == 0) {
      uVar3 = 0x5000;
    }
    else {
      uVar3 = 0x1000;
    }
    OS_SetDPermissionsForProtectionRegion(0xf000,uVar3);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

