
void FUN_02178760(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  uVar2 = FUN_02175628();
  FUN_0217718c();
  iVar3 = FUN_02176d50(uVar2);
  iVar4 = FUN_02178240(uVar2);
  if (*(char *)(iVar4 + 0x1ec) != '\0') {
    return;
  }
  iVar4 = FUN_02178224(uVar2);
  uVar1 = *(ushort *)(param_1 + 0x188);
  if (iVar4 == 0) {
    if (uVar1 == 0x10) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffed;
      *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
      return;
    }
    if (uVar1 == 0x11) {
      uVar2 = FUN_02177c24(uVar2);
      iVar3 = FUN_02179130(uVar2,0x21);
      if (iVar3 == 0) {
        *(undefined2 *)(param_1 + 0x188) = 0;
        *(undefined1 *)(param_1 + 0x18b) = 1;
      }
      else {
        *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
      }
      return;
    }
    *(ushort *)(param_1 + 0x188) = uVar1 + 1;
    if (uVar1 == 0x1e) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffed;
      *(undefined2 *)(param_1 + 0x188) = 0;
      *(undefined1 *)(param_1 + 0x18b) = 1;
      return;
    }
    if (0x13 < *(ushort *)(param_1 + 0x188)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 2;
    }
    if (0x19 < *(ushort *)(param_1 + 0x188)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
    }
    return;
  }
  if (uVar1 == 0) {
    *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 2;
    *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
    return;
  }
  *(ushort *)(param_1 + 0x188) = uVar1 + 1;
  if (uVar1 < 9) {
    return;
  }
  *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
  *(undefined2 *)(param_1 + 0x188) = 0x10;
  return;
}

