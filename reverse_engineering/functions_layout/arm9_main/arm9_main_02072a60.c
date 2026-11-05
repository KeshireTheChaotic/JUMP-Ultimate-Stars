
uint FUN_02072a60(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* JUS-TAG source_file_inferred="Record.cpp" */
  uVar3 = 0;
  uVar1 = 0xffffffff;
  uVar2 = 0xffffffff;
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar6 = (uint)*(ushort *)(param_1 + uVar5 * 0x28 + 0x7408);
    if ((int)uVar1 < (int)uVar6) {
      uVar1 = uVar6;
      uVar3 = uVar5;
    }
    if ((uVar6 < 0x8000) && ((int)uVar2 < (int)uVar6)) {
      uVar2 = uVar6;
      uVar4 = uVar5;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if ((uVar1 == 0xffff) && (uVar2 != 0xffffffff)) {
    return uVar4;
  }
  return uVar3;
}

