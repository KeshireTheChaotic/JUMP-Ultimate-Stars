
void FUN_0215f814(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  iVar2 = DAT_0216ad84;
  iVar3 = FUN_0215fc84(DAT_0216ad84,param_1);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 < 0x16) {
    if (0x14 < uVar1) {
      uStack_12 = (undefined2)(1 << (*(ushort *)(param_1 + 0x12) & 0xff));
      uStack_14 = *(undefined2 *)(param_1 + 0x10);
      uStack_18 = *(undefined4 *)(param_1 + 0xc);
      if (*(code **)(iVar2 + 0x50f8) == (code *)0x0) {
        return;
      }
      (**(code **)(iVar2 + 0x50f8))(8,&uStack_18);
      return;
    }
    if (9 < uVar1) {
      return;
    }
    if (uVar1 < 7) {
      return;
    }
    if (uVar1 == 7) {
      return;
    }
    if (uVar1 != 9) {
      return;
    }
  }
  else if (uVar1 != 0x1a) {
    return;
  }
  *(ushort *)(iVar2 + 0x50e6) =
       *(ushort *)(iVar2 + 0x50e6) & ~(ushort)(1 << (*(ushort *)(param_1 + 0x12) & 0xff));
  if (*(code **)(iVar2 + 0x50f8) == (code *)0x0) {
    return;
  }
  (**(code **)(iVar2 + 0x50f8))(0xb,1 << (*(ushort *)(param_1 + 0x12) & 0xff));
  return;
}

