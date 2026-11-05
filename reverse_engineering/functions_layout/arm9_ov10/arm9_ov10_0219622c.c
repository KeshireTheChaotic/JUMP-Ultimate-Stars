
void FUN_0219622c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  uVar1 = OS_DisableInterrupts();
  iVar4 = 0;
  puVar3 = &DAT_021a9f24;
  while ((puVar3[0x5a] == '\0' || (iVar2 = FUN_020024cc(puVar3,param_1 + 0x74,0x20), iVar2 != 0))) {
    puVar3 = puVar3 + 0x5c;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
LAB_02196268:
      OS_RestoreInterrupts(uVar1);
      return;
    }
  }
  puVar3[0x5a] = 0;
  goto LAB_02196268;
}

