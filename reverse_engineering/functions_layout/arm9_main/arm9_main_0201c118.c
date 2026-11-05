
void FUN_0201c118(int *param_1)

{
  if (((*(byte *)((int)param_1 + 0x32) & 0xf) >> 3 != 0) ||
     ((*(byte *)((int)param_1 + 0x32) & 0x1f) >> 4 != 0)) {
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 200))();
  return;
}

