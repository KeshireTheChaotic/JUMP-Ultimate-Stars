
void FUN_027e6164(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = DAT_027f97f0;
  OS_DisableInterrupts();
  if (*(short *)(iVar1 + 0xce) == 1) {
    OS_RestoreInterrupts();
  }
  else {
    *(undefined2 *)(iVar1 + 0xce) = 1;
    OS_RestoreInterrupts();
    puVar2 = (undefined4 *)FUN_027e0134();
    if (puVar2 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      *puVar2 = 0x1c;
      iVar3 = FUN_037fcc6c(&DAT_027f8328,puVar2,0);
    }
    if ((iVar3 == 0) && (*(undefined2 *)(iVar1 + 0xce) = 0, DAT_027f97ec != 0)) {
      puVar4 = (undefined2 *)FUN_03808074();
      *puVar4 = 0x80;
      puVar4[1] = 8;
      puVar4[2] = 0x16;
      puVar4[3] = 0x1c;
      FUN_038080d0();
    }
  }
  return;
}

