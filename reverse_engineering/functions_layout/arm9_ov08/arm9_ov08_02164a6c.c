
void FUN_02164a6c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x10);
  uVar2 = (ushort)(1 << (uVar4 & 0xff));
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02164ca4();
    FUN_02164cb8(9);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < 8) {
    if (6 < uVar1) {
      if (DAT_0216e824 != (code *)0x0) {
        (*DAT_0216e824)(0x8000000,s_StartParent___new_child__aid__x__0216c0d8,uVar4);
      }
      if ((*(code **)(DAT_0216e828 + 0x4c) == (code *)0x0) ||
         (iVar3 = (**(code **)(DAT_0216e828 + 0x4c))(param_1), iVar3 != 0)) {
        *(ushort *)(DAT_0216e828 + 0x52) = *(ushort *)(DAT_0216e828 + 0x52) | uVar2;
        return;
      }
      iVar3 = FUN_02058d5c(0,*(undefined2 *)(param_1 + 0x10));
      if (iVar3 == 2) {
        return;
      }
      FUN_02164ca4();
      FUN_02164cb8(9);
      return;
    }
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        iVar3 = FUN_021649fc();
        if (iVar3 == 0) {
          FUN_02164cb8(9);
          return;
        }
        return;
      }
      if (uVar1 == 2) {
        return;
      }
    }
  }
  else if (uVar1 == 9) {
    if (DAT_0216e824 != (code *)0x0) {
      (*DAT_0216e824)(0x8000000,s_StartParent___child__aid__x__dis_0216c104,uVar4);
    }
    *(ushort *)(DAT_0216e828 + 0x52) = *(ushort *)(DAT_0216e828 + 0x52) & ~uVar2;
    return;
  }
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_unknown_indicate__state____d_0216c060);
  }
  return;
}

