
void FUN_02158800(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar3 + 0xc4) != 0) {
    uVar1 = FUN_0214d838(*(undefined1 *)(iVar3 + 2));
    uVar4 = FUN_0214d820(*(undefined1 *)(iVar3 + 2));
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((uint)uVar4 < (uVar1 & 0xff)) {
      uVar2 = 0x1a;
    }
    if ((uVar1 & 0xff) <= (uint)uVar4) {
      uVar2 = 0x19;
    }
    FUN_02156dac(*(undefined4 *)(iVar3 + 0xc4),uVar2);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 3) {
    func_0x021b65cc();
    func_0x021b65e0(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 4));
  }
  if (*(int *)(iVar3 + 0x30) == 0) {
    return;
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),1);
  return;
}

