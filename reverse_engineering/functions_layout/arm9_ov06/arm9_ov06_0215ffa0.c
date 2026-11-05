
void FUN_0215ffa0(undefined4 *param_1,ushort *param_2)

{
  if (*param_2 == 0) {
    return;
  }
  FUN_020781e4(*param_1);
  *param_2 = (ushort)((int)(uint)*param_2 >> 1);
  if (*param_2 < 0x100) {
    *param_2 = 0;
  }
  return;
}

