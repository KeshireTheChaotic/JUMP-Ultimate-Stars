
void FUN_027e5708(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar1 = DAT_027f97f0;
  iVar5 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = OS_DisableInterrupts();
  *(int *)(puVar1 + 0x58) = iVar5;
  puVar1[0x5c] = (short)uVar2;
  *(uint *)(puVar1 + 0x5a) = iVar5 + (uVar2 & 0xffff);
  puVar1[0x57] = 0;
  *(undefined4 *)(puVar1 + 0x54) = 0;
  puVar1[0x56] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *puVar1 = 0xb;
  puVar4 = (undefined2 *)FUN_03808074();
  *puVar4 = 0x11;
  puVar4[1] = 0;
  puVar4[2] = 0xe;
  FUN_038080d0();
  *(undefined4 *)(puVar1 + 8) = 1;
  OS_RestoreInterrupts(uVar3);
  return;
}

