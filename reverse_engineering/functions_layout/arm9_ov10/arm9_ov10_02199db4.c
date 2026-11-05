
undefined4 FUN_02199db4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02198c00();
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x2260) == 9) {
      uVar3 = FUN_02199d38();
    }
  }
  OS_RestoreInterrupts(uVar1);
  return uVar3;
}

