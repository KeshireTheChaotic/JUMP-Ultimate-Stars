
void FUN_02061320(uint *param_1)

{
  code *in_lr;
  
  if ((param_1[1] & 0x1f) != 0) {
    (*in_lr)(2);
    return;
  }
  if ((param_1[2] & 0x1f) != 0) {
    (*in_lr)(2);
    return;
  }
  if (param_1[2] == 0) {
    (*in_lr)(2);
    return;
  }
  if (param_1[3] < 0x400) {
    (*in_lr)(2);
    return;
  }
  if (*param_1 < 6) {
    (*(code *)(*(short *)(*param_1 * 2 + 0x2061386) + 0x2061386))();
    return;
  }
  (*in_lr)(2);
  return;
}

