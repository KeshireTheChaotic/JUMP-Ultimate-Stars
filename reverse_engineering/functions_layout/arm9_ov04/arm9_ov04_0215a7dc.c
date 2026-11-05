
void FUN_0215a7dc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar2 = FUN_0203b3e4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined4 *)(iVar2 + 0x8e8) = 1;
  *(int *)(iVar2 + 0x8ec) = 1 << (uint)bVar1;
  *(undefined4 *)(iVar2 + 0x8f0) = 1;
  *(undefined1 *)(iVar2 + 0x902) = 1;
  iVar2 = FUN_0203b3e4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined4 *)(iVar2 + 0x8c0) = 8;
  *(undefined4 *)(iVar2 + 0x8c4) = 8;
  *(undefined4 *)(iVar2 + 0x8f0) = 1;
  *(undefined1 *)(iVar2 + 0x902) = 1;
  return;
}

