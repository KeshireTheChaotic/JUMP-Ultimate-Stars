
void FUN_021619f0(int param_1)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int unaff_r4;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar3 = (*(byte *)(iVar2 + 0xb2) & 3) >> 1 == 0;
  *(byte *)(iVar2 + 0xb2) = *(byte *)(iVar2 + 0xb2) & 0xfd | bVar3 << 1;
  if (bVar3) {
    unaff_r4 = 0x510004;
  }
  if (!bVar3) {
    unaff_r4 = 0x510002;
  }
  func_0x021b3f78(*(undefined4 *)(*(int *)(iVar2 + 0x68) + 4),unaff_r4);
  func_0x021b3fb0(*(undefined4 *)(*(int *)(iVar2 + 0x68) + 4),unaff_r4);
  func_0x021b3fc4(*(undefined4 *)(*(int *)(iVar2 + 0x68) + 4),unaff_r4 + 1);
  func_0x021b3f78(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4),unaff_r4);
  func_0x021b3fb0(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4),unaff_r4);
  func_0x021b3fc4(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4),unaff_r4 + 1);
  bVar3 = (*(byte *)(iVar2 + 0xb2) & 3) >> 1 != 0;
  uVar1 = extraout_r1;
  if (bVar3) {
    uVar1 = 1;
  }
  if (!bVar3) {
    uVar1 = 0;
  }
  func_0x021c3508(*(undefined4 *)(iVar2 + 0x30),uVar1);
  func_0x021b65cc();
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x74) + 4),1);
  FUN_0207342c(0x78,0);
  return;
}

