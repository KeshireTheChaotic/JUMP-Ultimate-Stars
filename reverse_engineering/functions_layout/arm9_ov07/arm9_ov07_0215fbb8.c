
void FUN_0215fbb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_r5;
  bool bVar3;
  int iStack_14;
  ushort uStack_10;
  undefined2 uStack_e;
  
  if (*(int *)(param_1 + 0x50ec) != 0) {
    return;
  }
  bVar3 = *(short *)(param_1 + 0x50e4) == 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x50fc);
    unaff_r5 = (uint)*(ushort *)(iVar1 + 0x34);
  }
  else {
    iVar1 = param_1 + 0x5100;
  }
  uStack_e = *(undefined2 *)(param_1 + 0x50e6);
  if (!bVar3) {
    unaff_r5 = (uint)*(ushort *)(iVar1 + 0x6e);
  }
  iStack_14 = param_1 + 0x4ee0;
  uStack_10 = (ushort)unaff_r5;
  if (*(code **)(param_1 + 0x50f8) != (code *)0x0) {
    (**(code **)(param_1 + 0x50f8))(7,&iStack_14);
  }
  if (unaff_r5 < uStack_10) {
    return;
  }
  uVar2 = FUN_020596e8(FUN_0215f954,0,iStack_14);
  uVar2 = FUN_0215fcb8(param_1,0xf,uVar2);
  *(undefined4 *)(param_1 + 0x50ec) = uVar2;
  return;
}

