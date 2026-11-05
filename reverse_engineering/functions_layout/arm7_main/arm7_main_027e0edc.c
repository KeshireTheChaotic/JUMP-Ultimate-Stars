
void FUN_027e0edc(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = DAT_027f97f0;
  if (*(int *)(DAT_027f97f0 + 0x10) != 0) {
    iVar2 = (int)(uint)*(byte *)(param_1 + 0x1f) >> 2;
    if ((*(byte *)(param_1 + 0x1f) & 2) == 0) {
      iVar2 = iVar2 + 0x19;
    }
    FUN_027e0334(iVar2);
    uVar1 = FUN_027e02c0();
    *(undefined2 *)(iVar4 + 0xbc) = uVar1;
    iVar2 = FUN_027e0570(param_1 + 0x2e);
    if ((iVar2 != 1) && (*(ushort *)(param_1 + 0x16) < 0x5e5)) {
      *(ushort *)(iVar4 + 0xae) = *(ushort *)(iVar4 + 0xae) ^ 1;
      iVar4 = *(int *)(iVar4 + (uint)*(ushort *)(iVar4 + 0xae) * 4 + 0xb0);
      FUN_037fe788(param_1 + 0x10,iVar4,*(ushort *)(param_1 + 0x16) + 0x2d & 0xfffffffe);
      FUN_037fe788(param_1 + 0x28,iVar4 + 0x18,6);
      FUN_037fe788(param_1 + 0x2e,iVar4 + 0x1e,6);
      puVar3 = (undefined2 *)FUN_03808074();
      *puVar3 = 0x11;
      puVar3[1] = 0;
      puVar3[2] = 0xf;
      *(int *)(puVar3 + 4) = iVar4;
      FUN_038080d0();
    }
  }
  return;
}

