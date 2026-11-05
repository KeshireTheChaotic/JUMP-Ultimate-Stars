
void FUN_027e58c8(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_208 [512];
  
  psVar1 = DAT_027f97f0;
  OS_DisableInterrupts();
  if (*psVar1 == 0xb) {
    psVar1[8] = 0;
    psVar1[9] = 0;
    *psVar1 = 8;
    OS_RestoreInterrupts();
    iVar3 = FUN_027e26d8(auStack_208,7);
    if (*(short *)(iVar3 + 4) == 0) {
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 0x13;
      puVar2[1] = 0;
      FUN_038080d0();
    }
    else {
      FUN_027e588c(0x104);
    }
  }
  else {
    OS_RestoreInterrupts();
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0x13;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

