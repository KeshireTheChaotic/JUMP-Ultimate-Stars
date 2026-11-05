
void FUN_0208a2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10) * 8;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(uint *)(iVar2 + 0xc) = (uint)(byte)(&DAT_0214ca64)[iVar1] << 0xc;
  FUN_02024c3c(iVar2,1);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(uint *)(iVar2 + 0x10) = (uint)(byte)(&DAT_0214ca65)[iVar1] << 0xc;
  FUN_02024c3c(iVar2,1);
  *(uint *)(*(int *)(param_1 + 4) + 0x80) = (int)(uint)(byte)(&DAT_0214ca63)[iVar1] >> 4 & 1;
  return;
}

