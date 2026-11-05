
bool FUN_0214f310(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
                    /* JUS-TAG source_file_inferred="JQuizCommonWork.cpp" */
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    return true;
  }
  if (uVar2 == 0xff) {
    return false;
  }
  uVar1 = (uint)(*param_1 >> 5);
  if ((*(uint *)(&DAT_020b0b9c + uVar1 * 4) & 1 << (uVar2 & 0x1f)) == 0) {
    return false;
  }
  bVar3 = 0;
  if ((*(uint *)(&DAT_020b0d20 + uVar1 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
    bVar3 = 2;
  }
  return param_1[1] <= bVar3;
}

