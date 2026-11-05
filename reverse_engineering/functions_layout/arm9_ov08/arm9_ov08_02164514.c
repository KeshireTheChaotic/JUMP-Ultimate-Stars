
void FUN_02164514(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02164ca4();
    FUN_02164cb8(9);
    return;
  }
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_channel__d_bratio____x_0216c048,*(undefined2 *)(param_1 + 8),
                    *(undefined2 *)(param_1 + 10));
  }
  uVar3 = (uint)*(ushort *)(param_1 + 8);
  uVar1 = *(ushort *)(param_1 + 10);
  if (uVar1 < *(ushort *)(DAT_0216e828 + 0x5e)) {
    *(ushort *)(DAT_0216e828 + 0x5e) = uVar1;
    *(short *)(DAT_0216e828 + 0x60) = (short)(1 << (uVar3 - 1 & 0xff));
  }
  else if (*(ushort *)(DAT_0216e828 + 0x5e) == uVar1) {
    *(ushort *)(DAT_0216e828 + 0x60) =
         *(ushort *)(DAT_0216e828 + 0x60) | (ushort)(1 << (uVar3 - 1 & 0xff));
  }
  iVar2 = FUN_021645b0(uVar3 + 1 & 0xffff);
  if (iVar2 == 0x18) {
    FUN_02164cb8(7);
    return;
  }
  if (iVar2 != 2) {
    FUN_02164cb8(9);
  }
  return;
}

