
void FUN_021963b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  uVar1 = OS_DisableInterrupts();
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  puVar3 = &DAT_021a9f24;
  while ((((puVar3[0x5a] == '\0' || (*(int *)(puVar3 + 0x54) != 0)) ||
          (*(short *)(puVar3 + 0x58) != 0)) ||
         (iVar2 = FUN_020024cc(puVar3,param_1 + 0x74,0x20), iVar2 != 0))) {
    puVar3 = puVar3 + 0x5c;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
LAB_0219640e:
      OS_RestoreInterrupts(uVar1);
      return;
    }
  }
  FUN_02051890(puVar3 + 0x20,param_1,0x30);
  *(undefined1 *)(param_1 + 0x30) = 1;
  goto LAB_0219640e;
}

