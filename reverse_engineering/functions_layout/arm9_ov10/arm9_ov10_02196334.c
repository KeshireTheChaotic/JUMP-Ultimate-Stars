
void FUN_02196334(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  puVar3 = &DAT_021a9f24;
  while (((puVar3[0x5a] == '\0' || (*(int *)(puVar3 + 0x54) != param_2)) ||
         (*(ushort *)(puVar3 + 0x58) != param_3))) {
    puVar3 = puVar3 + 0x5c;
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
LAB_0219639c:
      OS_RestoreInterrupts(uVar1);
      return;
    }
  }
  FUN_02051890(puVar3,param_1 + 0x74,0x20);
  FUN_02051890(puVar3 + 0x20,param_1,0x30);
  uVar4 = OS_GetTick();
  *(uint *)(puVar3 + 0x50) = (uint)uVar4 >> 0x10 | (int)((ulonglong)uVar4 >> 0x20) << 0x10;
  *(undefined1 *)(param_1 + 0x30) = 1;
  goto LAB_0219639c;
}

