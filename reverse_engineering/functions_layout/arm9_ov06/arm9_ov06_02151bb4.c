
void FUN_02151bb4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x37);
  *(char *)(iVar2 + 0x37) = *(char *)(iVar2 + 0x37) + '\x01';
  if (0x8c < bVar1) {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

