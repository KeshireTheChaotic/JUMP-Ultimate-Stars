
void FUN_02155580(int param_1)

{
  if (param_1 != *(char *)(DAT_0216e6dc + 0x11f)) {
    FUN_02155120(param_1,1);
    FUN_02155120((int)*(char *)(DAT_0216e6dc + 0x11f),0);
    *(char *)(DAT_0216e6dc + 0x11f) = (char)param_1;
  }
  return;
}

