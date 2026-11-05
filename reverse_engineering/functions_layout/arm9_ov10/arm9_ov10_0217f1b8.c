
void FUN_0217f1b8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_02001ed8();
  iVar2 = *(int *)(param_1 + 8);
  while ((iVar2 != 0 && (*(int *)(iVar2 + 0x1c) + 0x9c4U < uVar1))) {
    *(byte *)(iVar2 + 0x15) = *(byte *)(iVar2 + 0x15) | 0x10;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 0x9c4;
    *(byte *)(*(int *)(param_1 + 8) + 0x15) = *(byte *)(*(int *)(param_1 + 8) + 0x15) & 0xd3;
    (**(code **)(param_1 + 0x44))
              (param_1,1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x48));
    FUN_0217f674(param_1 + 8);
    iVar2 = *(int *)(param_1 + 8);
  }
  return;
}

