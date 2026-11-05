
int FUN_0214dc18(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar2 = 0;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar3 = *param_2;
      if (*(char *)(iVar3 + 6) == '\0') {
        *param_1 = iVar3;
        puVar4 = (ushort *)*param_2;
        iVar3 = (int)(uint)*(byte *)((int)puVar4 + 0xb) >> 4;
        if (iVar3 == 3) {
          param_1[1] = (uint)*puVar4 +
                       (uint)*(byte *)(*(int *)(DAT_0214bd80 + 0x40) +
                                      (uint)*(byte *)((int)puVar4 + 7) * 0x3c) * 0x400;
        }
        else {
          param_1[1] = (uint)*puVar4 + iVar3 * 0x400;
        }
      }
      else if (*(char *)(iVar3 + 6) == '\x01') {
        cVar1 = *(char *)(iVar3 + 8);
        *param_1 = iVar3;
        param_1[1] = (uint)*(ushort *)*param_2 +
                     (uint)*(byte *)((uint)*(byte *)(*param_2 + 7) * 0x14 +
                                     *(int *)(DAT_0214bd80 + 0x48) + (cVar1 + -1) * 8) * 0x400;
      }
      else {
        *param_1 = iVar3;
        param_1[1] = *(ushort *)*param_2 + 0xc00;
      }
      param_1 = param_1 + 2;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 2;
    }
  }
  return iVar2;
}

