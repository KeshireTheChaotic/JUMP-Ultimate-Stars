
undefined4 FUN_0215dcac(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02159930();
  if (iVar1 != 0) {
    return 0;
  }
  if (((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x78) & 0x300) == 0) ||
     (uVar2 = *(uint *)(param_1 + 0x6c), iVar1 = (**(code **)(param_1 + 0x1d8))(param_1),
     iVar1 == 0 && (uVar2 & 0x12) != 0x12)) {
    return 0;
  }
  FUN_02157494(param_1,0xe,FUN_0215dd48,FUN_0215ddd4,0);
  return 1;
}

