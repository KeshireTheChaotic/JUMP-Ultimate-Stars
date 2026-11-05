
int FUN_0380005c(int param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    switch(*(undefined1 *)(param_1 + 2)) {
    case 0:
      *(int *)(param_1 + 0x10) =
           -((int)(-*(int *)(param_1 + 0x10) * (uint)*(byte *)(param_1 + 0x1c)) >> 8);
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      break;
    case 1:
      sVar1 = *(short *)(&DAT_03807cd4 + (uint)*(byte *)(param_1 + 0x1d) * 2);
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (uint)*(ushort *)(param_1 + 0x1e);
      if (*(int *)(param_1 + 0x10) <= sVar1 * 0x80) {
        *(int *)(param_1 + 0x10) = sVar1 * 0x80;
        *(undefined1 *)(param_1 + 2) = 2;
      }
      break;
    case 2:
      break;
    case 3:
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (uint)*(ushort *)(param_1 + 0x20);
    }
  }
  return *(int *)(param_1 + 0x10) >> 7;
}

