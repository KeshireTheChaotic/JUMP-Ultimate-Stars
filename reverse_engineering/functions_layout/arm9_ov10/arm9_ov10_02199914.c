
undefined4 FUN_02199914(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02198c00();
  uVar3 = 0;
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  if ((*(undefined4 **)(iVar2 + 0x2270) != (undefined4 *)0x0) && (0xc < *(uint *)(iVar2 + 0x2274)))
  {
    uVar3 = **(undefined4 **)(iVar2 + 0x2270);
  }
  OS_RestoreInterrupts(uVar1);
  return uVar3;
}

