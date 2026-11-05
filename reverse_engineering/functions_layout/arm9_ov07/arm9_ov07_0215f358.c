
/* WARNING: Removing unreachable block (ram,0x0215f3b4) */
/* WARNING: Removing unreachable block (ram,0x0215f3b8) */

void FUN_0215f358(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = DAT_0216ad84;
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 == 0) {
    FUN_0215f1f4();
    return;
  }
  if (*(short *)(param_1 + 2) != 0) {
    return;
  }
  if (7 < uVar1) {
    if (uVar1 < 10) {
      return;
    }
    return;
  }
  if (6 < uVar1) {
    sVar2 = *(short *)(DAT_0216ad84 + 0x50e6);
    *(ushort *)(DAT_0216ad84 + 0x50e6) =
         *(ushort *)(DAT_0216ad84 + 0x50e6) | (ushort)(1 << (*(ushort *)(param_1 + 0x10) & 0xff));
    pcVar4 = *(code **)(iVar3 + 0x50f8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(10);
    }
    if (sVar2 == 0) {
      FUN_0215fbb8(iVar3);
      return;
    }
    return;
  }
  if (2 < uVar1) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 != 2) {
    return;
  }
  if (*(code **)(DAT_0216ad84 + 0x50f8) == (code *)0x0) {
    return;
  }
  (**(code **)(DAT_0216ad84 + 0x50f8))(5,*(undefined4 *)(DAT_0216ad84 + 0x50fc));
  return;
}

