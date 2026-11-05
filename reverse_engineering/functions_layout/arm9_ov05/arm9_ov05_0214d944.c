
int FUN_0214d944(undefined4 *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (**(code **)(DAT_0214bd80 + 0x18e8))(*param_2);
      if (iVar1 != 0) {
        *param_1 = param_2;
        if ((char)param_2[3] == '\0') {
          iVar1 = (int)(uint)*(byte *)((int)param_2 + 0xb) >> 4;
          if (iVar1 == 3) {
            param_1[1] = (uint)*param_2 +
                         (uint)*(byte *)(*(int *)(DAT_0214bd80 + 0x40) +
                                        (uint)*(byte *)((int)param_2 + 7) * 0x3c) * 0x400;
          }
          else {
            param_1[1] = (uint)*param_2 + iVar1 * 0x400;
          }
        }
        else if ((char)param_2[3] == '\x01') {
          param_1[1] = (uint)*param_2 +
                       (uint)*(byte *)((uint)*(byte *)((int)param_2 + 7) * 0x14 +
                                       *(int *)(DAT_0214bd80 + 0x48) + (char)param_2[4] * 8 + -8) *
                       0x400;
        }
        else {
          param_1[1] = *param_2 + 0xc00;
        }
        param_1 = param_1 + 2;
        iVar2 = iVar2 + 1;
      }
      param_2 = param_2 + 6;
    }
  }
  return iVar2;
}

