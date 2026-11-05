
void FUN_0214e2d8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(DAT_02172960 + 0x14c) = ~param_1 & *(uint *)(DAT_02172960 + 0x14c);
  uVar2 = *(uint *)(DAT_02172960 + 0x14c) & *(uint *)(DAT_02172960 + 0x150) | 0x800;
  iVar1 = FUN_0203b3e4();
  *(uint *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x4c) = uVar2;
  iVar1 = FUN_0203b404();
  *(uint *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x4c) = uVar2;
  return;
}

