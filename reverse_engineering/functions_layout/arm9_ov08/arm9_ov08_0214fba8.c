
undefined4 FUN_0214fba8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if ((DAT_0216d118 == 7) && (iVar2 = func_0x02198e80(), iVar2 == 3)) {
    DAT_0216d118 = 4;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

